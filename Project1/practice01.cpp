#include <iostream>
#include <cstdarg>  
using namespace std;

//���� �Ű������� �̿��� ���ڵ��� ��, ���ڵ� �� ���� ���� ��, ���ڵ� �� ���� ū���� ����ϴ� ����� �����Ͻÿ�.

void sum(int count, ...);
void min(int count, ...);
void max(int count, ...);

int main()
{
	void (*ptr)(int count, ...);
	//�Լ� ������
	//�Լ��� ������ Ÿ��(*������ �̸�) (�Ű�����);

	//�ش� ���� ����� �Լ��� �̸��� �����ϴ� ������ �� �Լ��� ����Ű�� ���� �����մϴ�.

	//�̷� ������ ����� �����մϴ�.

	ptr = NULL;

	while (true)
	{
		cout << "����� ������ �ּ��� 1.���� 2.�ּ� 3.�ִ�";
		int choice;
		cin >> choice;

		//���� ����� �Է� ���� ������ �����ϴ� �ڵ�

		cout << "����� �������ּ��� 1. ���� 2. �ּ� 3. �ִ�";
		int choice;
		cin >> choice;

		while (cin.fail() == true)
		{
			cout << "�߸��� ���� �Է��߽��ϴ�. �ٽ� �Է��� �����ϰڽ��ϴ�!" << endl;
			cin.clear(); //cin ��ü�� ������ ���ڽ��ϴ�.
			cin.ignore(100, '\n'); //���Ⱑ �߰ߵǸ� �۾� ����(�Է� �� ��ȿȭ)
			//cin.ignore(����, ����) : ������ŭ�� �Է� ���� ��ȿȭ �մϴ�. �Է��� ������ ���� ��쿡�� �ߴ�
			cout << "����� ������ �ּ��� 1.���� 2.�ּ� 3.�ִ�";
		}






		////���� �Է��� �߸��Ǿ��� �ܿ� �����ϴ� �ڵ�
		//if (cin.fail() == true)
		//{
		//	cout << "���ڰ� �ƴ� ���� �Է��߽��ϴ�."
		//	cout << "���α׷��� �����ϰڽ��ϴ�." << endl;
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
			cout << "�Է��� �߸��Ǿ����ϴ�" << endl;
			ptr = NULL; //�Ʒ��� �ڵ忡 ���� ��µ��� �ʵ��� PTR�� ���ڽ��ϴ�.
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
	cout << "���� : " << sum << endl;
	va_end(ap);
}

void min(int count, ...)
{
	int temp;
	va_list ap;
	va_start(ap, count);
	int min = ap[0]; //ù ���� ���� ���� ������ �����մϴ�.
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