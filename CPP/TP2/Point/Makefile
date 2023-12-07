# 定义编译器
CXX = g++

# 定义编译选项
CXXFLAGS = -Wall -g

# 定义目标可执行文件及对象文件目录
TARGET = program
OBJDIR = make

# 默认目标
all: $(TARGET)

# 链接
$(TARGET): $(OBJDIR)/main.o $(OBJDIR)/Point.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJDIR)/main.o $(OBJDIR)/Point.o

# 编译 main.cpp
$(OBJDIR)/main.o: main.cpp Point.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o $(OBJDIR)/main.o

# 编译 Point.cpp
$(OBJDIR)/Point.o: Point.cpp Point.hpp
	$(CXX) $(CXXFLAGS) -c Point.cpp -o $(OBJDIR)/Point.o

# 创建对象文件目录
$(shell mkdir -p $(OBJDIR))

# 清理编译生成的文件
clean:
	rm -rf $(OBJDIR)
