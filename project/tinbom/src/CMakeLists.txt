
set( SRC_FILE_LIST ${SRC_FILE_LIST}
	./core.h
	./core.c
)

add_library( ${PROJECT_NAME} STATIC ${SRC_FILE_LIST} )

