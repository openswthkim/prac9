/***************************************************************/
/*             HW#6 : �Լ��� ����, ���������                  */
/*  �ۼ��� : ������                    ��¥ : 2023�� 5�� 14��  */
/*                                                             */
/* ���� ���� :   Book Ŭ������ �����ϰ� ���� ��������ڸ� Ȱ�� */
/*                - - - - - - -                                */
/***************************************************************/
#include <iostream>
#include <string>
using namespace std;

class Book {
	string title; // ���� ���ڿ�
	int price; // ����
public:
	Book(string title, int price); // Book ������ ����
	void set(string title, int price); // ����� ������ ����
	void show() { cout << title << ' ' << price << "��" << endl; } // å ������ ����Ѵ�
};

Book::Book(string title, int price) {
	this->title = title; // ��� ������ title ����
	this->price = price; // ��� ������ price ����
}

void Book::set(string title, int price) {
	this->title = title; // ��� ������ title ����
	this->price = price; // ��� ������ price ����
}

int main() {
	Book cpp("��ǰC++", 10000);
	Book java = cpp; // cpp�� java�� ������, ���� ������ ȣ��
	java.set("��ǰ�ڹ�", 12000); // java�� ���� ����
	cpp.show();
	java.show();
}