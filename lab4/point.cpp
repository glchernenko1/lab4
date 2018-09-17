//
// Лабораторная работа №6. Классы. Операции
// point.cpp
//
#include <cmath>
#include <exception>
#include <iostream>
#include "point.h"

using namespace std;

//
// Методы
//

point::point() : x(0.0), y(0.0)
{
    //cout << "Создана точка (0,0)" << endl;
}

point::point(double x, double y)
{
    this->x = x;
    this->y = y;
    //cout << "Создана точка ( " << x << " , " << y << " )" << endl;
}

point::point(const point &p) : x(p.x), y(p.y)
{
    //cout << "Создана копия ( " << x << " , " << y << " )" << endl;
}

point::~point()
{
    //cout << "Уничтожена точка ( " << x << " , " << y << " )" << endl;
}

double point::distance_to(const point &target) const
{
    return sqrt((x - target.x)*(x - target.x) + (y - target.y)*(y - target.y));
}

point point::operator+(const vecktor & v)
{
	return point(x+v.x, y+v.y);
}

point point::operator-(const vecktor & v)
{
	return point(x - v.x, y - v.y);
}

double point::get_x() const
{
    return x;
}

double point::get_y() const
{
    return y;
}

//
// Операции
//

bool operator==(const point &p1, const point &p2)
{
    return abs(p1.get_x() - p2.get_x()) < precision &&
        abs(p1.get_y() - p2.get_y()) < precision;
}

bool operator!=(const point &p1, const point &p2)
{
    return !(p1 == p2);
}

std::ostream &operator<<(std::ostream &os, const point &p)
{
    os << "( " << p.get_x() << ", " << p.get_y() << " )";
    return os;
}

std::istream &operator>>(std::istream &is, point &p)
{
    is >> p.x >> p.y;
    return is;
}

//
// Глобальные фуекции
//

point get_point()
{
    double x, y;
    std::cin >> x >> y;
    if (!std::cin)
        throw std::domain_error("Некорректные координаты точки");
    return point(x, y);
}

void print(const point & p)
{
    std::cout << "(" << p.get_x() << ", " << p.get_y() << ")";
}



vecktor::vecktor(point p1, point p2)
{
	
	this->x = p2.x-p1.x;
	this -> y = p2.y - p2.y;
	
	
}

vecktor::vecktor(double x, double y)
{
this->x = x;
this->y = y;

}

double vecktor::length() const
{
	return sqrt(x*x + y * y);
}

void vecktor::norm()
{
	this->x = x / this->length();
	this->y = y / this->length();
}

double vecktor::angle(vecktor const & v) const
{


	return cos((this->x*v.x + this->y*v.y) / sqrt(this->x*this->x + this->y*this->y) / sqrt(v.x*v.x + v.y*v.y)); ;
}

bool vecktor::operator==(const vecktor & v)
{

	return (this->x==v.x&& this->y==v.y);
}

bool vecktor::operator!=(const vecktor & v)
{
	return (!(this->x == v.x&& this->y == v.y));
}

bool vecktor::operator<(const vecktor & v)
{
	return sqrt(x*x + y * y) < sqrt(v.x*v.x + v.y*v.y);
}

bool vecktor::operator>(const vecktor & v)
{
	return sqrt(x*x + y * y) > sqrt(v.x*v.x + v.y*v.y);
}

vecktor vecktor::operator+(const vecktor & v)
{
	return vecktor(x+v.x,y+v.y);
}

vecktor vecktor::operator-(const vecktor & v)
{
	return vecktor(x - v.x, y - v.y);;
}

vecktor vecktor::operator/(const double a)
{
	return vecktor(x / a, y / a);
}

vecktor vecktor::operator/(const int a)
{
	return vecktor(x/a, y/a);
}

vecktor vecktor::operator*(const int a)
{
	return vecktor(x*a, y*a);;
}

vecktor vecktor::operator*(const double a)
{
	return vecktor(x*a,y*a);
}

double vecktor::operator*(const vecktor & v)
{
	return this->length()*v.length()*cos(this->angle(v));
}



vecktor vecktor::operator-()
{
	return vecktor(-x,-y);
}

 std::istream &operator>>(std::istream &is, vecktor &p)
{
	 is >> p.x >> p.y;
	 return is;
}



 std::ostream & operator<<(std::ostream & os, const vecktor & p)
 {
	 os << "(" << p.x << " " << p.y << ")";
	 return os;
 }

