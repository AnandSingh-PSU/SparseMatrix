/**
 * 
 */

#include <SparseMatrix.hpp>

SparseMatrix::SparseMatrix() {}

SparseMatrix::~SparseMatrix() {}
	
void
SparseMatrix::setElement(size_t i, size_t j, double value){
	std::vector<size_t> ij(2);
	ij[0] = i; ij[1] = j;
	this->_elements[ij] = value;
}

double 
SparseMatrix::getElement(size_t i, size_t j) const {
	std::vector<size_t> ij(2);
	ij[0] = i; ij[1] = j;
	std::map< std::vector<size_t>, double >::const_iterator it = this->_elements.find(ij);
	if (it != this->_elements.end()) {
		// we found our value
		return it->second; 
        }
	else {
		return 0.0;
        }
}

double
SparseMatrix::operator+(double SparseMatrix& b) {
	SparseMatrix sp;
	for() {
		for() {
			sp.setElement() = this->sp.getElement() + b.getElement()
		}
	}
}
