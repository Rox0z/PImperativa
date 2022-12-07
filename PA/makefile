src := $(patsubst sources/%.c,%,$(wildcard sources/*.c))
all: $(src)

$(src):
	gcc -Wall ./sources/$@.c ./sources/our_ints/our_ints.c -I sources/our_ints -o ./comps/$@ 