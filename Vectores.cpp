#include "Vectores.h"
#include <iostream>
using namespace std;

Vectores::Vectores()
{
}


Vectores::~Vectores()
{
}


/*int Vectores::Componentes(bool a, bool b, bool c, bool d, bool e, bool f, bool g, bool h)
{


}*/


int Vectores::VectorUdim()
{
	int x, y, z;
	bool o, p, q;
	int comp1, comp2, comp3;

	cout << "VECTOR UNIDIMENSIONAL" << endl;
	cout << endl;
	
	cout << "Instrucciones: " << endl;
	cout << "La componente que usted desea escriba (1, 2, 3) para las componentes (i, j, k) respectivamente" << endl;
	cout << "El resto ingrese un 0" << endl;

	cout << "Ingrese la componente deseada: " << endl;
	cout << "Componente x..." << endl;
	cin >> comp1;
	cout << "Componente y..." << endl;
	cin >> comp2;
	cout << "Componente z..." << endl;
	cin >> comp3;
	

	o = ((comp1 == 1) && (comp2, comp3 == 0));
	p = ((comp2 == 2) && (comp1, comp3 == 0));
	q = ((comp3 == 3) && (comp1, comp2 == 0));
	

	if (o == true)
	{
		cout << "Ingrese el Valor de x: " << flush;
		cin >> x;
		cout << "El valor de x = " << x << endl;
		cout << "Vector x(" << x << ", " << 0 << ", " << 0 << ")" << endl;
		cout << "Norma del Vector = " << x << endl;
	}
	else if (p == true)
	{
		cout << "Ingrese el valor de y: " << flush;
		cin >> y;
		cout << "El valor de y = " << y << endl;
		cout << "Vector y(" << 0 << ", " << y << ", " << 0 << ")" << endl;
		cout << "Norma del Vector = " << y << endl;
	}
	else if (q == true)
	{
		cout << "Ingrese el valor de z: " << flush;
		cin >> z;
		cout << "El valor de y = " << z << endl;
		cout << "Vector z(" << 0 << ", " << 0 << ", " << z << ")" << endl;
		cout << "Norma del Vector = " << z << endl;
	}
	else
	{
		cout << "Ejecute el programa nuevamente." << endl;
	}
	
	return 0;
	
}


int Vectores::VectorDdim()
{
	int x, y, z;
	bool o, p, q;
	int comp1, comp2, comp3;

	cout << "VECTOR UNIDIMENSIONAL" << endl;
	cout << endl;

	cout << "Instrucciones: " << endl;
	cout << "La componente que usted desea escriba (1, 2, 3) para las componentes (i, j, k) respectivamente" << endl;
	cout << "El resto ingrese un 0" << endl;

	cout << "Ingrese la componente deseada: " << endl;
	cout << "Componente x..." << endl;
	cin >> comp1;
	cout << "Componente y..." << endl;
	cin >> comp2;
	cout << "Componente z..." << endl;
	cin >> comp3;


	o = ((comp1 == 1 && comp2 == 2) && (comp3 == 0));
	p = ((comp1 == 1 && comp3 == 3) && (comp2 == 0));
	q = ((comp2 == 2 && comp3 == 3) && (comp1 == 0));


	if (o == true)
	{
		cout << "Ingrese el Valor de x: " << flush;
		cin >> x;
		cout << "Ingrese el Valor de y: " << flush;
		cin >> y;
		cout << "El valor de x = " << x << endl;
		cout << "El valor de y = " << y << endl;
		cout << "Vector xy(" << x << ", " << y << ", " << 0 << ")" << endl;
		//cout << "Norma del Vector = " << x << endl;
	}
	else if (p == true)
	{
		cout << "Ingrese el valor de x: " << flush;
		cin >> x;
		cout << "Ingrese el valor de z: " << flush;
		cin >> z;
		cout << "El valor de x = " << x << endl;
		cout << "El valor de z = " << z << endl;
		cout << "Vector xz(" << x << ", " << 0 << ", " << z << ")" << endl;
		//cout << "Norma del Vector = " << y << endl;
	}
	else if (q == true)
	{
		cout << "Ingrese el valor de y: " << flush;
		cin >> y;
		cout << "Ingrese el valor de z: " << flush;
		cin >> z;
		cout << "El valor de y = " << y << endl;
		cout << "El valor de z = " << z << endl;
		cout << "Vector yz(" << 0 << ", " << y << ", " << z << ")" << endl;
		//cout << "Norma del Vector = " << z << endl;
	}
	else
	{
		cout << "Ejecute el programa nuevamente." << endl;
	}

	return 0;

}
/*
u = ((v == 3 && (comp1 == i && comp2 == j && comp3 == k)));*/