/***************************************************************/
/*             HW#6 : �Լ��� ����, ���������                  */
/*  �ۼ��� : ������                    ��¥ : 2023�� 5�� 14��  */
/*                                                             */
/* ���� ���� :   add�Լ��� ���� ���� �����ϴ� Ŭ������ ����    */
/*                - - - - - - -                                */
/***************************************************************/
#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value); // �Ű����� value�� ��� value�� �ʱ�ȭ�Ѵ�.
	Accumulator& add(int n); // value�� n�� ���� ���� �����Ѵ�.
	int get(); // ������ �� value�� �����Ѵ�
};

Accumulator::Accumulator(int value){ // value�� ��� value �ʱ�ȭ
	this->value = value;
}
Accumulator& Accumulator::add(int n) { // value�� n�� �������� ����
	value += n;
	return *this; // �ڱ� �ڽ� ���� ���� �Ѵ�
}
int Accumulator::get() { // value ����
	return value;
}

int main() {
	Accumulator acc(10); // 10���� �ʱ�ȭ
	acc.add(5).add(6).add(7); // acc�� value ����� 28�� �ȴ�.
	cout << acc.get() << endl; // 28 ���
}