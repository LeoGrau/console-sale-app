#include "CProduct.h"

Product::Product() {
	nameProduct = "unknown";
	salePriceProduct = costPriceProduct = Price();
	stock = 0;
}

Product::Product(string nameProduct, Price costPriceProduct, Price salePriceProduct, int stock) {
	this->nameProduct = nameProduct;
	this->costPriceProduct = costPriceProduct;
	this->salePriceProduct = salePriceProduct;
	this->stock = stock;
}

void Product::setNameProduct(string nameProduct) {
	this->nameProduct = nameProduct;
}
void Product::setCostPriceProduct(Price costPriceProduct) {
	this->costPriceProduct = costPriceProduct;
}
void Product::setSalePriceProduct(Price salePriceProduct) {
	this->salePriceProduct = salePriceProduct;
}
void Product::setStock(int stock) {
	this->stock = stock;
}

string Product::getNameProduct() {
	return this->nameProduct;
}
Price Product::getCostPriceProduct() {
	return this->costPriceProduct;
}
Price Product::getSalePriceProduct() {
	return this->salePriceProduct;
}
int Product::getStock() {
	return this->stock;
}