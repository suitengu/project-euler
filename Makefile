cc = clang
include_dirs = .

all: 1 2 3 4 5 6

clean:
	rm */main *.o

1: 1.o gcd.o
	$(cc) main.o gcd.o -I $(include_dirs) -o 1/main

2: 2.o 
	$(cc) main.o -I $(include_dirs) -o 2/main

3: 3.o
	$(cc) main.o -I $(include_dirs) -o 3/main -lm

4: 4.o
	$(cc) main.o -I $(include_dirs) -o 4/main -lm

5: 5.o
	$(cc) main.o -I $(include_dirs) -o 5/main -lm

6: 6.o
	$(cc) main.o -I $(include_dirs) -o 6/main -lm

gcd.o: common/gcd.c
	$(cc) -c common/gcd.c -I $(include_dirs)

1.o: 1/main.c
	$(cc) -c 1/main.c -I$(include_dirs)

2.o: 2/main.c
	$(cc) -c 2/main.c -I$(include_dirs)

3.o: 3/main.c
	$(cc) -c 3/main.c -I$(include_dirs)

4.o: 4/main.c
	$(cc) -c 4/main.c -I$(include_dirs)

5.o: 5/main.c
	$(cc) -c 5/main.c -I$(include_dirs)

6.o: 6/main.c
	$(cc) -c 6/main.c -I$(include_dirs)
