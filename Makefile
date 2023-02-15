################### colors ###################
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
END = \033[0m
##############################################

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap

UTILS = $(wildcard ./src/utils/*.c)
OPERATIONS = $(wildcard ./src/operations/*.c)
DATA_STRUCTURES = $(wildcard ./src/data_structures/stack/*.c) \
				$(wildcard ./src/data_structures/list/*.c)
SRC = $(DATA_STRUCTURES) $(OPERATIONS) $(UTILS) $(wildcard ./src/*.c) main.c
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(SRC)
	@echo "$(GREEN)\n⌛ compiling push_swap ...$(END)"
	@$(CC) $(SRC) -o $(NAME)
	@echo "$(GREEN)✅ push_swap compiled successfully\n$(END)"

clean :
	@echo "$(RED)\n⌛ removing object files ...$(END)"
	@rm -rf $(OBJ)
	@echo "$(RED)🗑️  objects removed \n$(END)"

fclean : clean
	@echo "$(RED)\n⌛ removing push_swap ...$(END)"
	@rm -rf $(NAME)
	@echo "$(RED)🗑️  push_swap removed \n$(END)"

re : fclean all