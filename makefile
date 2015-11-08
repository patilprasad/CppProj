expman: expensemanagerui.o 
	g++ -o expman expensemanager.o 

expensemanagerui.o : expensemanagerui.cpp color.h ui.h
	g++ -c expensemanagerui.cpp 
