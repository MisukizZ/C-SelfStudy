#include<iostream>
#pragma once

//インライン関数
//インラインを付けることでヘッダで定義まで行える
//この場合はファイルが2つしかないのでinlineを外してもエラーは起こらない(多分)
inline void ShowNum(int inputNum)
{
	std::cout << inputNum << std::endl;
}