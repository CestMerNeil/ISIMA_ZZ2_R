# 定义源文件和目标文件
SRC=$(wildcard Pokemon_Class/*.cpp) $(wildcard Dresseur_Class/*.cpp) $(wildcard Arene_Class/*.cpp) $(wildcard Exception/*.cpp) main.cpp
OBJ=$(patsubst %.cpp, build/%.o, $(SRC))

# 定义编译器和编译选项
CXX=g++-12
CXXFLAGS=-Wall -Wextra -MMD -g -O2
LDFLAGS=

# 定义生成的可执行文件
EXE=PokemonGame

# 默认目标，生成可执行文件
all: build $(EXE)

# 生成可执行文件
$(EXE): $(OBJ)
	$(CXX) -o $@ $^ $(LDFLAGS)

# 生成目标文件
build/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

# 创建build目录
build:
	@mkdir -p build

# 清理规则，保留Pokemon_Class文件夹
clean:
	rm -rf build core *.gch $(EXE)

# 包含依赖文件
-include $(OBJ:.o=.d)
