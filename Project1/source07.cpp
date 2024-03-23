#include <iostream>
#include <cstdarg>  //가변 인자 사용을 위한 헤더 추가
using namespace std;

//함수의 매개변수
//함수에서 매개변수는 호출 시 넣어줄 값에 대한 표현
//c / c++ 에서는 이런 매개변수에 대한 추가 설정을 진행할 ㅜㅅ 있습니다.

//1. 디폴트 매개변수(default parameter)
//함수에 값을 전달하지 않았을 경우, 함수에서 설정한 값으로 계산을 처리하도록 하는 기능
//사용자가 매개변수에 값을 전달하지 않으면 기본값이, 제공하면 기본 값 대신 사용됩니다.
//디폴트 매개변수의 지정은 오른쪽을 기준으로 지정합니다.

void CharacterSetting(string name = "RED");
//함수 선언을 하고 아래에 함수르 구현하 경우 main 험수에서 호출 시 연결이 가능합니다.
//함수는 컴파일 순으로 처리됩니다 (ex) main 보다 뒤에 함수가 작성된 경우라면 그 함수는 main 에서 사용 불가)
//main 코드가 너무 아래로 내려가는 상황을 막기 위해 위에는 선언만 해두고 아래에 구현하는 방식


//[가변 매개변수]
//...(생략 부호)를 통해 작성하는 이 기능은 임의 개수의 값을 받을 수 있게 됩니다.
void printInt(int number, ...)
{
	int temp; //값 교환용 변수
	va_list ap; //cstarg헤더가 연결되어 있어야 사용이 가능
	va_start(ap, number); //va_list의 첫 주소를 number로 초기화 합니다.


	for (int i = 0; i < number; i++)
	{
		temp = va_arg(ap, int); 
		//int 타입의 사이즈 만큼 테이터를 반환하고, 포인터를 sizeof(int) 만큼 이동
		// >> 넣어준 값을 쓰고 다음 값으로 이동하는 기능
		cout << temp << " ";


	}
	va_end(ap); //작업 마무리
	cout << endl;
}
//va_list : 가변인자의 묶음 (리스트)를 가리키는 포인터
//va_start(list, number) : 가변인자 리스트의 포인터를 첫 주소로 초기화 합니다.
//va_arg(ap, int) : 해당 사이즈 만큼의 데이터르 반환하고, 포인터르 int 크기(4바이트)만큼 이동합니다.
//va_end(ap); :가변인자의 사용을 종료합니다.



int main()
{
	CharacterSetting("BLUE");
	CharacterSetting(); //디폴트가 설정되어 있기에 값을 안넣어도 오류 발생이 되지 않습니다.
	printInt(1);
	printInt(1, 2);
	printInt(1, 2, 3);
	printInt(1, 2, 3, 4);


	return 0;
}


void CharacterSetting(string name)
{
	cout << "플레이어의 이름이 설정되었습니다!" << endl;
	cout << name << endl;
}