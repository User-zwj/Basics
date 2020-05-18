all: hello

# $@ matches the target; $< matches the first dependent
hello: hello.o
	gcc -o $@ $<

hello.o: hello.c
	gcc -c $<

clean:
	rm hello.o hello
