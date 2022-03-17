#include <iostream>
#include <string>

#include "CProduct.h"
#include "GeneralObjects.h"
#include "Functions.h"


using std::cout;
using std::string;

using namespace System;

int main() {
	
	Price p = Price(192.1672, "$");
	cout << p.formatPrice;

	system("pause");
	return 0;
}