stack: stack.cpp
	g++ -Wall -o stack stack.cpp

stack.pdf: stack.cpp Makefile
	a2ps -o - stack.cpp Makefile | ps2pdf - stack.pdf

#
# Cibles habituelles
#
clean:
	rm -f *~


mrproper: clean
	rm -f deque
