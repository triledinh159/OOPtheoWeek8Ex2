#pragma once
#include <iostream>
#include <string>
using namespace std;
class JOB {
protected:
	string NAME;
	int YEAR;
	string ADDRESS;
public:
	static int COUNT;
	static int getCount() {
		return COUNT;
	}
	void inputBasic();
	void outputBasic();
	virtual void INPUT() {};
	virtual void OUTPUT() {};
};
class STUDENT :public JOB {
	string ID;
	float AVERAGE;
public:
	static int COUNTSTD;
	static int getCountSTD() {
		return COUNTSTD;
	}
	 void INPUT() ;
	 void OUTPUT() ;
};
class WORKER :public JOB {
	int basicSalary;
	int ABSENT;
	int expYear;
public:
	static int COUNTWK;
	static int getCountWK() {
		return COUNTWK;
	}
	 void INPUT() ;
	 void OUTPUT() ;
};
class SINGER : public JOB {
	string musicType;
	int numShow;
	int numAlbum;
public:
	static int COUNTSG;
	static int getCountSG() {
		return COUNTSG;
	}
	 void INPUT() ;
	 void OUTPUT() ;
};
class DOCTOR : public JOB {
	string profesSkill;
	int expYear;
public:
	static int COUNTDR;
	static int getCountDR() {
		return COUNTDR;
	}
	 void INPUT() ;
	 void OUTPUT() ;
};
int JOB::COUNT = 1;
int STUDENT::COUNTSTD = 0;
int WORKER::COUNTWK = 0;
int SINGER::COUNTSG = 0;
int DOCTOR::COUNTDR = 0;