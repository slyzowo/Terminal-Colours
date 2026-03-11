CC = gcc
CXX = g++
FLAGS = -Werror -std=c23
BUILD = builds

all: lib-build test-c test-cpp

lib-build:
	$(CC) $(FLAGS) -c src/terminal_colours.c -o $(BUILD)/terminal_colours.o
	ar rcs $(BUILD)/terminal_colours.a $(BUILD)/terminal_colours.o

test-c:
	$(CC) demo/demo.c $(BUILD)/terminal_colours.a -o $(BUILD)/testC.exe
	./$(BUILD)/testC.exe

test-cpp:
	$(CXX) demo/demo.cpp $(BUILD)/terminal_colours.a -o $(BUILD)/testCPP.exe
	./$(BUILD)/testCPP.exe