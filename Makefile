CC = gcc

SRC_DIR   = src
INC_DIRS  = include
BUILD_DIR = build

BIN       = $(BUILD_DIR)/perun

INCLUDES  = $(addprefix -I,$(INC_DIRS))
CFLAGS    = -Wall $(INCLUDES)

SRC 		  = $(shell find $(SRC_DIR) -name "*.c")
OBJ       = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(SRC))

all: $(BIN)

# Linkage
$(BIN): $(OBJ) | $(BUILD_DIR)
		$(CC) $(OBJ) -o $@

# Each .c to .o inside BUILD_DIR
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# Create BUILD_DIR if it does not exists
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean
clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean
