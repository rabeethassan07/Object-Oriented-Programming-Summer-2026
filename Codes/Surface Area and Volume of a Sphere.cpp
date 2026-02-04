#include<iostream>
using namespace std;
const float PI = 3.14159;
// to calculate surface area
float surfaceArea(float radius) 
{
    return 4 * PI * radius * radius;
}
// to calculate volume
float volume(float radius)
{
    return (4.0 / 3.0) * PI * radius * radius * radius;
}
int main()
{
    float r;

    cout << "Enter radius of sphere: ";
    cin >> r;
    
    cout << "Surface Area of Sphere: " << surfaceArea(r) << endl;
    cout << "Volume of Sphere: " << volume(r) << endl;
    return 0;
}
