src := $(patsubst sources/%.c,%,$(wildcard sources/*.c))
all: $(src)

$(src):
	gcc -Wall ./sources/$@.c ./minic.c -O2 -o ./comps/$@ && clear