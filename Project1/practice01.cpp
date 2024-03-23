#include <iostream>
#include <cstdarg>  
using namespace std;

//가변 매개변수를 이용해 숫자등의 합, 숫자들 중 가장 작은 값, 숫자들 중 가장 큰값을 출력하는 기능을 구현하시오.

void sum(int count, ...);
void min(int count, ...);
void max(int count, ...);

int main()
{
	void (*ptr)(int count, ...);
	//함수 포인터
	//함수와 동일한 타입(*포인터 이름) (매개변수);

	//해당 값을 만들면 함수의 이름을 대입하는 것으로 그 함수를 가리키는 것이 가능합니다.

	//이런 식으로 사용이 가능합니다.

	ptr = NULL;

	while (true)
	{
		cout << "기능을 선택해 주세요 1.총합 2.최소 3.최대";
		int choice;
		cin >> choice;

		//값을 제대로 입력 받으 때까지 유도하는 코드

		cout << "기능을 선택해주세요 1. 총합 2. 최소 3. 최대";
		int choice;
		cin >> choice;

		while (cin.fail() == true)
		{
			cout << "잘못된 값으 입력했습니다. 다시 입력을 진행하겠습니다!" << endl;
			cin.clear(); //cin 객체에 내용을 비우겠습니다.
			cin.ignore(100, '\n'); //띄어쓰기가 발견되면 작업 종료(입력 값 무효화)
			//cin.ignore(개수, 문장) : 개수만큼의 입력 값을 무효화 합니다. 입력한 문장을 만날 경우에는 중단
			cout << "기능을 선택해 주세요 1.총합 2.최소 3.최대";
		}






		////값이 입력이 잘못되었을 겨웅 종료하는 코드
		//if (cin.fail() == true)
		//{
		//	cout << "숫자가 아닌 값을 입력했습니다."
		//	cout << "프로그램을 종료하겠습니다." << endl;
		//	break;
		//}

		switch (choice)
		{
		case 1:
			ptr = sum; break;
		case 2:
			ptr = min; break;
		case 3:
			ptr = max; break;
		default :
			cout << "입력이 잘못되었습니다" << endl;
			ptr = NULL; //아래의 코드에 의해 출력되지 않도록 PTR을 비우겠습니다.
		}

	}

	if (ptr != NULL)
		ptr(5, 1, 2, 3, 4, 5);


	ptr = sum;
	ptr(5, 1, 2, 3, 4, 5);
	ptr = min;
	ptr(5, 1, 2, 3, 4, 5);
	ptr = max;
	ptr(5, 1, 2, 3, 4, 5);

	return 0;

}

void sum(int count, ...)
{
	va_list ap;
	va_start(ap, count);
	int sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum += va_arg(ap, int);
		cout << sum << " "
	}
	cout << "총합 : " << sum << endl;
	va_end(ap);
}

void min(int count, ...)
{
	int temp;
	va_list ap;
	va_start(ap, count);
	int min = ap[0]; //첫 값을 가장 작은 값으로 설정합니다.
	for (int i = 0; i < count; i++)
		sum


	va_end(ap);
}

void max(int count, ...)
{
	int temp;
	va_list ap;
	va_start(ap, count);


	va_end(ap);
}