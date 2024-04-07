#include<iostream>

class  product
{
	int price;

public:
	product(int price) :price(price){}

	int get_price() const
	{
		return price;
	}

	void SetPrice(int inputPrice)
	{
		price = inputPrice;
	}

};

