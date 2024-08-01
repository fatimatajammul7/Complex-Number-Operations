class ComplexNumber
{
private:
	int* real;
	int* imaginary;
public:
	ComplexNumber(int r=0, int i=0); 
	ComplexNumber(const ComplexNumber&);
	~ComplexNumber(); 
	void Input();
	void Output();
	const ComplexNumber& operator=(const ComplexNumber&);
	float Magnitude();
};

