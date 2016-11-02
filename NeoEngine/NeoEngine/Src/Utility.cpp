#include "stdafx.h"
#include "Utility.h"


std::wstring EngineToUnicode(const char* src)
{
	WCHAR dest[MAX_PATH];
	MultiByteToWideChar(CP_ACP, 0, src,
		strlen(src) + 1, dest, sizeof(dest) / sizeof(dest[0]));

	return std::wstring(dest);
}

std::wstring EngineToUnicode(const std::string& src)
{
	return EngineToUnicode(src.c_str());
}

std::string UnicodeToEngine(const WCHAR* src)
{
	char dest[MAX_PATH];
	WideCharToMultiByte(CP_ACP, 0, src, -1,
		dest, MAX_PATH, NULL, NULL);

	return std::string(dest);
}

std::string UnicodeToEngine(const std::wstring& src)
{
	return UnicodeToEngine(src.c_str());
}

/** General hash function, derived from here
http://www.azillionmonkeys.com/qed/hash.html
Original by Paul Hsieh
*/
uint32 FastHash(const char * data, int len, uint32 hashSoFar /*= 0*/)
{
#  define OGRE_GET16BITS(d) (*((const uint16 *) (d)))

	uint32 hash;
	int rem;

	if (hashSoFar)
		hash = hashSoFar;
	else
		hash = len;

	if (len <= 0 || data == NULL) return 0;

	rem = len & 3;
	len >>= 2;

	/* Main loop */
	for (; len > 0; len--) {
		hash += OGRE_GET16BITS(data);
		uint32 tmp = (OGRE_GET16BITS(data + 2) << 11) ^ hash;
		hash = (hash << 16) ^ tmp;
		data += 2 * sizeof(uint16);
		hash += hash >> 11;
	}

	/* Handle end cases */
	switch (rem) {
	case 3: hash += OGRE_GET16BITS(data);
		hash ^= hash << 16;
		hash ^= data[sizeof(uint16)] << 18;
		hash += hash >> 11;
		break;
	case 2: hash += OGRE_GET16BITS(data);
		hash ^= hash << 11;
		hash += hash >> 17;
		break;
	case 1: hash += *data;
		hash ^= hash << 10;
		hash += hash >> 1;
	}

	/* Force "avalanching" of final 127 bits */
	hash ^= hash << 3;
	hash += hash >> 5;
	hash ^= hash << 4;
	hash += hash >> 17;
	hash ^= hash << 25;
	hash += hash >> 6;

	return hash;
}
