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


BONUS = checker
BONUS_UTILS = $(wildcard ./bonus/src/utils/*.c)
BONUS_OPERATIONS = $(wildcard ./bonus/src/operations/*.c)
BONUS_DATA_STRUCTURES = $(wildcard ./bonus/src/data_structures/stack/*.c) \
				$(wildcard ./bonus/src/data_structures/list/*.c)
BONUS_SRC = $(BONUS_DATA_STRUCTURES) $(BONUS_OPERATIONS) $(BONUS_UTILS) $(wildcard ./bonus/src/*.c) $(wildcard ./bonus/get_next_line/*.c) ./bonus/main.c
BONUS_OBJ = $(BONUS_SRC:.c=.o)

all : $(NAME)

bonus : $(BONUS_SRC)
	@echo "$(GREEN)\n⌛ compiling checker ...$(END)"
	@$(CC) $(CFLAGS) $(BONUS_SRC) -o $(BONUS)
	@echo "$(GREEN)✅ checker compiled successfully\n$(END)"

$(NAME) : $(SRC)
	@echo "$(GREEN)\n⌛ compiling push_swap ...$(END)"
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "$(GREEN)✅ push_swap compiled successfully\n$(END)"

clean :
	@echo "$(RED)\n⌛ removing object files ...$(END)"
	@rm -rf $(OBJ) $(BONUS_OBJ)
	@echo "$(RED)🗑️  objects removed \n$(END)"

fclean : clean
	@echo "$(RED)\n⌛ removing push_swap ...$(END)"
	@rm -rf $(NAME) $(BONUS)
	@echo "$(RED)🗑️  push_swap removed \n$(END)"

re : fclean all