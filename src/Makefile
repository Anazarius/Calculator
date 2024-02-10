CC = gcc
FLAGS = -Wall -Werror -Wextra
BUILD = ../build/

all: GO
GO:
	$(CC) $(FLAGS) main.c function.c -o $(BUILD)start
clean:
	rm -rf *.o $(BUILD)start
rebuild: clean all