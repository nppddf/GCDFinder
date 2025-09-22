TARGET = ./bin/run/main.exe
CC = gcc
CFLAGS = -I./inc -Wall -Wextra

PREF_SRC = ./src/
PREF_OBJ = ./bin/obj/

SRC_FILES = $(wildcard $(PREF_SRC)*.c)
OBJ_FILES = $(patsubst $(PREF_SRC)%.c,$(PREF_OBJ)%.o,$(SRC_FILES))

all : $(TARGET)

$(TARGET) : $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -o $(TARGET) -lm

$(PREF_OBJ)%.o : $(PREF_SRC)%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	-rm -f $(TARGET)
	-rm -f $(PREF_OBJ)*.o