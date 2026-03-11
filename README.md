Compile:
g++ -Iinclude -c src/Package.cpp -o Package.o 
g++ -Iinclude -c src/TwoDayPackage.cpp -o TwoDayPackage.o
g++ -Iinclude -c src/OvernightPackage.cpp -o OvernightPackage.o
g++ -Iinclude -c src/main.cpp -o main.o



Build:
g++ Package.o TwoDayPackage.o OvernightPackage.o main.o -o assignment4.exe     

Run:./assignment4


test
compile: 
g++ -Iinclude -c src/Package.cpp -o Package.o 
g++ -Iinclude -c src/TwoDayPackage.cpp -o TwoDayPackage.o
g++ -Iinclude -c src/OvernightPackage.cpp -o OvernightPackage.o

build: 
g++ Package.o TwoDayPackage.o OvernightPackage.o test.o -o test.exe 

run: ./test
