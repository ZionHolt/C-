# Copyright 2024 ZHOLT

# Use this for comments in a makefile
# $@ = target
# $< = the first prerequisite 
# $^ = all prerequisite

flags = -Wall -std=c++17

# target : prerequisites/dependencies
blah : blah.o
	g++ $(flags) $< -o $@	

blah.o : blah.cc
	g++ -c $(flags) $<

clean :
	rm blah blah.o
