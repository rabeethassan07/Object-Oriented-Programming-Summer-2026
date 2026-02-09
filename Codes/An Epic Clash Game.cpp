#include<iostream>
using namespace std;
class Character
{
private:
    int *health;
    int *attackPower;
    int *defense;

public:
    // Default constructor
    Character()
	{
        health=new int;
        attackPower=new int;
        defense=new int;

        *health=100;
        *attackPower=50;
        *defense=30;
    }
    // Parameterized constructor
    Character(int h,int a,int d)
	{
        health=new int;
        attackPower=new int;
        defense=new int;

        *health=h;
        *attackPower=a;
        *defense=d;
    }
    // Copy constructor (Deep Copy)
    Character(const Character &obj)
	{
        health=new int;
        attackPower=new int;
        defense=new int;

        *health=*obj.health;
        *attackPower=*obj.attackPower;
        *defense=*obj.defense;
    }
    // Setter functions
    void setHealth(int h)
	{
        *health=h;
    }
    void setAttackPower(int a)
	{
        *attackPower=a;
    }
    void setDefense(int d)
	{
        *defense=d;
    }
    // Getter functions
    int getHealth()
	{
        return *health;
    }
    int getAttackPower()
	{
        return *attackPower;
    }
    int getDefense()
	{
        return *defense;
    }
    // Display function
    void display()
	{
        cout<<"Health: "<<*health<<endl;
        cout<<"Attack Power: "<<*attackPower<<endl;
        cout<<"Defense: "<<*defense<<endl;
    }
    // Destructor
    ~Character()
	{
        delete health;
        delete attackPower;
        delete defense;
    }
};
int main()
{
    // Default character
    Character c1;
    cout<<"Default Character:"<<endl;
    c1.display();

    // Parameterized character
    Character c2(150,70,40);
    cout<<"\nParameterized Character:"<<endl;
    c2.display();

    // Copy constructor
    Character c3=c2;
    cout<<"\nCopied Character:"<<endl;
    c3.display();

    return 0;
}
