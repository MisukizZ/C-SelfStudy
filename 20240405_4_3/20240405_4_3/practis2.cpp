#include<iostream>

int GetCounter()
{
	//staticに変更することで最初だけ初期化
	static int counter = 0;
	return counter++;
}

int main()
{
	std::cout << GetCounter() << std::endl;
	std::cout << GetCounter() << std::endl;
	std::cout << GetCounter() << std::endl;

}