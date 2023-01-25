CCFLAGS := -std=c89 -Wall

all:
	gcc main.c $(CCFLAGS) -o kasm