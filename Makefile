OBJS	 = main.o algorithm.o utils.o
SOURCE	 = main.c algorithm.c utils.c
HEADER	 = includes/algorithm.h inclues/utils.h
OUT_DIR	 = out
OUT      = $(OUT_DIR)/sort
CC	     = gcc
FLAGS	 = -c -Wall -O0
LFLAGS   = -lm -O0

all: $(OBJS) | mkdir
	$(CC) -g $(OUT_DIR)/* -o $(OUT) $(LFLAGS)

main.o: main.c | mkdir
	$(CC) $(FLAGS) main.c -o $(OUT_DIR)/main.o -std=c11

algorithm.o: algorithms.c | mkdir
	$(CC) $(FLAGS) algorithms.c -o $(OUT_DIR)/algorithms.o -std=c11

utils.o: utils.c | mkdir
	$(CC) $(FLAGS) utils.c -o $(OUT_DIR)/utils.o -std=c11

mkdir:
	mkdir $(OUT_DIR)

clean:
	rm -rf $(OUT_DIR)
