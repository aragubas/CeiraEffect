ALL_C = $(wildcard *.c) $(wildcard *.h)

all: $(ALL_C)
	cl65 -t cx16 -o ../out/PROGRAM.PRG -l ../out/output.list main.c

clean:
	rm -f *.PRG *.list *.o