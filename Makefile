TARGET = ./bin/run/main.exe
CC = gcc
CFLAGS = -I./inc -Wall -Wextra

PREF_SRC = ./src/
PREF_OBJ = ./bin/obj/
PREF_TEST = ./bin/tests/

SRC_FILES = $(wildcard $(PREF_SRC)*.c)
OBJ_FILES = $(patsubst $(PREF_SRC)%.c,$(PREF_OBJ)%.o,$(SRC_FILES))

all : $(TARGET)

$(TARGET) : $(OBJ_FILES)
	@mkdir -p ./bin/run
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(TARGET) -lm

$(PREF_OBJ)%.o : $(PREF_SRC)%.c
	@mkdir -p $(PREF_OBJ)
	$(CC) $(CFLAGS) -c $< -o $@

TEST_TARGET = $(PREF_TEST)tests.exe
TEST = $(PREF_TEST)tests.c

test : $(TEST_TARGET)

$(TEST_TARGET) : $(TEST) $(filter-out $(PREF_OBJ)main.o,$(OBJ_FILES))
	$(CC) $(CFLAGS) -o $@ $^

clean:
	-rm -f $(TARGET) $(PREF_OBJ)*.o $(PREF_TEST)*.exe