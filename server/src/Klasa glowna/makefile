CC = g++
CFLAGS = -Wall 


glownaPoKompilacji: main.o mainClass.o
	$(CC) $(CFLAGS) -o glownaPoKompilacji main.o mainClass.o

main.o : main.cpp
	$(CC) $(CFLAGS) -c main.cpp

mainClas.o : mainClass.cpp
	$(CC) $(CFLAGS) -c mainClass.cpp

clean : 
	rm -f core *.o
