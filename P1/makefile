src := $(patsubst sources/%.c,%,$(wildcard sources/*.c))
all: $(src)

$(src):
	gcc ./sources/$@.c ./minic.c -O2 -o ./comps/$@