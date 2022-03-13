#pragma once
class Complex 
{
private:
	  mutable int m_real;
	  int m_imag;
	  int count = 0;
public:
	Complex();
	Complex(int real, int imag);
	void display() const;
	int getreal() const;
	int getimag() const;
	void setreal(int);
	void setimag(int);
	void accpept();
	static int c;
 };
extern int count;