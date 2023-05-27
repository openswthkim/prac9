/***************************************************************/
/*             HW#6 : 함수와 참조, 복사생성자                  */
/*  작성자 : 김태형                    날짜 : 2023년 5월 14일  */
/*                                                             */
/* 문제 정의 :   add함수를 통해 값을 누적하는 클래스를 구현    */
/*                - - - - - - -                                */
/***************************************************************/
#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value); // 매개변수 value로 멤버 value를 초기화한다.
	Accumulator& add(int n); // value에 n을 더해 값을 누적한다.
	int get(); // 누적된 값 value를 리턴한다
};

Accumulator::Accumulator(int value){ // value로 멤버 value 초기화
	this->value = value;
}
Accumulator& Accumulator::add(int n) { // value에 n을 누적으로 더함
	value += n;
	return *this; // 자기 자신 참조 리턴 한다
}
int Accumulator::get() { // value 리턴
	return value;
}

int main() {
	Accumulator acc(10); // 10으로 초기화
	acc.add(5).add(6).add(7); // acc의 value 멤버가 28이 된다.
	cout << acc.get() << endl; // 28 출력
}