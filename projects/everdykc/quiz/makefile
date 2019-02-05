CFLAGS= -Wall -fpic -coverage -lm -std=c99

testme: testme.c
	echo "testme.c:" >> testresults.out
	gcc -o testme -g testme.c $(CFLAGS)
	./testme >> testresults.out
	gcov -b -c testme.c >> testresults.out
clean:
	rm testme