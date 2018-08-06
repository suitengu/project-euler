cc = clang
include_dirs = .

all: 1 2 3 4 5 6 7 8 9 10 11 12 13

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

7: 7.o
	$(cc) main.o -I $(include_dirs) -o 7/main -lm

8: 8.o
	$(cc) main.o -I $(include_dirs) -o 8/main

9: 9.o
	$(cc) main.o -I $(include_dirs) -o 9/main -lm

10: 10.o
	$(cc) main.o -I $(include_dirs) -o 10/main -lm

11: 11.o
	$(cc) main.o -I $(include_dirs) -o 11/main -lm

12: 12.o
	$(cc) main.o -I $(include_dirs) -o 12/main -lm

13: 13.o
	$(cc) main.o -I $(include_dirs) -o 13/main

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

7.o: 7/main.c
	$(cc) -c 7/main.c -I$(include_dirs)

8.o: 8/main.c
	$(cc) -c 8/main.c -I$(include_dirs)

9.o: 9/main.c
	$(cc) -c 9/main.c -I$(include_dirs)

10.o: 10/main.c
	$(cc) -c 10/main.c -I$(include_dirs)

11.o: 11/main.c
	$(cc) -c 11/main.c -I$(include_dirs)

12.o: 12/main.c
	$(cc) -c 12/main.c -I$(include_dirs)

13.o: 13/main.c
	$(cc) -c 13/main.c -I$(include_dirs)
