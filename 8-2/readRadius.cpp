/***************************************************************/
/*             HW#6 : �Լ��� ����, ���������                  */
/*  �ۼ��� : ������                    ��¥ : 2023�� 5�� 14��  */
/*                                                             */
/* ���� ���� :   ������ ���� �Է¹޾� �������� �����ϴ� �Լ�   */
/*                - - - - - - -                                */
/***************************************************************/
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; } // �⺻ �����ڴ� �������� 1�� �ʱ�ȭ
	Circle(int radius) { this->radius = radius; } // �Ű������� �޴� ������
	void setRadius(int radius) { this->radius = radius; } // ������ ���� ������
	double getArea() { return 3.14 * radius * radius; } // ���� ������ �����
};
void readRadius(Circle& a) {
	int r;
	cout << "���� ������ �������� �Է��ϼ���>>";
	cin >> r; // ������ �� �Է�
	a.setRadius(r); // �Է¹��� ���� Circle ��ü�� ���������� ����
}

int main() {
	Circle donut; // Circle ��ü ����
	readRadius(donut); // donut�� ������ ����
	cout << "donut�� ���� = " << donut.getArea() << endl; // donut�� ���� ���
}