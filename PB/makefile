src := $(patsubst sources/%.c,%,$(wildcard sources/*.c))
all: $(src)

$(src):
	gcc -Wall ./sources/$@.c -o ./comps/$@ 