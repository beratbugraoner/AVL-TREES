hepsi : derle calistir

derle:
	g++ -I ./include/ -o ./lib/Eleman.o -c ./src/Eleman.cpp
	g++ -I ./include/ -o ./lib/Firma.o -c ./src/Firma.cpp
	g++ -I ./include/ -o ./bin/program.exe ./lib/Eleman.o ./lib/Firma.o ./src/main.cpp
	
calistir:
	./bin/program.exe