#include<iostream>

int GetCounter()
{
	//static�ɕύX���邱�Ƃōŏ�����������
	static int counter = 0;
	return counter++;
}

int main()
{
	std::cout << GetCounter() << std::endl;
	std::cout << GetCounter() << std::endl;
	std::cout << GetCounter() << std::endl;

}