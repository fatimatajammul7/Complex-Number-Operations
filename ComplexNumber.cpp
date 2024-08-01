#include<iostream>
#include "ComplexNumber.h"
#include <cmath>
using namespace std;

ComplexNumber::ComplexNumber(int r, int i)
{
	cout<<"Constructor was called"<<endl<<endl;
	real=new int(r);                                    //constructor to add default values
	imaginary=new int (i);
}

//Question 9
ComplexNumber::ComplexNumber(const ComplexNumber& COM)
{
	cout<<"Copy Constructor Called "<<endl<<endl;
	real = new int( *COM.real);
	imaginary = new int ( *COM.imaginary);
}

void ComplexNumber::Input()
{
	cout<<"Enter real:\t";
	cin>>*real;
	cout<<"Enter imaginary:\t";
	cin>>*imaginary;
	cout<<endl;
}

void ComplexNumber::Output()
{
	if(*imaginary>=0)
	    cout<<*real<<"+"<<*imaginary<<"i"<<endl;
	else                                                               //condition to avoid postive sighn with negative imaginary part
	    cout<<*real<<*imaginary<<"i"<<endl;
}

//Question 11
const ComplexNumber& ComplexNumber::operator=(const ComplexNumber& COM)
{
	cout<<"Overloaded Assignment Operator "<<endl<<endl;

	if( &COM != this )	//to avoid self-assignment
	{
		*real = *COM.real;
		*imaginary = *COM.imaginary;          //De-allocate previous memory and allocate new memory(If required)
	}
	return *this;
}

float ComplexNumber::Magnitude()
{
	float mag;
	int temp=(*real * *real) + (*imaginary * *imaginary);
	mag=sqrt(temp);
	return mag;
}

ComplexNumber::~ComplexNumber()
{
	cout<<"Destructor was called"<<endl<<endl;
	if(real != 0)
		delete real;	//Deallocated memory from heap
	if(imaginary != 0)
		delete imaginary;
}
