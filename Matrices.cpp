#include <cmath>
#include <iostream>
#include <vector>
#include <iomanip>
#include "Matrices.h"

using namespace std;

namespace Matrices
{
    Matrix::Matrix(int _rows, int _cols)
    {
        rows = _rows;
        cols = _cols;
    }

    Matrix operator+(const Matrix& a, const Matrix& b)
    {
        
    }

    Matrix operator*(const Matrix& a, const Matrix& b)
    {

    }

    bool operator==(const Matrix& a, const Matrix& b)
    {

    }

    bool operator!=(const Matrix& a, const Matrix& b)
    {

    }

    ostream& operator<<(ostream& os, const Matrix& a)
    {

    }

    RotationMatrix::RotationMatrix(double theta) : Matrix(2, 2)
    {
        
    }

    ScalingMatrix::ScalingMatrix(double scale) : Matrix(2, 2)
    {

    }

    TranslationMatrix::TranslationMatrix(double xShift, double yShift, int nCols) : Matrix(2, 2)
    {

    }
}   