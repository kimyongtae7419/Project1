//#include <iostream>
//using namespace std;
//
//
////참조자 + 함수
//
////매개변수는 전달받은 값을 복사해서 함수내에서 사용하는 변수
////그리고 함수가 종료되년 해당 값은 데이터 상에서 삭제됨
//
//void PlusValue(int value)
//{
//	value++;
//
//}
//
//void PlusRerference(int& value)
//{
//	value += 1;
//	//++는 후 처리기 때문에 포인터 작성시에는 += 1을 작성해줘야 바로 결과를 확인해볼수 있습니다.
//
//}
//
//
////연습문제) 참조자를 이용해 다음과 같은 함수를 만들고 결과를 실행해보세요
////1. 전달한 int 형태의 변수의 부호를 바꾸는 함수
////2. 전달한 int 형태의 변수의 제곱을 뽑는 함수
////인자 값으로 사용할 값은 practice 입니다.
//
//
//
//void Inverse(int& value)
//{
//	value* -1;
//
//
//}
//
//
//
//
//
//
//
//
////
////int change_val(int& p) 
////{
////	p = 3;
////
////	return 0;
////}
////int main() 
////{
////	int number = 5;
////
////	std::cout << number << std::endl;
////	change_val(number);
////	std::cout << number << std::endl;
////}
//
//
//
//
//
////
//int main()
//{
//	int data = 1;
//	cout << data << endl;
//	PlusValue(data);        //이 경우라면 값만 전달했기 때문에 data 그 자체에는 변화가 오지 않습니다.( call by value)
//	cout << data << endl;
//	PlusRerference(data);
//	cout << data << endl;  //이 경우는 값을 전달했고, 매개변수가 참조자이기 때문에 전달받은 값을 참조하게 됩니다.
//	//따라서 함수가 종료되 value가 삭제되더라도 value는 data를 참조한 것이기에 그 값에 대한 적용느 진행됩니다.(call by refreence)
//	PlusPointer(&data);    //포인터가 매개변수일 경우 data의 주소(실제 저장 위치)를 전달합니다.
//	//따라서 value가 삭제되어도 실제 저장위치에 작업을 진행한 것이므로 값에 대한 적용은 진행됩니다.( call by reference)
//	cout << data << endl;
//
//	
//
//	return 0;
//}