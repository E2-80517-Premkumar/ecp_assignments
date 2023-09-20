file=2-11
cc=gcc

$(file).out: $(file).o
	$(cc) -o $(file).out $(file).o

$(file).o: $(file).c
	$(cc) -c $(file).c 

run:
	./$(file).out

clean:
	rm *.o *.out

.phony: run clean
