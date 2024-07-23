CC = gcc
CFLAGS = -Wall -Wextra
TARGET = sorts
SRCS = data.c insertion_sort/insertion_sort.c selection_sort/selection_sort.c
OBJS = $(SRCS:.c=.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)
