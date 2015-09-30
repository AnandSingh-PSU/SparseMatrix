/**
 * XXXX
 */

#include <cstring>
#include <vector>
#include <map>

#ifndef SPARSE_MATRIX_HPP
#define SPARSE_MATRIX_HPP

class SparseMatrix {

public:

	SparseMatrix();

	~SparseMatrix();

	void setElement(size_t i, size_t j, double value);

	double getElement(size_t i, size_t j) const;

	SparseMatrix operator+(double SparseMatrix& b) 

private:
	
	std::map< std::vector<size_t>, double > _elements;

};

#endif
