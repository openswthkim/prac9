/***************************************************************/
/*             HW#6 : 함수와 참조, 복사생성자                  */
/*  작성자 : 김태형                    날짜 : 2023년 5월 14일  */
/*                                                             */
/* 문제 정의 :   반지름 값을 입력받아 반지름을 설정하는 함수   */
/*                - - - - - - -                                */
/***************************************************************/
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; } // 기본 생성자는 반지름을 1로 초기화
	Circle(int radius) { this->radius = radius; } // 매개변수를 받는 생성자
	void setRadius(int radius) { this->radius = radius; } // 반지름 값을 설정함
	double getArea() { return 3.14 * radius * radius; } // 원의 면적을 계산함
};
void readRadius(Circle& a) {
	int r;
	cout << "정수 값으로 반지름을 입력하세요>>";
	cin >> r; // 반지름 값 입력
	a.setRadius(r); // 입력받은 값을 Circle 객체의 반지름으로 설정
}

int main() {
	Circle donut; // Circle 객체 생성
	readRadius(donut); // donut의 반지름 설정
	cout << "donut의 면적 = " << donut.getArea() << endl; // donut의 면적 출력
}