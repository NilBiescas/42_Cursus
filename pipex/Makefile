#---------------------------------------------------#
#                   MINITALK MAKEFILE               #
#---------------------------------------------------#

# Program name
NAME	=	pipex

# Define some color codes for pretty printing
RED = \033[91m
YELLOW = \033[93m
WHITE = \033[97m
GREEN = \033[92m
DEF_CL = \033[m
RESET  = \e[0m
CYAN = \033[96m

#---------------------------------------------------#
#                   COMPILER SETTINGS               #
#---------------------------------------------------#

# Compiler
CC = gcc

# Compiler flags
# CFLAGS = -Wall -Wextra -Werror

# Command to remove files
RM = rm -f

# Command to run norminette
NORM = norminette -R CheckForbiddenSourceHeader .

#---------------------------------------------------#
#                   SOURCE FILES                    #
#---------------------------------------------------#

# libft Variables
LIBFT		=	./libft/libft.a
LIBFT_DIR	=	./libft

# ft_printf Variables
FT_PRINTF = ./Printf/libftprintf.a
FT_PRINTF_DIR = ./Printf

# Mandatory Variables
SRC_C	=	pipex.c pipex_utils.c

INC		=	-I. -I$(LIBFT_DIR) -I$(LIBFT_DIR)/stack -I$(LIBFT_DIR)/GNL -I$(FT_PRINTF_DIR)

_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]
_INFO		=	[$(YELLOW)INFO$(RESET)]
_READY 		= 	$(GREEN)ready.$(RESET)
_REMOVED    =   $(YELLOW)removed.$(RESET)

# Debugger
ifeq ($(DEBUG), 1)
	D_FLAG	=	-g
endif

# Fsanitize
ifeq ($(SANITIZE), 1)
	D_FLAG	=	-fsanitize=leak -g
endif

#---------------------------------------------------#
#                   MAIN TARGET                     #
#---------------------------------------------------#

all: $(NAME)

$(NAME): $(LIBFT) $(FT_PRINTF)
	@ $(CC) $(D_FLAG) $(CFLAGS) $(SRC_C) $(LIBFT) $(FT_PRINTF) $(INC) -o $(NAME)
	@printf "$(_SUCCESS) pipex $(_READY)\n"

$(LIBFT):
	@ $(MAKE) DEBUG=$(DEBUG) -C $(LIBFT_DIR)

$(FT_PRINTF):
	@ $(MAKE) -C $(FT_PRINTF_DIR)

# Rule to clean up object files and dependencies
clean:
	@ $(MAKE) fclean -C $(LIBFT_DIR)
	@ $(MAKE) fclean -C $(FT_PRINTF_DIR)

# Rule to remove the compiled library file and cleaned object files
fclean:
	@ $(MAKE) fclean -C $(LIBFT_DIR)
	@ $(MAKE) fclean -C $(FT_PRINTF_DIR)
	@ $(RM) $(NAME)

# Rule to completely rebuild the program from scratch
re: fclean all

mandatory:	$(NAME)

m : mandatory

# Rule to tell make that the listed targets do not correspond to actual files.
.PHONY: all clean fclean re mandatory m bonus b $(NAME) $(LIBFT) $(FT_PRINTF)