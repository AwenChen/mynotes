TRAGET = example


all:
	gcc -o $(TRAGET) example.c

clean:
	rm -rf $(TRAGET)
