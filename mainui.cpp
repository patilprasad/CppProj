#include "main.h"

using namespace std;

int main (){
	system("clear");
	int h;
	string menu;

	Display a;
	
	a.welcome();
	cin.ignore();
ch1:	system("clear");

	a.dismainmenu(" Main Menu");
	cout << " choose an option " << endl;
	cin>> h;
	system (" clear");
	switch (h)
	{
	case 1:
		a.disrent(" Main Menu --> Rent " );
		cin.ignore();
		cout << reset;
		break;
	default:
		cout << cyan << " Please provide an input " << endl;
		cin.ignore();
		cin.ignore();
		goto ch1;
		break;
	}
	cin.ignore();
	system("clear");


}		 
