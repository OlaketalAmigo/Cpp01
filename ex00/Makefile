NAME = Zombie

SRCS = $(SOURCES_DIR)main.cpp \
		$(SOURCES_DIR)Zombie.cpp \
		$(SOURCES_DIR)newZombie.cpp \
		$(SOURCES_DIR)randomChump.cpp

INC = -I INCLUDES/

OBJECTS = $(SRCS:$(SOURCES_DIR)%.cpp=$(OBJECTS_DIR)%.o)

OBJECTS_DIR = OBJS/
SOURCES_DIR = SOURCES/

CC = c++
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

$(OBJECTS_DIR)%.o: $(SOURCES_DIR)%.cpp
	mkdir -p $(OBJECTS_DIR)
	@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
	@rm -rf $(OBJECTS_DIR)

fclean: clean
	@rm -rf $(NAME) $(OBJECTS_DIR)
	@clear

re: fclean all

.PHONY: all bonus clean fclean re