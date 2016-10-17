
set( SRC_FILE_LIST ${SRC_FILE_LIST}
	./pc-em.cpp
)

add_executable( pc-em ${SRC_FILE_LIST} )

target_link_libraries( pc-em tinbom )
