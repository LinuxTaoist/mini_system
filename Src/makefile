OBJC=calculator.o main.o

all: clean Edit

Edit:${OBJC} 
	gcc -o $@ ${OBJC} 

calculator.o: ../Inc/calculator.h

main.o:


help:
	@echo make help

.PHONY: clean
clean:
	@-rm *.o
	@-rm -rf Edit
