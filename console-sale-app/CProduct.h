#pragma once
#include <string>
#include "GeneralObjects.h"
using std::string;

class Product {
	string nameProduct;
	Price costPriceProduct;
	Price salePriceProduct;
	int stock;
public:
	Product();
	Product(string nameProduct, Price costPriceProduct, Price salePriceProduct, int stock);

	//setters
	void setNameProduct(string nameProduct);
	void setCostPriceProduct(Price costPriceProduct);
	void setSalePriceProduct(Price salePriceProduct);
	void setStock(int stock);
	//getters
	string getNameProduct();
	Price getCostPriceProduct();
	Price getSalePriceProduct();
	int getStock();
};