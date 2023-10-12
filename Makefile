test_c: source/main.c
	gcc -c source/main.c -o build/main.o
	gcc build/main.o -o build/project_goto.out -I.
	./build/project_goto.out

test_bas: source/main.bas
	vintbas source/main.bas

clean:
	rm -r *.out
	rm -r *.o