#include<iostream>
#include "ComplexNumber.h"
using namespace std;

int main()
{
	//Question 2
	ComplexNumber c1;
	cout<<"Enter c1: "<<endl;
	c1.Input();
	cout<<"c1: \t";
	c1.Output();
	cout<<endl;

	//Question 3 and 4
	ComplexNumber* cPtr;
	ComplexNumber complexno(3,5);
	cPtr=&complexno;
	cout<<"Printing complex number using cPtr: \t";
	cPtr->Output();
	cout<<endl;

	ComplexNumber complexarray[5];
	for(int i=0; i<5; i++)
	{
		cout<<"Enter complex number "<<i+1<<" of array:"<<endl;
		complexarray[i].Input();
	}
	for(int i=0; i<5; i++)
	{
		cout<<"Complex number "<<i+1<<" of array: \t";
		complexarray[i].Output();
		cout<<"Magnitude:                       \t";
		cout<<complexarray[i].Magnitude()<<endl;
	}
	cout<<endl;
	//No we donnot have to delete this array as it is made on stack

	//Question 6
	int size;
	cout<<"Enter size of dynamic array: \t";
	cin>>size;
	ComplexNumber* CPTR = new ComplexNumber[size];	//Array of (size) Complexnumbers on Heap
	for(int i=0; i<size; i++)
	{
		cout<<"Enter complex number "<<i+1<<" of  dynamic array:"<<endl;
		CPTR[i].Input();
	}
	for(int i=0; i<size; i++)
	{
		cout<<"Complex number "<<i+1<<" of dynamic array: \t";
		CPTR[i].Output();
		cout<<"Magnitude:                       \t";
		cout<<CPTR[i].Magnitude()<<endl;
	}
	cout<<endl;
	if(CPTR)
	{
		delete[] CPTR;
		CPTR = 0;
	}
        cout<<endl<<endl<<endl;
	 
	//Question 7
	ComplexNumber complexno1(3,4);
        ComplexNumber complexno2(4,5);
	{
		ComplexNumber temp = complexno1;
		complexno1 = complexno2;
		complexno2 = temp;
	}
	complexno1.Output();
	complexno2.Output();

	//Question 8
	ComplexNumber complexno3(5,10);
	{
		ComplexNumber complexno4(complexno3);
		cout<<"complexno4 = \t";
		complexno4.Output();
	}
	cout<<"complexno3 = ";
	complexno3.Output();

	//Question 10
	ComplexNumber complexno5(3,4);
	{
		ComplexNumber complexno6, complexno7;
		complexno7 = complexno6 = complexno5;

		complexno6.Output();
		complexno7.Output();
	}
	complexno5.Output();

	//Question 12
	ComplexNumber complexno8(3,4);
	ComplexNumber complexno9(4,5);
	{
		ComplexNumber temp = complexno8;
		complexno8 = complexno9;
		complexno9 = temp;
	}
	complexno8.Output();
	complexno9.Output();

	system("pause");
	return 0;
}