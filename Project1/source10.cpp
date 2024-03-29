//#include <iostream>
//using namespace std;
//
//
////함수의 유형
////1. 일반 함수(void)
////2. return 함수(void 이외)
////3. 매개변수에 따른 함수 설계(변수, 포인터, 배열, 구조체, 참조자...)
////4. 함수 오버로딩(이름 동일, 매개변수 수넛, 개수 다름)
////5. 재귀함수(자기 자신을 반복하는 함수)
//
////재귀함수 설계 방식
////1. 종료 조건을 설계
////2. 작업할 내용을 설계
////3. 자기 자신을 호출, 이때 종료 조건에 가까워질 수 있도록 작업을 진행함
//
////장점
////1. 반복문을 사용하지 않고 해당 작업을 반복적을 수행하는 것이 가능함
////2. 하나의 형태로 작업을 하기에 변수의 사용을 줄일 수 있습니다.
////3. 복잡한 로직의 설계를 논리적으로 쉽게 표현하는 것이 가능
//
//
////단점
////1. 함수의 호출(call)이 반복적으로 처리되 느린 처리속도를 가지고 있습니다.
////2. 메모리 영역 중 함수를 저장하는 영역을 스택(stack)이라 부르는데 이영역은 임시저장소임(함수는 호출되고 소멸하는 구조이기 때문)
////3. 이 영역에서 함수의 호출과 제거를진행해야 하는데 재귀함수 설계로 인행
//// 제거되지 못하고 호출만 계속 되고 있는 경우 메모리를 과다하게 사용하게 되고 저장 고악ㄴ이 부족한 사오항이 발생되룻 있브니다(stack overflow)
//// 이 문제의 해결을 위해 반드시 종료 조건이 작성되어 있어야 하며
//// 너무 많은 호출이 진행되지 않도록 전제 조건을 잘 설계해야 합니다.
//
//
//
////재쉬함수를 이용한 팩토리얼 구현
////N 팩토리얼은 N!라고 작성하며, N!은 1부터 N까지의 곱을 표현하는 식을 의미합니다.
//
////ex) N =5 , N! = 1*2*3*4*5
////   Factorial(5) 5*4*3*2*1
//
//
//
//int Factorial(int N)
//{
//	//팩토리얼의 종료 조건
//	if (N == 1)
//		return N;
//	//어떤 작업이 반복되고 있는가? 5x4x3x2x1 즉 Nx(N-1)    반복되고 있다.
//	return N * Factorial(N - 1);
//
//}
//
////2. 피보나치 수열(Fibonacchi numbers)
////다음과 같은 수열을 피보나치 수열이라고 부름
////1 1 2 3 5 8 13 21 34 55...
////위의 수열의 값을 순서대로 A,B,C라고 할때 a+b=c를 만족하게 됩니다.
////수열의 n번째 값을 f(n)이라고 표현한다면 위의식은  F(N) = F(N-1) + F(N-2)로 표현이 가능함
//
//
//int fibo(int N)
//{
//	//규칙의 시작점 => 종료 조건
//	if (N <= 1)
//		return N;
//	//찾아낸 규칙을 그대로 return 합니다.
//
//	return fibo(N - 1) + fibo(N - 2);
//
//}
//
//
////피보나치 수열을 출력할 함수
//void FNumbers(int N)
//{
//	//시작 값은 1이기 때문에 1부터 처리함
//	for (int i = 1; i <= N; i++)
//	{
//		cout << fibo(i) << " ";
//	}
//	cout << endl;
//}
//
//
//
//
//
//
//int main()
//{
//	int N;
//	cout << "[팩토리얼 계산기] 숫자를 입력해 주세요>>";
//	cin >> N;
//	cout << N << "!:" << Factorial(N) << endl;
//
//	//예시) N에 5을 입력했을 경우( Factorial은 편의상 F로 작성)
//	//NF를 N이 종료 조건이 아니라고 표현, NF를 N이 종료 조건임이라고 표현
//	//
//	//1. F(5) 호출 NF -> return 5 * F(4)
//	//2. F(4) 호출 NF -> return 4 * F(3)
//	//3. F(3) 호출 NF -> return 3 * F(2)
//	//4. F(2) 호출 NF -> return 2 * F(1)
//	//3. F(1) 호출 NF -> return 1
//
//	cout << "[피보나치 수열 계산기] 피보나치 수열을 출력하고자 합니다. 몇개의 수열을 출력하고 싶은지 작성하세요 >> ";
//	cin >> N;
//	FNumbers(N);
//
//
//	return 0;
//}