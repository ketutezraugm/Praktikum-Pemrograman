# Variables
CXX = g++
CXXFLAGS = -Wall
TARGET = name_change
SRC = name_change.cpp

# Default target: compile the program
all: $(TARGET)

# Compile the name_change.cpp
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Run the program in test mode (using test.txt)
test: $(TARGET)
	./$(TARGET) test

# Clean up the compiled files
clean:
	rm -f $(TARGET)

# Phony targets to avoid conflicts
.PHONY: all clean test
