expman : expensemanagerui.o color.h ui.h
	g++ expensemanager.o -o expman

expensemanagerui.o : expensemanagerui.cpp 
	g++ expensemanagerui.cpp  -o expensemanagerui.o
