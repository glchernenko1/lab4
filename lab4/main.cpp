//
// ������������ ������ �6. ������. ��������
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
       /* cout << "������� ���������� ������ �����" << endl;
        cin >> p1;
        cout << "������� ���������� ������ �����" << endl;
        cin >> p2;
        if (p1 == p2) 
            cout << "����� �����!" << endl;
        else
            cout << "����� �� �����!" << endl;*/
		vecktor v1;
		vecktor v2;
		cout << "������� ��� �����" << endl;
		cin >> p1 >> p2;		
		cout << "�������� �����= " << endl;
		double V;
		cin >> V;
		double a;
		cout << "��������� �����= " << endl;
		cin >> a;
		double t=V/a;

    }
    catch (exception e) {
        cout << e.what() << endl;
    }
    system("pause");
    return 0;
}