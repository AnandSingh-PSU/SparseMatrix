#include <SparseMatrix.hpp>
#include <iostream>

int main() {

	SparseMatrix sp;
	sp.setElement(0, 0, 1.0);
	std::cout << " value of 0, 0 is " << sp.getElement(0, 0) << '\n';
	std::cout << " value of 0, 1 is " << sp.getElement(0, 1) << '\n';
	return 0;
}
