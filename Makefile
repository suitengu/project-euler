cc = clang
include_dirs = .

1: 1.o main.o
	$(cc) main.o gcd.o -I $(include_dirs) -o 1/main

gcd.o: common/gcd.c
	$(cc) -c common/gcd.c -I $(include_dirs)

1.o: 1/main.c
	$(cc) -c 1/main.c -I$(include_dirs)
