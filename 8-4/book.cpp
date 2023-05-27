/***************************************************************/
/*             HW#6 : 함수와 참조, 복사생성자                  */
/*  작성자 : 김태형                    날짜 : 2023년 5월 14일  */
/*                                                             */
/* 문제 정의 :   Book 클래스를 생성하고 깊은 복사생성자를 활용 */
/*                - - - - - - -                                */
/***************************************************************/
#include <iostream>
#include <string>
using namespace std;

class Book {
	string title; // 제목 문자열
	int price; // 가격
public:
	Book(string title, int price); // Book 생성자 선언
	void set(string title, int price); // 제목과 가격을 설정
	void show() { cout << title << ' ' << price << "원" << endl; } // 책 정보를 출력한다
};

Book::Book(string title, int price) {
	this->title = title; // 멤버 변수에 title 저장
	this->price = price; // 멤버 변수에 price 저장
}

void Book::set(string title, int price) {
	this->title = title; // 멤버 변수에 title 저장
	this->price = price; // 멤버 변수에 price 저장
}

int main() {
	Book cpp("명품C++", 10000);
	Book java = cpp; // cpp를 java로 복사함, 복사 생성자 호출
	java.set("명품자바", 12000); // java의 값을 변경
	cpp.show();
	java.show();
}