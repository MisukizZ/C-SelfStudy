#include<iostream>
int count()
{
	//���̏��������s���͍̂ŏ�����
	static int counter = 0;
	//�C���N�������g�������̂�Ԃ�
	return ++counter;
	//��������ƕԂ�����ɃC���N�������g���s��
	//return counter++;
}

int main()
{
	std::cout << "1��� :" << count() << std::endl;
	std::cout << "2��� :" << count() << std::endl;
	std::cout << "3��� :" << count() << std::endl;

}