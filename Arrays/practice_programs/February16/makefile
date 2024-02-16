flags = -Wall -std=c++17

array : array.o arrayfunctions.o
	g++ $(flags) -o $@ $<

arrayfunctions.o : arrayfunctions.cc arrayfunctions.h
	g++ $(flags) -c $<

array.o : array.cc arrayfunctions.h
	g++ $(flags) -c $<

clean:
	rm *.o array
