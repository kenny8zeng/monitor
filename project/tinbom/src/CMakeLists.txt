
set( SRC_FILE_LIST ${SRC_FILE_LIST}
	./core.hpp
	./core.cpp
)

add_library( ${PROJECT_NAME} STATIC ${SRC_FILE_LIST} )

