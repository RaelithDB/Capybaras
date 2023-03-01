#include <iostream>
using namespace std;

//Polimorphizm

//class Vehicle
//{
//public:
//	virtual void Drive() = 0;
//};
//
//class Car : public Vehicle
//{
//public:
//	virtual void Drive()
//	{
//		cout << "Car is on the way!" << endl;
//	}
//};
//
//class Telega : public Vehicle
//{
//public:
//	virtual void Drive()
//	{
//		cout << "Telega is on the way!" << endl;
//	}
//};
//
//class Bike : public Vehicle
//{
//public:
//	virtual void Drive()
//	{
//		cout << "Bike is on the way!" << endl;
//	}
//};
//void main()
//{
//	Telega t1;
//	t1.Drive(); // Statical or early linking
//	cout << "******************" << endl;
//	//Vehicle v1;
//	Vehicle* v[3];
//	v[0] = new Telega;
//	v[1] = new Bike;
//	v[2] = new Car;
//	for (int i = 0; i < 3; i++) {
//		v[i]->Drive(); // late linking(dinamic linking)
//	}
//}


#include <iostream>
#include <string.h>
using namespace std;
class Animal
{
public:
    string Title;
    Animal(string t)
    {
        Title = t;
    }
    virtual void speak() = 0;
};
class Frog : public Animal
{
public:
    Frog(string Title) : Animal(Title) {};
    virtual void speak()
    {
        cout << Title << " say " << "\'kwa-kwa\'\n";
    }
};
class Dog : public Animal
{
public:
    Dog(string Title) : Animal(Title) {};
    virtual void speak()
    {
        cout << Title << " say " << "\'gav-gav\'\n";
    }
};
class Cat : public Animal
{
public:
    Cat(string Title) : Animal(Title) {};
    virtual void speak() {
        cout << Title << " say " << "\'myau-myau\'\n";
    }
};
class Lion : public Cat
{
public:
    Lion(string Title) : Cat(Title) {};
    /*virtual void speak()
    {
    cout<<Title<<" say "<<"\'rrr-rrr\'\n";
    }*/
    /*virtual int speak()
    {
    cout<<Title<<" say "<<"\'rrr-rrr\'\n";
    return 0;
    }*/
    virtual void speak(int When)
    {
        cout << Title << " say " << "\'rrr-rrr\'\n";
    }
};
void main()
{



    Animal* animals[4] = { new Dog("Bob"),
        new Cat("Murka"),
        new Frog("Pupsik"),
       
    for (int k = 0; k < 4; k++)
    {
        animals[k]->speak();
        //animals[k]->Lion::speak(2); doesnt work
    }



}