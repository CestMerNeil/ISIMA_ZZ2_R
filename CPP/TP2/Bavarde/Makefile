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
$(TARGET): $(OBJDIR)/main.o $(OBJDIR)/Bavarde.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJDIR)/main.o $(OBJDIR)/Bavarde.o

# 编译 main.cpp
$(OBJDIR)/main.o: main.cpp Bavarde.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o $(OBJDIR)/main.o

# 编译 .cpp
$(OBJDIR)/Bavarde.o: Bavarde.cpp Bavarde.hpp
	$(CXX) $(CXXFLAGS) -c Bavarde.cpp -o $(OBJDIR)/Bavarde.o

# 创建对象文件目录
$(shell mkdir -p $(OBJDIR))

# 清理编译生成的文件
clean:
	rm -rf $(OBJDIR)
