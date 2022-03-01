NAME = server client
LIBFT = ./libft
LIBFTOBJ = ./libft/*.o
LIB = ./libft/libft.a

all : ${NAME}

server : server.o
	make -C ${LIBFT}
	gcc -Wall -Werror -Wextra ${LIB} -o server server.o

server.o : server.c
	gcc -Wall -Werror -Wextra -o server.o -c server.c

client : client.o
	gcc -Wall -Werror -Wextra -o client client.o

client.o : client.c
	gcc -Wall -Werror -Wextra -o client.o -c client.c

clean :
	rm -rf *.o
	rm -rf ${LIBFTOBJ}

fclean : clean
	rm -rf ${NAME}

re : fclean all