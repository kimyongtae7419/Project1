//#include <iostream>
//using namespace std;
//
////ĸ��ȭ(Encapsulation)
////1. ��ɰ� �Ӽ��� �ϳ��� ��� �����մϴ�.
////2. Ŭ���� �ȿ� ���� �����Ǿ� �ִ� �Ӽ��� ����� �ϳ��� ĸ��(capsule)�� ����
////   �����Ϳ� ���� �ܺ� ������ ��ȣ�ϴ� ���� ���(������ ���� ����, ���� ����)
//
////�Ϲ������δ� Ŭ���� ���� �ʵ带 private�� ���, ���� �Լ��� public���� �����ϴ� ������ �۾��� �ϳ�
////�ڵ� ���迡 ���� Ư�� �ڵ� ���ο��� �ٸ� �ڵ尡 ȣ��ǰ� �ִٸ� �� �ڵ忡 ���� ������� �ϴ� ��
////��Ȳ�� �°� ������ ������� 
//
//
//
////������
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
//	void infraredRayCast() {} // ���ܼ� ��ȣ �浹
//	bool_infraredRay; //���ܼ�
//	circuit curcit; //��Ŷ
//};
//class circuit {};
//
////1. ���� ũ������, ���� Ű�� ����, ä�� ������� ����ڰ� ����ؾ� �� ����Դϴ�.
////   �� �κп� ���ؼ��� ����ó���� �����մϴ�.
////2. ���ܼ� ��ȣ �浹�� ��ư�� ������ ���ܼ��� �߻�ǰ� ���� ����(���� ��Ŷ)�� ���� ����� ó���˴ϴ�.
//
////getter / setter (get / set)
////getter : �ʵ� ���� ���� return �Լ��� �ǹ��մϴ�.
////setter : �ʵ� ���� ���� �ʱ�ȭ�� �����ϴ� �Լ��� �ǹ��մϴ�.
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
