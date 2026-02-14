trojanized_quine.o: trojanized_quine.c
	gcc -c trojanized_quine.c

append: append.c
	gcc append.c -o append

bite_me: trojanized_quine.o append
	gcc trojanized_quine.o -o trojanized_quine && ./append trojanized_quine.c && ./trojanized_quine 2> trojanized_quine.c

visit_cemetery: fetch.c
	gcc fetch.c -o fetch && ./fetch $(ARGS) trojanized_quine.c


