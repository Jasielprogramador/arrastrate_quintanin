azterketa: aritmetika.o azala.o azterketa.o
	gcc -o azterketa azterketa.o azala.o aritmetika.o -I ./include
aritmetika.o: aritmetika.c
	gcc -c aritmetika.c -o aritmetika.o -I ./include
azala.o: azala.c
	gcc -c azala.c -o azala.o -I ./include
azterketa.o: azterketa.c
	gcc -c azterketa.c -o azterketa.o -I ./include
clean:
	rm *.o
