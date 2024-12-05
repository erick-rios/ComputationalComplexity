# Variables
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Iinclude -g
SRC_DIR = src
INCLUDE_DIR = include
BIN_DIR = bin
EXEC = $(BIN_DIR)/subset_solver

SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(SRC_DIR)/%.o)

# Regla principal
all: $(EXEC)

$(EXEC): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(SRC_DIR)/*.o $(EXEC)

.PHONY: all clean
