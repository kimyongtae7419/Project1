//#include <iostream>
//using namespace std;
//
//
////������ + �Լ�
//
////�Ű������� ���޹��� ���� �����ؼ� �Լ������� ����ϴ� ����
////�׸��� �Լ��� ����ǳ� �ش� ���� ������ �󿡼� ������
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
//	//++�� �� ó���� ������ ������ �ۼ��ÿ��� += 1�� �ۼ������ �ٷ� ����� Ȯ���غ��� �ֽ��ϴ�.
//
//}
//
//
////��������) �����ڸ� �̿��� ������ ���� �Լ��� ����� ����� �����غ�����
////1. ������ int ������ ������ ��ȣ�� �ٲٴ� �Լ�
////2. ������ int ������ ������ ������ �̴� �Լ�
////���� ������ ����� ���� practice �Դϴ�.
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
//	PlusValue(data);        //�� ����� ���� �����߱� ������ data �� ��ü���� ��ȭ�� ���� �ʽ��ϴ�.( call by value)
//	cout << data << endl;
//	PlusRerference(data);
//	cout << data << endl;  //�� ���� ���� �����߰�, �Ű������� �������̱� ������ ���޹��� ���� �����ϰ� �˴ϴ�.
//	//���� �Լ��� ����� value�� �����Ǵ��� value�� data�� ������ ���̱⿡ �� ���� ���� ����� ����˴ϴ�.(call by refreence)
//	PlusPointer(&data);    //�����Ͱ� �Ű������� ��� data�� �ּ�(���� ���� ��ġ)�� �����մϴ�.
//	//���� value�� �����Ǿ ���� ������ġ�� �۾��� ������ ���̹Ƿ� ���� ���� ������ ����˴ϴ�.( call by reference)
//	cout << data << endl;
//
//	
//
//	return 0;
//}