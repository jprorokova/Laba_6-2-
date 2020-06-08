#pragma once
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <random>
#include "Types.h"
#include "Package.h"
class Clients
{
private:
	Types* A;
public:
	Clients() {
		int type = rand() % 3; // 0-Посылка 1-Заказное письмо  2-Бандероль
		if (type == 0) {
			this->A = new  Package();
		}
		if (type == 1) {
			this->A = new Letter();
		}
		else {
			this->A = new Parcel();
		}
	}
	

	

};

