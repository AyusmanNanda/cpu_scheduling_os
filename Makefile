# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# Common source files
COMMON_SRCS = main.c proc.c
COMMON_OBJS = $(COMMON_SRCS:.c=.o)

# List of scheduling algorithms (add new algorithms here)
ALGOS = fcfs  # Example: add sjfs rr priority etc.

# Executables for each algorithm
EXES = $(ALGOS:%=scheduler_%)

# Default target: build all algorithms
all: $(EXES)

# Build rule for each algorithm
# $* expands to the algorithm name (fcfs, sjfs, etc.)
scheduler_%: $(COMMON_OBJS) %.o
	$(CC) $(CFLAGS) -D$* $(COMMON_OBJS) $*.o -o $@

# Pattern rule to compile .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up all object files and executables
clean:
	rm -f *.o $(EXES)

# Convenience rules for individual algorithms
.PHONY: all clean $(ALGOS)
