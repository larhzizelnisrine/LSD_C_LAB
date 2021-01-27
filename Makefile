b:
	gcc -c main.c func1.c
a:
	gcc main.o func1.o -o main
clean:
	rm main main.o func1.o
