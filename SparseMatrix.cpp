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

SparseMatrix
SparseMatrix::operator+(const SparseMatrix& b) {
	SparseMatrix sp;
	for(std::map< std::vector<size_t>, double >::const_iterator it = this->_elements.begin();
            it != this->_elements.end(); ++it) {
		std::map< std::vector<size_t>, double >::const_iterator itB = b._elements.find(it->first);
		double valueB = 0.0;
		if (itB != b._elements.end()) {
                        // found element
			valueB = itB->second;
                }
		sp.setElement(it->first[0], it->first[1], it->second + valueB);
	}
	return sp;
}
