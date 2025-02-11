# Compiler
CXX = g++

# Compiler flags
CXXFLAGS =  -std=c++11

# Target executable
TARGET = csci251_a3.app

# Source directory
SRC_DIR = .
SRCS = $(SRC_DIR)/menu.cpp $(SRC_DIR)/Point2D.cpp $(SRC_DIR)/Point3D.cpp $(SRC_DIR)/Line2D.cpp $(SRC_DIR)/Line3D.cpp

# Source files
#SRCS = $(wildcard $(SRC_DIR)/*.cpp)

# Default rule to build and run the executable
all: $(TARGET) run

# Rule to link all .cpp files into the target executable
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# Rule to run the executable
run: $(TARGET)
	./$(TARGET)

# Clean rule to remove the generated files
clean:
	@if [ -f $(TARGET) ]; then rm $(TARGET); fi
