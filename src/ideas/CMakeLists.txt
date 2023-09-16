project (ideas LANGUAGES C)

add_executable(ideas 
	"a.c"
	"b.c"
	"d.c"
	"draw_holder.c"
	"draw_lamp.c"
	"draw_logo.c"
	"draw_logo_line.c"
	"draw_logo_shadow.c"
	"e.c"
	"f.c"
	"h.c"
	"i.c"
	"m.c"
	"n.c"
	"o.c"
	"p.c"
	"r.c"
	"s.c"
	"t.c"
	"track.c"
	"w.c"
)

target_include_directories(ideas SYSTEM PRIVATE
	${LIB_DIR}/freeglut/include
)

target_include_directories(ideas PRIVATE
	${SRC_DIR}/time_utils
)

target_link_libraries(ideas PRIVATE
	freeglut_static
	time_utils
)