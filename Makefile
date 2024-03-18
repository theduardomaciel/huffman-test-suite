# Makefile para automatizar a compilação e execução do projeto

# Nome do executável gerado
TARGET = ./build/tests_suite

# Diretórios de origem
CORE_DIR = ./core
BUILD_DIR = ./build

MODULES_DIR = $(CORE_DIR)/modules
UTILS_DIR = $(CORE_DIR)/utils

# Obtemos todos os arquivos .c em CORE_DIR
SRCS := $(wildcard $(CORE_DIR)/*.c) $(wildcard $(MODULES_DIR)/*.c) $(wildcard $(UTILS_DIR)/*.c)
OBJS := $(SRCS:$(CORE_DIR)/%.c=$(BUILD_DIR)/%.o)

# Opções de compilação
CC = gcc -g
CFLAGS = -Wall -I$(CORE_DIR) -I$(MODULES_DIR) -I$(UTILS_DIR) # Inclua ambos os diretórios
LDFLAGS = -lcunit # Biblioteca CUnit

# Comando para criar o diretório de build e os subdiretórios necessários
MKDIR_P = mkdir -p

# Alvo padrão
all: $(BUILD_DIR) $(TARGET)

# Compilação do executável
$(TARGET): $(OBJS)
	$(CC) $^ -o $@ $(LDFLAGS)

# Compilação dos arquivos de objeto
$(BUILD_DIR)/%.o: $(CORE_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Comando para criar o diretório de build e os subdiretórios necessários
$(BUILD_DIR):
	$(MKDIR_P) $(dir $(OBJS))

# Alvo para executar o programa após a compilação
run: all
	./$(TARGET) $(INPUT)

# Limpamos arquivos de compilação e o executável
clean:
	rm -rf $(BUILD_DIR)

# Define "clean" como um alvo phony, ou seja, não corresponde a um arquivo real
.PHONY: clean run
