#ifndef _ATTRIBUTES_H
#define _ATTRIBUTES_H

#include <iostream>
#include <string>
#include "color.h"
#include <cstdlib>

using namespace std;

class Attribute{
public:
	string username, statement;
	double rent,carloan,elecgas,phone,insurance,groceries,commute,misc,rflag,threshold;
	string GetUsername();
	double GetRent();
	double GetCarLoan();
	double GetElecGas();
	double GetPhone();
	double GetInsurance();
	double GetGroceries();
	double GetCommute();
	double GetMisc();
	string GetStatement();
	double GetRecFlag();
	double GetThreshold();
	friend class AttributeDB;
};

class AttributeDB{
public:
	void SetUsername();
	void SetRent();
	void SetCarLoan();
	void SetElecGas();
	void SetPhone();
	void SetInsurance();
	void SetGroceries();
	void SetCommute();
	void SetMisc();
	void SetStatement();
	void SetRecFlag();
	void SetThreshold();
};

class Display{
public:
        void welcome();
        void top ( string s);
        void dismainmenu( string s);
	void disrent( string s);
};

#endif
