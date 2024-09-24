# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall

# Target executable
TARGET = graphs

# Source files
SRCS = graph_assignment/main.cpp graph_assignment/graph.cpp

# Header files
HEADERS = graph_assignment/graph.h

# Object files
OBJS = $(SRCS:.cpp=.o)

# Rule to build the target executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile source files into object files
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up the build
clean:
	rm -f $(OBJS) $(TARGET)

# Run the program with an input file
run: $(TARGET)
	./$(TARGET) input_file.txt
