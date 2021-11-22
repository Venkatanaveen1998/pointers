CC=gcc
final:swapcondition.o swap.o
	$(CC) $^ -o $@
swapcondition.o:swapcondition.c
	$(CC) -c $<
swap.o:swap.c
	$(CC) -c $<
clean:
	rm -f *.o final
	

