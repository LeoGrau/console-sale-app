#pragma once
#include <string>
using std::string;
using std::to_string;

struct Price {
	string currency, formatPrice;
	double realPrice;
	
	Price() {
		currency = "$";
		realPrice = 0;
	}
	Price(double realPrice, string currency) {
		this->realPrice = realPrice;
		this->currency = currency;
		this->formatPrice = toPriceFormat();
	}

	string toStringPrice() {
		string str = "";
		str.append(to_string(this->realPrice));
		str.append(this->currency);
		return str;
	}

	string toPriceFormat() {
		int integerPart = static_cast<int>(this->realPrice);
		int decimalPart = static_cast<int>((this->realPrice - integerPart) * 1000);
		int lastDigit = decimalPart % 10;
		decimalPart /= 10;
		if (lastDigit >= 5)
			decimalPart++;
		return to_string(integerPart) + "." + to_string(decimalPart) + currency;
	}

};