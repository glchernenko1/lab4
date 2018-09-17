//
// Лабораторная работа №6. Классы. Операции
// main.cpp
//
#include "point.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    

    try {
        point p1, p2;
       /* cout << "Введите координаты первой точки" << endl;
        cin >> p1;
        cout << "Введите координаты второй точки" << endl;
        cin >> p2;
        if (p1 == p2) 
            cout << "Точки равны!" << endl;
        else
            cout << "Точки не равны!" << endl;*/
		vecktor v1;
		vecktor v2;
		cout << "Введите две точки" << endl;
		cin >> p1 >> p2;		
		cout << "Скорость равна= " << endl;
		double V;
		cin >> V;
		double a;
		cout << "Ускорение равно= " << endl;
		cin >> a;
		double t=V/a;

    }
    catch (exception e) {
        cout << e.what() << endl;
    }
    system("pause");
    return 0;
}