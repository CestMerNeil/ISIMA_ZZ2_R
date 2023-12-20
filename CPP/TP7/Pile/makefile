SRC=Pile.cpp tests_catch.cpp main_test.cpp
#SRC=$(wildcard *.cpp)  
EXE=cpp6

CXX=g++-12
CXXFLAGS+=-Wall -Wextra -MMD -g -O2 #-fsanitize=address,undefined -L/usr/local/lib -I/usr/local/include
LDFLAGS= #-fsanitize=address,undefined -L/usr/local/lib -I/usr/local/include

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEP=$(addprefix build/,$(SRC:.cpp=.d))

all: $(OBJ)
	$(CXX) -o $(EXE) $^ $(LDFLAGS)

build/%.o: %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf build core *.gch

-include $(DEP)
