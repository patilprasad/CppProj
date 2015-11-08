#ifndef _UI_H
#define _UI_H

#include <iostream>
#include "color.h"
#include <string>
#include <cstdlib>

using namespace std;

class CDisplay{
public:
	void welcome();
	void top ( string s);
	void selectopt( string a);
};


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





#endif
