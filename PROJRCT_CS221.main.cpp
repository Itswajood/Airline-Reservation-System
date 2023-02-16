#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

// global variable
int flight = 0 ;
const int size = 10 ;
int Flight_no[size] ;
int numberofFlight = 0  , date ;
char dom_departure[10] , dom_arrive[10] , flight_dom[12] ;
char int_departure[10] , int_arrive[10] , flight_int[12] ;
int ticket ;
string fname ;
string lname ;
string meal ;
int age ;
int id ;
char meal_choice ;
int choice ;
int seat_choice;
int  bcount=0,ecount=0;
string p; //seat

// struct for booking
struct data { // wajood
	
	int depature , destination ; // for first and second func
	
};



// struct for payment functions 
struct pay{ // wajood
	
	int choice ;
	int cardnum , Expd ,cvv , pass ;
	
};


void Flightn0() {
	int x ;
	flight ++ ;
    x = flight ;
	for (int i = 0 ; i < size ; i++){
		
		Flight_no[i] = x ;
		
	}
	
}

namespace dom
{
	// function to display cities & flights (dom)
data details(data x){ // wajood

	
	
	cout << "\n Please Enter the date of depature (DD / MM / YY ) :" ;
	cin >> date ;
	
	cout << "\n _________________________" ;
	cout << "\n        Departure          " ;
	cout << "\n _________________________" ;
	cout << "\n 1- Riyadh." ;
	cout << "\n 2- Jeddah." ;
	cout << "\n 3- Dammam." ;
	cout << "\n _________________________" ;
	cout << "\n Enter your depature city: (1/2/3) " ;
	cin >> x.depature ;
	
	cout << "\n _________________________" ;
	cout << "\n       Destination          " ;
	cout << "\n _________________________" ;
	cout << "\n 1- Riyadh." ;
	cout << "\n 2- Jeddah." ;
	cout << "\n 3- Dammam." ;
	cout << "\n _________________________" ;
	cout << "\n Enter your destination city: (1/2/3) " ;
	cin >> x.destination ;
	
		do {
		
		if (x.depature == 1 && x.destination == 2 || x.depature == 2 && x.destination == 1){
			
			cout << "\n _________________________________________________________" ;
			cout << "\n                      Avaliable flights                  " ;
			cout << "\n _________________________________________________________" ;
			cout << "\n  Airline              Departure                   Arrival " ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 1-Saudi Airline          7:00 AM                  9:30 AM" ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 2-Flynas                 10:00 AM                12:30 PM" ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 3-Flyadeal               05:45 PM                08:15 PM" ;
			cout << "\n _________________________________________________________" ;
			
			 
		}
		
		else if (x.depature == 1 && x.destination == 3 || x.depature == 3 && x.destination == 1){
			
			cout << "\n _________________________________________________________" ;
			cout << "\n                      Avaliable flights                  " ;
			cout << "\n _________________________________________________________" ;
			cout << "\n  Airline              Departure                   Arrival " ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 1-Saudi Airline          7:00 AM                  9:30 AM" ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 2-Flynas                 10:00 AM                12:30 PM" ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 3-Flyadeal               05:45 PM                08:15 PM" ;
			cout << "\n _________________________________________________________" ;
			
			
		}
		else if (x.depature == 2 && x.destination == 3 || x.depature == 3 && x.destination == 2) {
			
				cout << "\n _________________________________________________________" ;
			cout << "\n                      Avaliable flights                  " ;
			cout << "\n _________________________________________________________" ;
			cout << "\n  Airline              Departure                   Arrival " ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 1-Saudi Airline          7:00 AM                  9:30 AM" ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 2-Flynas                 10:00 AM                12:30 PM" ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 3-Flyadeal               05:45 PM                08:15 PM" ;
			cout << "\n _________________________________________________________" ;
			
			
		}
	
	else 
	{
			cout << "\n You Entered invailed input!!" ;
	}

	
	return x ;
	}
	
	while (x.depature != x.destination) ;
	
}
}



// funtion to display the Flight Information  (dom)
void info_dom() { // wajood
		
		
		int choice_dom ;
		cout << "\n Enter your choice of flight: (1/2/3) \n" ;
		cin >> choice_dom ;
		
		if (choice_dom = 1) {
			
			cout << "\n            Flight Information          ";
			cout << "\n _______________________________________" ;
			cout << "\n Airline : SaudiAirline " ;
			cout << "\n Departure: 7:00 AM " ;
			cout << "\n Arrival: 9:30 AM " ;
			cout << "\n Gate: TBA " ;
			cout << "\n _______________________________________" ;
			strcpy(dom_departure,"7:00 AM");
			strcpy(dom_arrive,"9:30 AM");
			strcpy(flight_dom,"SaudiAirline");
		}
		
		else if (choice_dom = 2) {
			
			cout << "\n            Flight Information          ";
			cout << "\n _______________________________________" ;
			cout << "\n Airline : Flynas " ;
			cout << "\n Departure: 10:00 AM " ;
			cout << "\n Arrival: 12:30 PM " ;
			cout << "\n Gate: TBA " ;
			cout << "\n _______________________________________" ;
			strcpy(dom_departure,"10:00 AM");
			strcpy(dom_arrive,"12:30 PM");
			strcpy(flight_dom,"Flynas");
		
     	}
	
	else if (choice_dom = 3) {
			
			cout << "\n            Flight Information          ";
			cout << "\n _______________________________________" ;
			cout << "\n Airline : Flyadeal " ;
			cout << "\n Departure: 7:00 PM " ;
			cout << "\n Arrival: 8:30 PM " ;
			cout << "\n Gate: TBA " ;
			cout << "\n _______________________________________" ;
		    strcpy(dom_departure,"7:00 PM");
			strcpy(dom_arrive,"8:30 PM");
			strcpy(flight_dom,"Flyadeal");
	
        }
    
    else 
    cout << "\n Wrong input!! Please choose (1/2/3)" ;
    
}
 
 
namespace inter 
{
    // function to display cities & flights (inter)
data details(data x ){ // wajood
	

	cout << "\n Please Enter your the date of depature (DD / MM / YY ) :" ;
	cin >> date ;
	
	cout << "\n _________________________" ;
	cout << "\n        Departure          " ;
	cout << "\n _________________________" ;
	cout << "\n 1- New York." ;
	cout << "\n 2- Paris." ;
	cout << "\n 3- Tokyo." ;
	cout << "\n _________________________" ;
	cout << "\n Enter your Departure city: (1/2/3) " ;
	cin >> x.depature ;
	
	cout << "\n _________________________" ;
	cout << "\n       Destination          " ;
	cout << "\n _________________________" ;
	cout << "\n 1- New York." ;
	cout << "\n 2- Paris." ;
	cout << "\n 3- Tokyo." ;
	cout << "\n _________________________" ;
	cout << "\n Enter your destination city: (1/2/3) " ;
	cin >> x.destination ;
	
		do {
		
		if (x.depature == 1 && x.destination == 2 || x.depature == 2 && x.destination == 1){
			
			cout << "\n _________________________________________________________" ;
			cout << "\n                      Avaliable flights                  " ;
			cout << "\n _________________________________________________________" ;
			cout << "\n  Airline              Departure                   Arrival " ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 1-AmericanAirline        5:00 AM                  6:30 AM" ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 2-Flynas                 10:00 AM                11:30 AM" ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 3-TokAirline             7:00 PM                  8:30 PM" ;
			cout << "\n _________________________________________________________" ;
			
			
		}
		
		else if (x.depature == 1 && x.destination == 3 || x.depature == 3 && x.destination == 1){
			
			cout << "\n _________________________________________________________" ;
			cout << "\n                      Avaliable flights                  " ;
			cout << "\n _________________________________________________________" ;
			cout << "\n  Airline              Departure                   Arrival " ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 1-AmericanAirline        5:00 AM                  6:30 AM" ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 2-Flynas                 10:00 AM                11:30 AM" ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 3-TokAirline             7:00 PM                  8:30 PM" ;
			cout << "\n _________________________________________________________" ;
			
			
		}
		else if (x.depature == 2 && x.destination == 3 || x.depature == 3 && x.destination == 2) {
			
		cout << "\n _________________________________________________________" ;
			cout << "\n                      Avaliable flights                  " ;
			cout << "\n _________________________________________________________" ;
			cout << "\n  Airline              Departure                   Arrival " ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 1-AmericanAirline        5:00 AM                  6:30 AM" ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 2-Flynas                 10:00 AM                11:30 AM" ;
			cout << "\n _________________________________________________________" ;
			cout << "\n 3-TokAirline             7:00 PM                  8:30 PM" ;
			cout << "\n _________________________________________________________" ;
		}
		
	else
	{
		cout << "\n You Entered invailed input!!" ;
	 } 
	
	return x ;
	} 
	
	while (x.depature != x.destination) ;
    
}   	
}




// funtion to display the Flight Information  (inter)   
void info_int() { // wajood

	    int choice_int ;
		cout << "\n Enter your choice of flight: (1/2/3) " ;
		cin >> choice_int ;
		
		if (choice_int == 1) {
			
			cout << "\n            Flight Information          ";
			cout << "\n _______________________________________" ;
			cout << "\n Airline : AmericanAirline " ;
			cout << "\n Departure: 5:00 AM " ;
			cout << "\n Arrival: 6:30 AM " ;
			cout << "\n Gate: TBA " ;
			cout << "\n _______________________________________" ;
			strcpy(int_departure,"5:00 AM");
			strcpy(int_arrive,"6:30 AM");
			strcpy(flight_int,"AmericanAirline") ;
			
		}
		
		else if (choice_int == 2) {
			
			cout << "\n            Flight Information          ";
			cout << "\n _______________________________________" ;
			cout << "\n Airline : Flynas " ;
			cout << "\n Departure: 10:00 AM " ;
			cout << "\n Arrival: 11:30 PM " ;
			cout << "\n Gate: TBA " ;
			cout << "\n _______________________________________" ;
			strcpy(int_departure,"10:00 AM");
			strcpy(int_arrive,"11:30 PM");
			strcpy(flight_int,"Flynas");
			
			
     	}
	
	else if (choice_int == 3) {
			
			cout << "\n            Flight Information          ";
			cout << "\n _______________________________________" ;
			cout << "\n Airline : TokAirline " ;
			cout << "\n Departure: 5:45 PM " ;
			cout << "\n Arrival: 8:15 PM " ;
			cout << "\n Gate: TBA " ;
			cout << "\n _______________________________________" ;
			strcpy(dom_departure,"5:45 PM");
			strcpy(dom_arrive,"8:15 PM");
			strcpy(flight_dom,"TokAirline");
			
	
        }
    
    else 
    cout << "\n Wrong input!! Please choose (1/2/3)" ;
    
   	
}


// function of type passngers to enter info
void info(){ 
	
	    // all variables are global
	    cout << "\n\n\n Kindly Enter your informations: " ;
		cout << "\n Passnger information: " ;
		cout << "\n First Name: " ;
		cin >> fname ;
		cout << "\n Last Name: " ;
		cin >> lname ;
		cout << "\n Age: " ;
	    cin >> age ;
		cout << "\n ID : " ;
        cin >> id ;
	
}



// void function to display the meal options
void meal_menu() { // wajood
	
    	cout << "\n                 Meal                   ";
		cout << "\n _______________________________________" ;
		cout << "\n Beef Meal. " ;
		cout << "\n Chicken Meal. " ;
		cout << "\n Vegetarian Meal." ;
		cout << "\n No Meal. " ;
		cout << "\n _______________________________________" ;
		cout << "\n Enter your choice: (Alphabetically)" ;
		cin >> meal ; // global variable 
		
} 

//display buisness seats
void buisness_seats_display() { //wejdan
	
	char seat[] = {'A','B','C','D','E','F'} ;
	cout << "\n \t   Buisness Class" ;
	for (int i = 0 ; i < 9 ; i++)
	{
		cout << "\t" << endl ;
		
		for (int j = 0 ; j < 6 ; ++j)
		{
			
			
			cout <<"[" << i+1 << seat[j] << "]" ;
			
			if (seat[j]=='C')
			cout << "\t \t" ;
		
		}
	}
	
}

//display economy seats
void economy_seats_display() { //Wejdan
	char seat[] = {'A','B','C','D','E','F'} ;
	cout << "\n \t   Economy Class" ;
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


//take user data
string getData(){  // wejdan
	
	cout<<"\n\nEnter valid seat no to check (like 5F): ";
	cin>>p;
	return p;
}


//to use in airline function
void display(char arr[9][7]){ //wejdan
	for(int i=0;i<9;i++){
		for(int j=0;j<7;j++){
			
	}

	
}}

//update sit status
void update(char arr[9][7],int row,int col){ // wejdan
	cout<<"your seat is reserved\n";
	arr[row][col]='X';//to reserve seat
}



int check(char arr[9][7],string s){ // wejdan
//if user input is not in the range 1A to 9F
if(s[0]>'9' || s[0]<'1' || s[1]>'F' || s[1]<'A'){ 
cout<<"invalid seat no\n"; //invalid sit no
return 0;
}

int row=-1,col=-1;
//find the row no of the user sit
for(int i=0;i<9;i++){
if(arr[i][0]==s[0])
row=i;
}
 //find the column no of user sit
for(int j=0;j<7;j++){
if(arr[row][j]==s[1])
col=j;
}

//check whether sit is already occupied or not.
if(col==-1){
cout<<"Seat is already occupied\n";
return 0;
}
else{
//if it's a valid sit & not occupied, 
//process the requested & update the sit as occupied 
update(arr,row,col);   
}
return 1;
} 



void airline(char arr[9][7]){ // wejdan

	string s;
	// continue if not interrepted by user or 
	//there is valid sit in unoccupied state
	 	
	 	s=getData(); //get user input

		//process the request & check according to
		if(check(arr,s)) 
			display(arr);
	
}



void seats(){ // wejdan & wajood
	
	
	//2-D array for storing sit number
	char arr[9][7]; 
	for(int i=0;i<9;i++){
		//forst column is row number
		arr[i][0]=i+1+'0';
		for(int j=1;j<7;j++){
			//to represent sit number A,B,C,D respectively
			arr[i][j]='A'+j-1; 
		}
	}
	cout << "\n_______________________________________________";
	cout << "\n           Seat Class" ;
	cout << "\n_______________________________________________";
	cout<<"\n1-Buisness class: 1500SR  \n2-Economy class: 500SR";
	cout << "\n_______________________________________________";
	cout<<"\nchoose (1) for Buisness class, or (2) for Economy class:";
	cin>>seat_choice;
	
	if (seat_choice==1){
		bcount++; // global count for buisness
	    buisness_seats_display();
	    airline(arr); //airline function
	}
	else if(seat_choice==2){
		ecount ++ ; // global count for Economy
		economy_seats_display();
		airline(arr); //airline function
	}
	else 
	cout << "\nInvalid output!! Please choose (1/2)" ;
}


// void function to caluclate cost
void cost() { // wajood // pointer wejdan
    int b = 1500;
    int e = 500;
	int *p;
	int cost , VAT;
	if (bcount > 0){
	 cost = bcount * b ; // cost of a buissnes seat
	 cout << "\n Your total before VAT15% :" << cost <<" SR." ;
	 
	}
	
	if (ecount > 0) {
		
	 cost = ecount * e ; // cost of a Economy seat
	 cout << "\nYour total before VAT15% :" << e <<" SR." ;
	 
	}
	
	VAT = cost * 0.15 ;
	p = & cost ;
   cout << "\n\nYour total is after VAT15% applied :" << *p + VAT << " SR. \n\n";
	
}


// void function to display the Payment Options
void payment_display(){ // wajood
	
	cout << "\n_______________________________";
	cout << "\n        Payment Options" ;
	cout << "\n_______________________________";
	cout << "\n1- Credit Card. \n2- Debut Card." ;
	cout << "\n_______________________________";
	cout << "\nEnter your choice: (1/2)" ;
} 




// struct function to choose the payment method
pay payment(pay c) { //wajood
	
	
	
	payment_display() ; // return the void function to display the Payment Options
	cin >> c.choice ;
	
	switch (c.choice) {
		
		case 1 : // credit card
			
	        cout << "\n_______________________________";
	        cout << "\n         Credit Card" ;
	        cout << "\n_______________________________";
           	cout << "\nCard Number: " ;
           	cin >> c.cardnum ;
         	cout << "\nExpiry Date: " ;
         	cin >> c.Expd ;
           	cout << "\nCVV: ";
           	cin >> c.cvv ;
           	cout << "\n_______________________________";
			cout << "\nTransaction Successful!";
		break ; 
		
			
		case 2 : // Debut card
		
		    cout << "\n_______________________________";
	        cout << "\n        Debut Card" ;
	        cout << "\n_______________________________";
           	cout << "\nCard Number: " ;
           	cin >> c.cardnum ;
         	cout << "\nExpiry Date: " ;
         	cin >> c.Expd ;
         	cout << "\nPassword: " ;
         	cin >> c.pass ;
           	cout << "\nCVV: " ;
           	cin >> c.cvv ;
           	cout << "\n_______________________________";
			cout << "\nTransaction Successful!";
		break ;
		
		default : // invalid input
			
			cout << "\n Invalid Input !! Please choose (1/2)" ;
		
			
	}
	
	return c ;
}




// void function to display ticket (dom)
void display_ticketdom(){ //wajood
	cout << "\n      Ticket" ;
	cout << "\n________________________________";
	cout << "\n Flight no.: " << *Flight_no ;
	cout << "\n Flight: " << flight_dom ;
	cout << "\n Date: " << date ;
	cout << "\n Departure Time:" << dom_departure ;
	cout << "\n Arrival Time: " << dom_arrive ;
	cout << "\n Name: " << fname << " " << lname ;
	cout << "\n Seat:" << p ;
	cout << "\n meal: " << meal << " Meal";
	cout << "\n________________________________";
	
}

// void function to display ticket (inter)
void display_ticketinter(){ // wajood
	
	cout << "\n      Ticket" ;
	cout << "\n________________________________" ;
	cout << "\n Flight no.: " << *Flight_no ;
	cout << "\n Flight: " << flight_int ;
	cout << "\n Date: " << date ;
	cout << "\n Departure Time: " << int_departure ;
	cout << "\n Arrival Time: " << int_arrive ;
	cout << "\n Name: " << fname << " " << lname ;
    cout << "\n Seat:" << p ;
	cout << "\n Meal: " << meal << " Meal";
	cout << "\n________________________________";
}





void delete_flight() { // wajood

	int  d ;
	bool found = false ;
	
	cout << "\n Enter the Flight no. of the flight you want to Cancel:";
	cin >> d ;
	
	for (int i = 0 ; i <= numberofFlight ; i++)
	{
		// to check if the flight no. found
		
		if ( Flight_no[i]==d) 	{  // sequential search
		     
        // if flight found then delete
			for (int j = i ; j < numberofFlight  ; j++) // delete
			
			{
				Flight_no[j]=Flight_no[j+1] ;
				numberofFlight--;
				cout << "\nYour Flight Canceled Successfully!!" ;
				found = true ;
			    break ;
			}
			
			
			
		}
		
		else if (!found) // flight not found
		cout << "\nFlight not found!!" ;
		
	}
}










int main(){ // Wajood & Wejdan
	
	data x ; // variable of type data (struct)
	pay c ; // variable of type pay (struct)
	int choice , choice1 ;
	ofstream appFile;
	

	
	do{
		
		cout << "\n ____________________________________________" ;
		cout << "\n  Welcome to our Airline Reservation System!     " ;
		cout << "\n ____________________________________________" ;
		cout << "\n 1- Book a flight." ;
		cout << "\n 2- Cancel your booked flight." ;
		cout << "\n 3- Exit.";
		cout << "\n ____________________________________________" ;
		cout << "\n Enter your choice: " ;
		cin >> choice ;
		
		switch (choice) {
			
		case 1 : // book a flight		
		cout << "\n             Book a flight              " ;
		cout << "\n _______________________________________" ;
		cout << "\n 1- Domestic Flight . \n 2- International Flight. " ;
		cout << "\n _______________________________________" ;
		cout << "\n Enter your choice: " ;
		cin >> choice1 ;
		
		  switch (choice1) {
		  	system("CLS");
		  	case 1 : // Domestic Flight
		  	Flightn0();
		  	dom::details(x) ; // namespace
	        info_dom() ;
	        info() ;
	        appFile.open("informations.txt",ios::app); 
		    appFile<<"\nname: "<<fname<<" "<<lname;
		    appFile<<"\nAge: "<<age;
		    appFile<<"\nID: "<<id;
	        appFile.close();
	        meal_menu() ;
	        seats();
	        cost() ;
	        payment(c);
	        display_ticketdom();
		  	break ;
		  	
		  	system("CLS");
		  	case 2 : // International Flight
		  	Flightn0() ;
		  	inter::details(x) ; // namespace
	        info_int() ;
	        info() ;
	        appFile.open("informations.txt",ios::app);
		    appFile<<"\nname: "<<fname<<" "<<lname;
		    appFile<<"\nAge: "<<age;
		    appFile<<"\nID: "<<id;
	        appFile.close();  
	        meal_menu() ;
	        seats();
	        cost() ;
	        payment(c);
	        display_ticketinter() ;
		  	break ;
		  	
		  	default :
		  	cout << "\n Invalid input!! Please choose (1/2)" ;
		  	break;
		  }
		
		return main() ; // to return to the main menu
		
	    case 2 : // delete flight
	    delete_flight() ;
		break ;
	
		default :
		cout << "\n Invalid input!! Please choose (1/2/3)" ;
		}
		
		
		
		
	}while (choice != 3) ; // Exit the program
	
	
	cout << "\n Thank You For Choosing Our Airline Reservation System :)" ;
	
	
	
	return 0 ;
	
	
}	
