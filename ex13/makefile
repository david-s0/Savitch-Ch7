life: main.o lifeFuncs.o
	g++ -g -Wall main.o lifeFuncs.o -o life

main.o: main.cpp lifeFuncs.hpp
	g++ -c -g  -Wall main.cpp

lifeFuncs.o: lifeFuncs.cpp lifeFuncs.hpp
	g++ -c -g -Wall lifeFuncs.cpp
