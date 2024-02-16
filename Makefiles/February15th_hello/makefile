flags = -Wall -std=c++17

hello: hello.o hellofunctions.o
	g++ $(flags) $^ -o $@
	ls

hello.o : hello.cc hellofunctions.h
	g++ -c $(flags) $<

hellofunctions.o : hellofunctions.cc hellofunctions.h
	g++ $(flags) -c $<

clean:
	rm *.o hello
	ls
