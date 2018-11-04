BLUE = echo "\033[0;36m"
RED = echo "\033[0;31m"
GREEN = echo "\033[0;32m"
END = echo "\033[0m"

NAME = ft_ssl

G = gcc

SRC =	main.c \
        ft_md5.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)
		@echo "$$($(BLUE))********************$$($(END))"
		@echo "$$($(BLUE))ft_ssl: "I SURVIVED"$$($(END))"
		@echo "$$($(BLUE))********************$$($(END))"

$(NAME) : $(OBJ)
		@make -C libft/
		@echo "$$($(GREEN))******************$$($(END))"
		@echo "$$($(GREEN))  libft: "READY"  $$($(END))"
		@echo "$$($(GREEN))******************$$($(END))"
		@$(G) $(FLAG) $(OBJ) libft/libft.a -o $(NAME)

%.o: %.c
	@$(G) $(FLAG) -c $<

clean:
	@make -C libft/ clean
		@echo "$$($(RED))*********************$$($(END))"
		@echo "$$($(RED))  ft_ssl: "DEL *.o"  $$($(END))"
		@echo "$$($(RED))*********************$$($(END))"
	@rm -f *.o
	@rm -f *~

fclean: clean
		@echo "$$($(RED))********************$$($(END))"
		@echo "$$($(RED))libft: "DEL libft.a"$$($(END))"
		@echo "$$($(RED))********************$$($(END))"
		@rm -f libft/libft.a
		@echo "$$($(RED))**********************$$($(END))"
		@echo "$$($(RED)) ft_ssl: "DEL ft_ssl" $$($(END))"
		@echo "$$($(RED))**********************$$($(END))"
	@rm -f $(NAME)

re: fclean all