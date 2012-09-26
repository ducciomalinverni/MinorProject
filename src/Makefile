all : test
test : testvector testmonomer testpolymer testnosaw 
	@echo "Compilation for test completed suffessfully"
testvector:  Vector3D.o VectorTest.o
	g++ -o ../build/test/testVector Vector3D.o VectorTest.o
Vector3D.o: Vector3D.cpp Vector3D.h
	g++ -o Vector3D.o -c Vector3D.cpp -W
VectorTest.o: UnaryTests/VectorTest.cpp 
	g++ -o VectorTest.o -c UnaryTests/VectorTest.cpp -W 
testmonomer: Vector3D.o Monomer.o  MonomerTest.o
	g++ -o ../build/test/testMonomer Vector3D.o Monomer.o MonomerTest.o
Monomer.o: Monomer.cpp Monomer.h
	g++ -o Monomer.o -c Monomer.cpp -W
MonomerTest.o: UnaryTests/MonomerTest.cpp
	g++ -o MonomerTest.o -c  UnaryTests/MonomerTest.cpp -W
testpolymer: Vector3D.o Monomer.o Polymer.o PolymerTest.o
	g++ -o ../build/test/testPolymer Vector3D.o Monomer.o Polymer.o PolymerTest.o
Polymer.o: Polymer.cpp Polymer.h
	g++ -o Polymer.o -c Polymer.cpp -W
PolymerTest.o: UnaryTests/PolymerTest.cpp
	g++ -o PolymerTest.o -c UnaryTests/PolymerTest.cpp -W
MoveChecker.o: MoveChecker.cpp MoveChecker.h
	g++ -o MoveChecker.o -c MoveChecker.cpp
NoSAW.o: NoSAW.cpp NoSAW.h
	g++ -o NoSAW.o -c NoSAW.cpp
NoSAWTest.o: UnaryTests/NoSAWTest.cpp
	g++ -o NoSAWTest.o -c UnaryTests/NoSAWTest.cpp
testnosaw: testpolymer NoSAW.o NoSAWTest.o MoveChecker.o
	g++ -o ../build/test/testNoSAW Vector3D.o Monomer.o Polymer.o MoveChecker.o NoSAW.o NoSAWTest.o

clean:
	@rm -rf *.o
	@clear