all: MCMCSimulation
test : testvector
testvector:  Vector3D.o VectorTest.o
	g++ -o testVector Vector3D.o VectorTest.o
Vector3D.o: Vector3D.cpp Vector3D.h
	g++ -o Vector3D.o -c Vector3D.cpp -W
VectorTest.o: UnaryTests/VectorTest.cpp 
	g++ -o VectorTest.o -c UnaryTests/VectorTest.cpp -W 
clean:
	@rm -rf *.o