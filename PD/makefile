src := $(patsubst sources/%.c,%,$(wildcard sources/*.c))
all: $(src)

$(src):
	gcc -Wall ./sources/$@.c ./sources/our_libs/our_ints.c ./sources/our_libs/our_doubles.c -I sources/our_libs -o ./comps/$@ 