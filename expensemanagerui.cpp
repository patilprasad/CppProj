#include "ui.h"

using namespace std;

int main (){
	system("clear");
	string menu;
	CDisplay a;
	a.welcome();
	cin.ignore();
	system("clear");
//	a.top("Menu");
	a.selectopt("Menu");
	cin.ignore();
}		 
