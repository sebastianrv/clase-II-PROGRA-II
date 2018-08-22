// clase 2.cpp : main project file.

#include "stdafx.h"
#include "conio.h"
#include <iostream>
using namespace System;
using namespace std;

class A
{
//atributos
	private:
		int x;
		int y;
//funciones
	public:
		A(); //constructor
		~A();//destructor
//metodos de acceso
		void sumar(int valorX, int valorY);
		void restar(int valor);

		void setX(int valor);
		void setY(int valor);
		int getX();
		int getY();
		int obtenerSuma();


};

A::A()
	{
		x = 0;
		y = 0;
	}

A::~A()
	{
	}
void A::setX(int valor)
	{
		this->x = valor;
//2 forma		x = valor;
	}
void A::setY(int valor)
	{
		this->y = valor;
//2 forma y=valor;
	}
/*void A::sumar(int valorX, int valorY)
{
	this->x = valorX;
	this->y = valorY;
}
*/
int A::getX()
{
	return x;
}
int A::getY()
{
	return y;
}
int A::obtenerSuma()
{

}


int main()
{
	A *objA;//variable del tipo A
	//instanciar objeto
	objA = new A();
	cout << "Atributo x=" << objA->getX();

	objA->setY(666);
	cout << "\nAtributo y=" << objA->getY();

	cout << "\nIngrese el valor X";
	cin >> objA->setX;
	cout << "\nIngrese el valor Y";
	cin >> objA->setY;
	cout << "\n La suma de las dos variables es:" << 


	_getch();
	return 0;
}

