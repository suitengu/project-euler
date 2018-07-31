cc = clang
include_dirs = .

all: 1 2

clean:
	rm 1/main 2/main *.o

1: 1.o gcd.o
	$(cc) main.o gcd.o -I $(include_dirs) -o 1/main

2: 2.o 
	$(cc) main.o -I $(include_dirs) -o 2/main

gcd.o: common/gcd.c
	$(cc) -c common/gcd.c -I $(include_dirs)

1.o: 1/main.c
	$(cc) -c 1/main.c -I$(include_dirs)

2.o: 2/main.c
	$(cc) -c 2/main.c -I$(include_dirs)

