FIND_PACKAGE(GLES)

IF(KLAYGE_GLES_FOUND)
	ADD_DEFINITIONS(-DGLLOADER_GLES_SUPPORT)
	INCLUDE_DIRECTORIES(${KLAYGE_GLES_INCLUDE_DIR})
	IF(APPLE AND NOT IOS)
		INCLUDE_DIRECTORIES(/opt/X11/include)
	ENDIF()

	SETUP_GLLOADER(glloader_es)
ENDIF()
