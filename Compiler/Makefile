CXX = clang++
CC = gcc

CXXFLAGS := -std=c++20
CFLAGS := -std=c11 -Iinclude -Wall -Wextra -Wpedantic
LDFLAGS := 

OBJS := src/main.o src/Frontend/Scanner.o src/Frontend/Math.o src/Frontend/HashTable.o src/Error.o src/Timer.o

%.o: %.cpp
	$(CXX) $(CFLAGS) $(CXXFLAGS) -c $< -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: test build clean release debug

all: build

build: $(OBJS)
	mkdir -p build
	$(CXX) $(LDFLAGS) $(OBJS) -o build/rwc.out

release: CFLAGS += -O3
release: CXXFLAGS += -D NDEBUG
release: build

dist: CXXFLAGS += -D NO_TIMERS
dist: release

debug: build

test: build
	build/rwc.out

celan: clean
clean:
	rm -rf src/*.o
	rm -rf src/*.d
	rm -rf src/Frontend/*.o
	rm -rf src/Frontend/*.d
	rm -rf srcpp/*.o
	rm -rf srcpp/*.d
	rm -rf build