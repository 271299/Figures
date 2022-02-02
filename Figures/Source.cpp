#include <iostream>
#include <vector>
#include <string>
using namespace std;
class point {
protected:
	int x, y;
public:
	point() { x = y = 0; }
	point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void print() {
		cout << "X : " << x << "\n" << "Y : " << y << "\n";
	}
	void set()
	{
		cout << "Enter X : ";
		cin >> x;
		cout << "Enter Y : ";
		cin >> y;
	}
};
class figure : public point {
protected:
	point* points;
public:
	virtual void set() = 0;
	virtual void print() = 0;
};
class circle : public figure {
	int size = 2;
public:
	void set() override
	{
		points = new point[size];
		cout << "Enter center and any point that is on the circle : ";
		for (int i = 0; i < size; i++)
		{

			points[i].set();

		}
	}
	void print()override
	{
		cout << "Circle : \n";
		for (int i = 0; i < size; i++)
		{
			points[i].print();
		}
		cout << string(10, '-') << "\n";
	}
};
class square : public figure {
	int size = 4;
public:
	void set() override
	{
		points = new point[size];
		cout << "Enter 4  points : ";
		for (int i = 0; i < size; i++)
		{

			points[i].set();

		}
	}
	void print()override
	{
		cout << "Square : \n";
		for (int i = 0; i < size; i++)
		{
			points[i].print();
		}
		cout << string(10, '-') << "\n";
	}
};
class triangle : public figure {
	int size = 3;
public:
	void set() override
	{
		points = new point[size];
		cout << "Enter 3  points : ";
		for (int i = 0; i < size; i++)
		{

			points[i].set();

		}
	}
	void print()override
	{
		cout << "Triangle : \n";
		for (int i = 0; i < size; i++)
		{
			points[i].print();
		}
		cout << string(10, '-') << "\n";
	}
};
class pentagon : public figure {
	int size = 5;
public:
	void set() override
	{
		points = new point[size];
		cout << "Enter 5  points : ";
		for (int i = 0; i < size; i++)
		{
			points[i].set();

		}
	}
	void print()override
	{
		cout << "Pentagon : \n";
		for (int i = 0; i < size; i++)
		{
			points[i].print();
		}
		cout << string(10, '-') << "\n";
	}
};
int main()
{
	const int size = 4;
	figure* v[size] = { new circle , new triangle , new square , new pentagon };
	for (int i = 0; i < size; i++)
	{
		v[i]->set();
	}
	for (int i = 0; i < size; i++)
	{
		v[i]->print();
	}


	return 0;
}