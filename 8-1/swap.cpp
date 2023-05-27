#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

void swap(Circle &a, Circle &b) {
	Circle temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	Circle a(5.5);
	Circle b(3);
	cout << "A�� ���� = " << a.getArea() << "  B�� ���� = " << b.getArea() << endl;
	swap(a, b);
	cout << "A�� ���� = " << a.getArea() << "  B�� ���� = " << b.getArea();
}