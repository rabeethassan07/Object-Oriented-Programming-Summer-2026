#include<iostream>
using namespace std;
class Complex
{
private:
    int *real;
    int *imag;

public:
    // Default constructor
    Complex(int r,int i)
	{
        real=new int;
        imag=new int;
        *real=r;
        *imag=i;
    }
    // Copy constructor (Deep Copy)
    Complex(const Complex &obj)
	{
        real=new int;
        imag=new int;
        *real=*obj.real;
        *imag=*obj.imag;
    }
    void display()
	{
        cout<<"Complex Number: "<<*real<<" + "<<*imag<<"i"<<endl;
    }
    ~Complex()
	{
        delete real;
        delete imag;
    }
};
int main()
{
    Complex c1(3,4);
    Complex c2=c1;

    cout<<"Object c1:"<<endl;
    c1.display();

    cout<<"Object c2 (Copied):"<<endl;
    c2.display();

    return 0;
}
