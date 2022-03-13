#include <iostream>
#include "complex.h"

using namespace std;

Complex::Complex()
{
	m_real = 0;
	m_imag = 0;
	count++;
}
Complex::Complex(int real, int imag)
{
	m_real = real;
	m_imag = imag;
	count++;
}
void Complex::display() const
{
	
	cout << m_real << " " << m_imag << endl;
}
int Complex::getreal() const
{
	return m_real;
}
int Complex::getimag() const
{
	return m_imag;
}
void Complex::setreal(int real)
{
	this->m_real = real;
}
void Complex::setimag(int imag)
{
	this->m_imag = imag;
}
void Complex::accpept()
{
	
	cout << "Enter the Real and Imaginary Part\n";
	cin >> m_real >> m_imag;
}