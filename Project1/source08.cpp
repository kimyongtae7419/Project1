//#include <iostream>
//using namespace std;
//
////c++ 의 참조자
////할당되어 있는 하나의 메모리 공간(변수)에 다른 이름을 붙이는 기능(별칭)
//
//
//
//
//
//int main()
//{
//	int number = 10;
//	int& ref_number = number; //값을 참조하는 참조자
//	int* ptr_number = &number; //주소 값을 가리키는 포인터
//
//	//변수 출력
//	cout << number << endl;       //변수의 이름을 그대로 작성합니다.
//	cout << ref_number << endl;   //변수와 동일하게 작업
//	cout << *ptr_number << endl;  //포인터로 부터 값을 얻어올 경우에는 참조연산자(*)을 붙여 줍니다.
//
//	//주소출력
//	cout << &number << endl;      //변수의 이름앞에 주소 연산자(&)를 붙여줍니다.
//	cout << &ref_number << endl;  //변수와 동일하게 작업합니다.
//	cout << ptr_number << endl;   // 포인터 변수 이름 = 주소
//
//
//	ptr_number +=10; //포인터 변수에 변화를 주겠습니다.
//	//*ptr_number += 10;
//	number += 10;
//	cout << number << endl;     
//	cout << ref_number << endl;
//	cout << *ptr_number << endl;
//
//	cout << &number << endl;
//	cout << &ref_number << endl;
//	cout << ptr_number << endl;
//
//
//
//
//	//참조자의 특징
//	//1. 참조자는 선언과 정의가 동시에 진행되어야 함
//	//2. 참조자는 어떤 변수의 참조자로 만들어졌을 경우 다른 변수를 참조할 수 없음
//
//
//	//c++에서는 포인터 대신 참조자를 쓸 것을 권장합니다.
//	//참조자는 한번 설정하면 다른 객체를 참조할 수 없어 포인터 보다 안전한 설계가 가능합니다.
//	//참조자의 사용법은 변수의 사용법과 크게 다르지 않아 쉽게 사용이 가능함
//	//단 예외적으로 NULL값이 요구되는 경우에는 포인터를 사용하도록 함(참조자는 NULL불가)
//
//	//int& ref_number2 = NULL;
//	//int* ptr_number2 = NULL;
//
//	return 0;
//}