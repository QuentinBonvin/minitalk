NAME = server client

all : ${NAME}

server : server.o
	gcc -Wall -Werror -Wextra -o server server.o

server.o : server.c
	gcc -Wall -Werror -Wextra -o server.o -c server.c

client : client.o
	gcc -Wall -Werror -Wextra -o client client.o

client.o : client.c
	gcc -Wall -Werror -Wextra -o client.o -c client.c

clean :
	rm -rf *.o

fclean : clean
	rm -rf ${NAME}

re : fclean all