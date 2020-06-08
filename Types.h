#pragma once
#include <string>
class Types
{
protected:
	int type;
	char firstAdress ;
	char secondAdress;
	int Send ;
	bool status;
	bool insurance;
	bool finalStatus ;
	
	

public:
 
	Types(int type) {
		this->type = type;
		firstAdress = 3*(rand() % 32);
		secondAdress = 3 * (rand() % 32);
		Send = rand() % 2 + 1;
		if (Send == 1) {
			this->insurance = true;
		}
		else {
			this->insurance = rand() % 2;
		}
		status = false;
		finalStatus = false;
	}
	void setFinalStatus(bool finalStatus) {
		this->finalStatus = finalStatus;
	}
	bool getFinalStatus() { return this->finalStatus; }
	int getType() { return this->Send; }
	bool getInsurance() { return this->insurance; }
	bool getStatus() { return this->status; }
	void setStatus() { this->status = status; }
	int getType() { return this->type; }
	char getFirstAdress() { return this->firstAdress; }
	char getSecondAdress() { return this->secondAdress; }
	void setSecondAdress() {
		this->secondAdress = secondAdress;
	}
};

