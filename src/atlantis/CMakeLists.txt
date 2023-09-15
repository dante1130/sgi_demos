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

target_link_libraries(atlantis PRIVATE 
	freeglut_static
)