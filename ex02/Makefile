CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

BIN_DIR = bin

OBJS = $(SRCS:%.cpp=$(BIN_DIR)/%.o)

NAME = FragTrap

all: $(NAME)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/%.o: %.cpp | $(BIN_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(BIN_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re