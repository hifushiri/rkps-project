test_goto: main_goto.c func.c
	gcc -c func.c
	gcc -c main_goto.c
	gcc func.o main_goto.o -o project_goto.out -I.
	./project_goto.out

clear:
	rm *.out