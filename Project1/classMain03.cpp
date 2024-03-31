//#include <iostream>
//using namespace std;
//
////캡슐화(Encapsulation)
////1. 기능과 속성을 하나로 묶어서 구현합니다.
////2. 클래스 안에 서로 연관되어 있는 속성과 기능을 하나의 캡슐(capsule)로 보고
////   데이터에 대한 외부 노출을 보호하는 설계 기법(정보애 대한 은닉, 보안 관련)
//
////일반적으로는 클래스 내부 필드를 private로 잡고, 내부 함수를 public으로 설계하는 것으로 작업을 하나
////코드 설계에 따라 특정 코드 내부에서 다른 코드가 호출되고 있다면 그 코드에 대한 비공개를 하는 등
////상황에 맞게 공개와 비공개를 
//
//
//
////리모컨
//class RemoteController
//{
//public:
//	void VolumeUp(){}
//	void VolumeDown() {}
//	void On(){}
//	void Off(){}
//	void Channel(int number){}
//
//private :
//	void infraredRayCast() {} // 적외선 신호 충돌
//	bool_infraredRay; //적외선
//	circuit curcit; //서킷
//};
//class circuit {};
//
////1. 볼륨 크기조절, 전원 키고 끄기, 채널 변경등은 사용자가 사용해야 할 기능입니다.
////   이 부분에 대해서는 공개처리를 진행합니다.
////2. 적외선 신호 충돌은 버튼을 누르면 적외선이 발사되고 누른 지점(내부 서킷)에 따라 기능이 처리됩니다.
//
////getter / setter (get / set)
////getter : 필드 값에 대한 return 함수를 의미합니다.
////setter : 필드 값에 대한 초기화를 진행하는 함수를 의미합니다.
//
//
//class Person
//{
//private :
//	int age;
//public :
//	int getAge() { return age; }
//	void setAge(int age) { this->age = age; }
//};
//
//int main()
//{
//	Person p;
//    p.setAge(16);
//	cout << p.getAge() << endl;
//
//
//	return 0;
//}
