CC      := gcc
CFLAGS  := -Wall -Wextra -I./include
LDFLAGS := -lm

SRC_DIR   := src
TEST_DIR  := tests

SRC_VEC   := $(SRC_DIR)/vec3.c

TEST_SRCS := $(wildcard $(TEST_DIR)/test_*.c)
TESTS     := $(patsubst $(TEST_DIR)/test_%.c,%,$(TEST_SRCS))

.PHONY: all test clean

all: test                    

$(TEST_DIR)/test_%.o: $(TEST_DIR)/test_%.c $(SRC_VEC)
	$(CC) $(CFLAGS) -c $< -o $@

%: $(TEST_DIR)/test_%.o $(SRC_VEC)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

test: $(TESTS)                
	@echo "---- Iniciando testes ----"
	@$(foreach t,$(TESTS),./$(t);) \
	echo "---- Testes finalizados ----"

clean:
	rm -f $(TESTS) $(TEST_DIR)/test_*.o
