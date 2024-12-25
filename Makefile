NAME = get_next_line

SOURCES = get_next_line.c main.c get_next_line_utils.c

CC = cc
FLAGS = -Wall -Wextra -Werror

OBJECTS = $(SOURCES:.c=.o)

all:$(NAME)

$(NAME):$(OBJECTS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)