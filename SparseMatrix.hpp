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

	/** 
         * No argument constructor
         */
	SparseMatrix();

	~SparseMatrix();

	/**
         * Set an element
         * @param i row index
         * @param j column index 
         * @param value value to set
         */
	void setElement(size_t i, size_t j, double value);

	double getElement(size_t i, size_t j) const;

	SparseMatrix operator+(const SparseMatrix& b);


private:
	
	std::map< std::vector<size_t>, double > _elements;

};

#endif
