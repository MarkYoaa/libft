
SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c   \
					 ft_atoi.c ft_isalpha.c ft_strncmp.c\
					 ft_memcpy.c  ft_strchr.c  ft_strlcpy.c \
					ft_tolower.c ft_bzero.c   ft_isascii.c ft_memccpy.c \
				 	ft_strlen.c ft_strlcat.c ft_strrchr.c \
					ft_toupper.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
				
					

OBJS			= $(SRCS:.c=.o)


##BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c

BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS) $(BONUS_OBJS)
				ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus