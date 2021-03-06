#include "stdafx.h"
#include <iostream>
using namespace std;

class Singleton
{
private:
	static Singleton * instance;

public:
	int value;

private:
	Singleton()
	{
		//TODO
	}

public:
	static Singleton* getInstance()
	{
		if (instance == NULL)
		{
			instance = new Singleton();
			cout << "Instance have been made." << endl;
		}
		return instance;
	}
};

Singleton *Singleton::instance = NULL;
int main()
{
	Singleton *s1 = s1->getInstance();
	Singleton *s2 = s2->getInstance();
	s1->value = 31;
	s2->value = 33;
	cout << s1->value << endl << s2->value << endl;
	system("PAUSE");
}

