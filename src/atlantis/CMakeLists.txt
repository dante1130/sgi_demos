project (atlantis LANGUAGES C)

add_executable(atlantis
	"atlantis.c"
	"dolphin.c"
	"shark.c"
	"swim.c"
	"whale.c"
)

target_include_directories(atlantis SYSTEM PRIVATE
	${LIB_DIR}/freeglut/include
)

target_include_directories(atlantis PUBLIC
	${SRC_DIR}/time_utils
)

target_link_libraries(atlantis PUBLIC 
	freeglut_static
	time_utils
)