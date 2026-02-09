#include<iostream>
using namespace std;
class TollBooth
{
private:
    int totalCars;
    double totalCash;

public:
    // Constructor
    TollBooth()
	{
        totalCars=0;
        totalCash=0.0;
    }
    // Function when a car pays toll
    void payingCar()
	{
        totalCars++;
        totalCash+=0.50;
    }
    // Display totals
    void display()
	{
        cout<<"Total Cars Passed: "<<totalCars<<endl;
        cout<<"Total Cash Collected: "<<totalCash<<endl;
    }
};
int main()
{
    TollBooth booth;
    int cars;

    cout<<"Enter number of cars passing the toll: ";
    cin>>cars;

    for(int i=0;i<cars;i++)
	{
        booth.payingCar();
    }

    cout<<"\nToll Booth Summary"<<endl;
    booth.display();

    return 0;
}
