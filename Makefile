program:
	gcc -Wall -Werror -Wextra -pedantic -std=c90 *.c -o monty

deb_program:
	gcc -g -Wall -Werror -Wextra -pedantic -std=c90 *.c -o monty
run:
	./monty
clear_:
	rm -r monty

