test_no_goto: main_no_goto.c func.c
	gcc main_no_goto.c -o project_no_goto.out -I.
	./project_no_goto.out

test_goto: main_goto.c func.c
	gcc main_goto.c -o project_goto.out -I.
	./project_goto.out

clear:
	rm *.out