#include<iostream>

int GetCounter()
{
	//static‚É•ÏX‚·‚é‚±‚Æ‚ÅÅ‰‚¾‚¯‰Šú‰»
	static int counter = 0;
	return counter++;
}

int main()
{
	std::cout << GetCounter() << std::endl;
	std::cout << GetCounter() << std::endl;
	std::cout << GetCounter() << std::endl;

}