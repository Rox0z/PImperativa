src := $(patsubst sources/%.c,%,$(wildcard sources/*.c))
all: $(src)

$(src):
	gcc ./sources/$@.c -o ./comps/$@ 