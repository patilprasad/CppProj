#include "attributes.h"

string Attribute:: GetUsername()
{
	return username;
}

double Attribute:: GetRent()
{
	return rent;
}

double Attribute:: GetCarLoan()
{
	return carloan;
}

double Attribute:: GetElecGas()
{
	return elecgas ;
}
double Attribute:: GetPhone()
{
	return phone;
}
double Attribute:: GetInsurance()
{
	return insurance;
}

double Attribute:: GetGroceries()
{
	return groceries;
}

double Attribute:: GetCommute()
{
	return commute;
}

double Attribute:: GetMisc()
{
	return misc;
}

string Attribute:: GetStatement()
{
	return statement;
}
double Attribute:: GetRecFlag()
{
	return rflag;
}
double Attribute:: GetThreshold()
{
	return threshold;
}



void AttributeDB:: SetUsername()
{
//	return username;
}

void AttributeDB:: SetRent()
{
//	return rent;
}

void AttributeDB:: SetCarLoan()
{
//	return carloan;
}

void AttributeDB:: SetElecGas()
{
//	return elecgas ;
} 
void AttributeDB:: SetPhone()
{
//	return phone;
}
void AttributeDB:: SetInsurance()
{
//	return insurance;
}

void AttributeDB:: SetGroceries()
{
//	return groceries;
}

void AttributeDB:: SetCommute()
{
//	return commute;
}

void AttributeDB:: SetMisc()
{
//	return misc;
}

void AttributeDB:: SetStatement()
{ 
//	return statement;
}
void AttributeDB:: SetRecFlag()
{
//	return rflag;
}
void AttributeDB:: SetThreshold()
{
//	return threshold;
}


void CDisplay :: welcome ()
{
        cout << red  << " ****************************************************************************************" << endl;
        cout << red  << " ****************************************************************************************" << endl;
        cout << red  << " ****************************************************************************************" << endl;
    cout << red  << " **************************"<< blue << " Welcome to Expense Manager " << red << "***********************************" << endl;
        cout << endl;
        cout << endl;
        cout << reset;
}

void CDisplay :: top (string s)
{   

        cout << blue << " Expense manager " << endl;
        cout << blue << s << endl;
        cout << reset << endl;
}   

void CDisplay :: selectopt ( string s){
        top(s);
        cout << orange << " \t\t 1. Rent " << endl;
        cout << orange << " \t\t 2. car loan " << endl;
        cout << orange << " \t\t 3. Electricity and gas " << endl;
        cout << orange << " \t\t 4. Phone " << endl;
        cout << orange << " \t\t 5. Insurance " << endl;
        cout << orange << " \t\t 6. Groceries " << endl;
        cout << orange << " \t\t 7. Commute " << endl;
        cout << orange << " \t\t 8. Miscellaneous " << endl;
}

