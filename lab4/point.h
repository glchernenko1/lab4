//
// Лабораторная работа №6. Классы. Операции
// point.h
//
#pragma once
#include <cassert>
#include <iostream>



const double precision = 1E-10;


class vecktor;

class point
{
private:
    double x, y;
public:
    point();
    point(double x, double y);
    point(const point &p);
    ~point();
    
    double get_x() const;
    double get_y() const;

    double distance_to(const point &target) const;

    friend class vecktor;
    friend std::istream &operator>>(std::istream &is,  point &p);

	point  operator +(const vecktor &v);
	point  operator -(const vecktor &v);
};

bool operator==(const point &p1, const point &p2);
bool operator!=(const point &p1, const point &p2);

std::ostream &operator<<(std::ostream &os, const point &p);

point get_point();
void print(const point &p);

class vecktor
{
private:
	//point p1, p2;
	double x, y;
public:
	friend class point;
	vecktor() { x = 0; y = 0;  };
	vecktor(point p1, point p2);
	vecktor(double x, double y);
	~vecktor() { x = 0; y = 0; };
	//point get_p1() const { return p1; }
	//point get_p2() const { return p2; }
	double get_x() const { return x; }
	double get_y() const { return y; }
	double length() const ; 
	void norm();
	double angle(vecktor const & v) const;
	bool operator ==(const vecktor &v);
	bool operator !=(const vecktor &v);
	bool operator <(const vecktor &v);
	bool operator >(const vecktor &v);
	vecktor operator +(const vecktor &v);
	vecktor operator -(const vecktor &v);
	vecktor operator /(const double a);
	vecktor operator /(const int a);
	vecktor operator *(const int a);
	vecktor operator *(const double a);
	double operator * (const vecktor &v);
	vecktor operator -();
	friend std::istream &operator>>(std::istream &is, vecktor &p);
	friend std::ostream &operator<<(std::ostream &os, const vecktor &p);
};
