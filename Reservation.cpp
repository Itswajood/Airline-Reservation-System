#include "Reservation.h"
#include <iostream>
#include <string>
void buisness_seats_display() {
	
	char seat[] = {'A','B','C','D','E','F'} ;
	cout << "\n \t   Buisness Class" ;
	for (int i = 0 ; i < 9 ; i++)
	{
		
		cout << "\t" << endl ;
		
		for (int j = 0 ; j < 6 ; ++j){
			
			
			cout <<"[" << i+1 << seat[j] << "]" ;
			
			if (seat[j]=='C')
			cout << "\t \t" ;
		
		}
	}
	
}



void economy_seats_display() {
	char seat[] = {'A','B','C','D','E','F'} ;
	cout << "\n \t   economy Class" ;
	for (int i = 0 ; i < 9 ; i++)
	{
		
		cout << "\t" << endl ;
		
		for (int j = 0 ; j < 6 ; ++j){
			
			
			cout <<"[" << i+1 << seat[j] << "]" ;
			
			if (seat[j]=='C')
			cout << "\t \t" ;
		
		}
	}
	
	
}



string getData(){ 
	string p;
	cout<<"\n\nenter valid seat no to check (like 5F) or E to finish: ";
	cin>>p;
	return p;
}


void update(char arr[9][7],int row,int col){ 
	cout<<"\n your seat is reserved\n";
	arr[row][col]='X';//to reserve seat
}


