# Variables
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Iinclude -g
SRC_DIR = src
INCLUDE_DIR = include
BIN_DIR = bin
OBJ_DIR = $(SRC_DIR)/obj
EXEC = $(BIN_DIR)/knapsack

# Archivos fuente y objeto
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Regla principal
all: $(EXEC)

# Compilación del ejecutable
$(EXEC): $(OBJECTS) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

# Compilación de archivos objeto
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Crear directorios necesarios
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Limpieza
clean:
	rm -rf $(OBJ_DIR) $(EXEC)

.PHONY: all clean
