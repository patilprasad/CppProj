#include "ui.h"

using namespace std;

int main (){
	string menu;
/*	cout << red  << " ****************************************************************************************" << endl;
	cout << red  << " ****************************************************************************************" << endl;
	cout << red  << " ****************************************************************************************" << endl;
     cout << red  << " **********************"<< blue << " Welcome to Expense Manager " << red << "**************************************" << endl;
	cout << endl;
	cout << endl;
	cout << reset;
*/
	CDisplay a;

	a.welcome();
	cin.ignore();
	system("clear");
	a.top("Menu");
	cin.ignore();
}		 
