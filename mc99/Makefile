BIN = play/_minc99
INC = -I../../include -I../../src -I.
#SRC_DIR = ../bk/src

CFLAGS += -g -Wall $(INC)

$(BIN): yacc src/mc99/mc99.y
	./yacc minc99.y
	$(CC) $(CFLAGS) -o $@ y.tab.c

clean:
	rm -f yacc minc99 y.*

.PHONY: clean
