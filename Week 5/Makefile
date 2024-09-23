# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Source file and output executable
SRC = fizzbuzz_reversed.cpp
TARGET = fizzbuzz_reversed

# Default target: Compile the program
all: $(TARGET)

# Compile the program
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Run the program
run: $(TARGET)
	./$(TARGET)

# Clean: Remove the compiled executable
clean:
	rm -f $(TARGET)

# Test: Run the program and compare output to expected output
test: $(TARGET)
	./$(TARGET) > output.txt
	diff output.txt expected_output.txt
