#pragma once
#include <iostream>
using namespace std;
namespace Mat {
	class Matrix
	{
	private:
		int nbligne;
		int nbcolone;
		int** Matr;
	public:
		Matrix(int l , int c);
		Matrix(const Matrix&) = delete;
		void Remplissage(int);
		~Matrix();
		Matrix& operator=( const Matrix&)const=delete;
		Matrix* operator+(const Matrix&);
		Matrix* operator-(const Matrix&);
		Matrix* operator*(const Matrix&);
		bool operator==(const Matrix&) const;

		void print()const;

	};

}