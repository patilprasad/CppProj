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

#endif
