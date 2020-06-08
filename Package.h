#pragma once
#include <random>
#include"Types.h"
class Package:public Types//посылка
{
private:
	double weight = (rand() % 3000 - 1500) / 10;
	double size;
public:
	Package() :Types(type){
		int type = 0;
		int size = weight * 1.24;
	};
		
	
	double getWeight() { return this->weight; }
	double getSize() { return this->size; }


};
class Letter:public Types {//заказное письмо
public:
	Letter():Types(type) {
		int type = 1;
	}
		
	
};
class Parcel:public Types{//бандероль
private:
	double weight = (rand() % 5000 - 2500) / 100;
	double size;
public:
	Parcel():Types(type) {
		int type = 2;
		int size = weight * 1.24;
	}
		
	
	double getWeight() { return this->weight; }
	double getSize() { return this->size; }

};

