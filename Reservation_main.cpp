#include <iostream>
#include <string>
#include "Reservation.h"
using namespace std ;

int main(){
	
	int choice ;
	string p ;
	char arr[9][7];
	int row , col ;
	
	
	cout << "\n Welcome to our Airline Reservation System:)" ;
	cout << "\n_______________________________________" ;
	cout <<"\n 1- Buisness Class \n 2- Economy Class " ;
	cout << "\n_______________________________________" ;
	cout << "\n Please Enter your Choice: " ;
	cin >> choice ;
	
	if (choice == 1){
		
		buisness_seats_display() ;
		cout << "\n Enter valid seat no to check (like 5F): " ;
	    cin >> p ;
        update(arr ,row ,col) ;
        
	}
	
	else if (choice == 2) {
		
	    economy_seats_display() ;
     	cout << "\n Enter valid seat no to check (like 5F): " ;
	    cin >> p ;
        update(arr ,row ,col) ;
        
	}
	
	else
	cout << "\n Invalid input!! Please choose (1/2)" ;
	
	return 0 ;
}
