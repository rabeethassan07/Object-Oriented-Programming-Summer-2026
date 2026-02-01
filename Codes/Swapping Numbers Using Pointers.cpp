#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    int *p1, *p2, *p3;
    int temp;
    
    cout << "Enter three numbers:\n";
    cin >> a >> b >> c;
    
    p1 = &a;
    p2 = &b;
    p3 = &c;
    
    temp = *p1;
    *p1 = *p2;
    *p2 = *p3;
    *p3 = temp;
    
    cout << "\nAfter swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}
