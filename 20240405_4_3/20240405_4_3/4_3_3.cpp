#include<iostream>
int count()
{
	//この初期化を行うのは最初だけ
	static int counter = 0;
	//インクリメントしたものを返す
	return ++counter;
	//こうすると返した後にインクリメントを行う
	//return counter++;
}

int main()
{
	std::cout << "1回目 :" << count() << std::endl;
	std::cout << "2回目 :" << count() << std::endl;
	std::cout << "3回目 :" << count() << std::endl;

}