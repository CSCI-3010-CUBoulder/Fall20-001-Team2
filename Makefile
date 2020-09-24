CXX = g++
CXXFLAGS	= -std=c++17 -Wall

all: test

clean:
	rm test

test: test.cp
	$(CXX) $(CXXFLAGS) test.cpp -o test
