CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -rf
SRC = main.cpp
OBJS_DIR = obj
OBJS = $(SRC:%.cpp=$(OBJS_DIR)/%.o)

NAME = mutantstack

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: %.cpp
	@mkdir -p $(@D)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
