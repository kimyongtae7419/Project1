#include <iostream>
#include <cstdlib>  //c언어의 stdlib.h 파일과 동일(c언어에서 특정 작업 시 추가하는 도구)
#include <ctime>    //c언어의 time.h 파일과 동일(시간에 대한 작업)
using namespace std;

//이번에 구현하고자 하는 프로그램은 '숫자 야구' 게임 구현
//규칙 : 1부터 9가지의 숫자 중 3개를 선택할 수 있습니다.
//사용자는 숫자 3개를 순서대로 입력하겠습니다.
//입력한 숫자에 따라 스트라이크와 볼을 판단합니다.

//스트라이크 : 입력한 숫자가 상대의 숫자와 값도 같고, 위치도 같은 것
//볼 : 입력한 숫자가 상대의 숫자와 값이 같고, 위치는 다릅니다.



int main()
{
	srand(time(NULL)); //랜덤에 대한 설정

	int result[3]; //자료형 변수명[숫자]; (배열) : 같은 형태의 데이트를 숫자만큼 저장 가능
	int user[3];


//[게임 시작 시 사용할 상대의 값 설정]
	//for문이 시작되면 start가 생성됩니다.(1회)
	//start가 3보다 작은 동안 반복 작업을 진행
	//반복문이 1번 마무리 될 때마다 start가 1씩 증가
	for (int start = 0; start < 3; start++)
	{
		result[start] = (rand() % 9) + 1;
		//result의 start번째 값이 수정됨(배열은 0부터 넣어준 숫자 -1까지의 순번(index)을 가지게 됩니다)
		//rand()는 0부터 32767 사이의 숫자를 랜덤으로 고르는 함수 
		//%9에 의해 해당 값은 9로 나누고 남은 값으로 계산 (0부터 8까지)
		//+1에 의해 그결과에 1이 더해 집니다. (0~8) -> (1~9)

		//현재의 start의 값만큼 반복을 진행하는 코드
		for (int check = 0; check < start; check++)
		{
			//start 위치의 result와 check 위치의 result가 같으면서, start와 check의 값이 서루 다른 경우
			if (result[start] == result[check] && start != check)
			{
				start--; //start의 값을 1 제거 합니다.
				//의도 : 이 코드로 인해 start 의 값이 1 감소하게 되면 밖에 있는  for문에 의해 다시 start가 1증가하면서 다음 값이 아닌 
				//동일한 위치에서 다시 반복을 진행하게 될 것 입니다.


				//1. start의 개수만큼 반복
				//  1-1. 현재 start 위이치의 result에 랜덤 값 적요
				//  1-2. check를 현재 start 값 만


			}

		}

		//cout << result[start] << " ";
		//cout << start << ":은"<<result[start] << "입니다";
	}




	int count = 1; //진행 회차를 표현할 변수
	int strike; //스트라이크의 개수를 표현하기 위한 변수
	int ball; //볼의 개수를 표현하기 위한 변수


//[게임 시작]
	//계속 반복하는 무한 루프문 (프로그램 실행용)
	while (true)
	{
		cout << "[" << count++ << "회차 숫자야구]" << endl;
		//count++는 count에 대한 작업(연산)을 마무리 한 뒤, count를 1 증가시키는 기능
		//위의 코드는 count에 대한 출력을 마무리 하고, count를 1 증가시킵니다.
		//화면 상에서는 원래 값이 나오고, 다음 작업때 증가된 것처럼 보일 것 입니다.



		//숫자에 대한 입력을 진행하겠습니다.
		//조건) 이 숫자는 반드시 1부터 9사이의 숫자
		//잘못된 숫자를 입력했을 경우에는 다시 입렧하도록 연출
		while (true)
		{
			cout << "1부터 9까지의 숫자을 입력하세요 >> ";
			cin >> user[0] >> user[1] >> user[2]; //user의 0 1 2 순으로 입력 가능(띄어쓰기로 구분)

			//user[0]이 1보다 작습니다. 또는 user[0]이 9보다 큽니다.
			//범위 조건
			bool check1 = user[0] < 1 || user[0] > 9;
			bool check2 = user[1] < 1 || user[1] > 9;
			bool check3 = user[2] < 1 || user[2] > 9;

			//중복 조건
			bool dup1 = user[0] == user[1];
			bool dup2 = user[0] == user[1];
			bool dup3 = user[1] == user[2];

			if (check1 || check2 || check3)
			{
				cout << "범위 외의 숫자를 입력할 수 없습니다." << endl;
				continue; //작업을 건너뛰겠습니다.(반복문의 맨 처음 위치로 이동)
			}


			//[사용자가 중복된 값을 입력하지 못하도록 설정]
			//else if 는 위에 있는 if문과 연결해서 사용하는 if문 입니다. 위의 조건이 만족할 경우 아래의 코드는 실행하지 않습니다.
			else if (dup1 || dup2 || dup3)
			{
				cout << "중복된 값이 존재해서는 안됩니다." << endl;
				continue;
			}






			break; //while 문을 종료하게 됩니다.
		}
		//반복문 탈출(스트라이크, 볼 체크)
		//볼과 스트라이크는 숫자 입력 시 마다 초기화를 진행합니다.
		//그래야 누적되지 않고 해당 숫자들을 통해 몇 스트라이크 몇 볼을 파악할 수 있습니다.

		ball = 0;
		strike = 0;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				//숫자 하나당 값을 전체 조사해서 ㅡ 값이 같다면 스트라이크, 볼을 처리합니다.
				if (result[i] == user[j])
				{
					//i와 j의 순서마저 동일하다면 스트라이크를 , 아닐 경우는 볼을 처리합니다.
					if (i == j)
						strike++;
					else
						ball++;
					
				}
			}
		}
		cout << strike << "스트라이크" << ball << "볼" << 3 - (strike + ball) << "아웃" << endl;

		//결과처리
		if (strike == 3)
		{
			cout << "승리" << endl;
			break;

		}

	}


	return 0;
}