SRC=VZZ.cpp ZZ.cpp
#SRC=$(wildcard *.cpp)  
CXX=g++-12
EXE=TP9

#MACOS=
MACOS=-isysroot /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk
CXXFLAGS+=-Wall -Wextra -MMD -g $(MACOS) #-std=c++11
LDFLAGS=$(MACOS)

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
