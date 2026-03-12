CC=gcc

all:
	$(CC) xmss.c wots.c merkle.c hash.c main.c -o xmss_test

run:
	./xmss_test

clean:
	rm -f xmss_test
