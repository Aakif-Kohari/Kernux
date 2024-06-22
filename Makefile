kernux: kernux_main.c
	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o kernux
	./kernux
