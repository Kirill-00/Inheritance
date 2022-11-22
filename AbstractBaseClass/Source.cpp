#include<iostream>
using namespace std;

class Animal
{
	std::string name;
public:
	virtual void sound()const = 0;
};
class Cat :public Animal
{

};
class Tiger :public Cat
{
public:
	void sound()const override
	{
		cout << "���������" << endl;
	}
};
class Lion :public Cat
{
	void sound()const override
	{
		cout << "�� � ���� ������" << endl;
	}
};
class Dog :public Animal {};
class Wolf :public Dog
{
public:
	void sound()const override
	{
		cout << "����������" << endl;
	}
};

void main()
{
	setlocale(LC_ALL, "");
	//Animal slonohobotan;
	//Cat tom;
	/*Tiger tiger;
	tiger.sound();

	Lion killer;
	killer.sound();
	
	Wolf hear*/

	Animal* zoo[] =
	{
		new Tiger,
		new Lion,
		new Wolf
	};
	for (int i = 0; i < sizeof(zoo)/sizeof; i++)
	{

	}
}