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
int main()
{
	return 0;
}