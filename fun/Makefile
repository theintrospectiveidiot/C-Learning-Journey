trojanized_quine.o: trojanized_quine.c
	gcc -c trojanized_quine.c

bite_me: trojanized_quine.o
	gcc trojanized_quine.o -o trojanized_quine && ./trojanized_quine > trojanized_quine.c
