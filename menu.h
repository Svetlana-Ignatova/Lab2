#ifndef S_LAB2_MENU_H
#define S_LAB2_MENU_H

#include "ArraySequence.h"
#include "Matrix.h"
#include "SquareMatrix.h"
#include <iostream>
#include "Complex.h"
#include <ctime>

int chooseTypeMatrix();
int chooseFunctionDiagonalMatrix();
template <typename T> DiagonalMatrix<T>* inputDiagonalMatrix();
DiagonalMatrix<complex>* InputComplexDiagonalMatrix();
void MenuDiagonalMatrix();
template <typename T> SquareMatrix<T>* InputSquareMatrix();
SquareMatrix<complex>* InputComplexSquareMatrix();
int ChooseFunctionSquareMatrix();
void MenuSquareMatrix();
int menu();

#endif //S_LAB2_MENU_H
