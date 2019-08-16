#include <iostream>
#include <string>

using namespace std;



class Human
{
public:
	
	string GetName()
	{
		return name;
	}

	void SetName(string name)
	{
		this->name = name;
	}

private:
	string name;

};

class Student : public Human
{
public:
	
	string group;

	void Learn()
	{
		cout << "i'm learning" << endl;
	}
};

class ExtramuralStudent : public Student
{
public:
	void Learn()
	{
		cout << "i'm learning HARD STYLE" << endl;
	}
};

class Professor : public Human
{
public:
	
	string subject;
};

class A
{
public:
	
	A()
	{
	
	}

	A(string str)
	{
		this->msg = str;
	}

	void PrintMsg()
	{
		cout << msg << endl;
	}

private:
	string msg;


	
	
};

class B : public A
{
public:

	B() : A("new message")
	{
	
	}
	
	
};

class Weapon
{
public:
	virtual void Shoot() = 0;

	void Foo()
	{
		cout << "FOOOOOO" << endl;
	}
};

class Gun : public Weapon
{
public:
	void Shoot() override
	{
		cout << "BANG" << endl;
	}
};

class SubmaschineGun : public Gun
{
public:
	void Shoot() override
	{
		cout << "BANG BANG BANG BANG" << endl;
	}
};

class Bazooka : public Weapon
{
public:
		void Shoot() override
	{
		cout << "BAAAAAAAM" << endl;
	}
};

class Knife : public Weapon
{
public:
	void Shoot() override
	{
		cout << "VJIK VJIK" << endl;
	}
};

class Player
{
public:
	void Shoot(Weapon* weapon)
	{
		weapon->Shoot();
	}
};




int main()
{
	setlocale(LC_ALL, "ru");

	
	
	Gun gun;
	SubmaschineGun machinegun;
	Knife knife;
	Bazooka bazooka;

	knife.Foo();

	Player player;
	player.Shoot(&knife);



	return 0;

}