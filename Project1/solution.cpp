//#include <iostream>
//using namespace std;
//
//
////2024-03-24 과제풀이
//
////void colatz(int n)
////{  
////	cout << n; //선출력
////
////	//조건 처리
////	if (n == 1) //1이 되면 작업 종료
////		return;
////
////	//홀수와 짝수에 대한처리
////	n = n % 2 == 1 ? 3 * n + 1 : n / 2;
////  if(n%2 == 1)
////  n = 3 * n + 1;
////  else
////  n = n /2 ;
//// 
//// 
////	//삼항 연산자(조건식의 결과가 참 도는 거짃으로만 판단되는 if문 설계 대신 사용할 수 있는 연산자)
////	//값 = 조건 ? T : F
////	colatz(n);
////
////
////
////}
//
//
//
//
//void DecimaltoBinary(int n)
//{
//	if (n == 0 || n == 1)  //분해가 끝났으니 그 값을 출력합니다.( 0 or 1)
//	{
//		cout << n;
//		return;
//	}
//	DecimaltoBinary(n / 2);
//	cout << n % 2 << ""; //2에 대한 나머지 값 출력(2진수는 0 or 1)
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
//int main()
//{
//	//colatz(5);
//	DecimaltoBinary(28);
//
//
//	return 0;
//}