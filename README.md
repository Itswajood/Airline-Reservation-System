Airline Reservation System
Project Overview
The Airline Reservation System is a C++ console-based application designed to facilitate flight bookings, seat selections, meal preferences, and payments for both domestic and international flights. The system provides an interactive interface for users to book flights, select seating classes, process payments, and generate tickets. Additionally, users can cancel their booked flights if needed.

Features
1. Flight Booking
Users can choose between domestic and international flights.
The system displays available flights for selected routes along with departure and arrival times.
Users enter their personal details (name, age, ID) for ticket registration.
2. Seat Selection
The system allows users to select seats from Business Class or Economy Class.
A graphical representation of available seats is displayed.
3. Meal Selection
Passengers can select meal preferences from options such as Beef Meal, Chicken Meal, Vegetarian Meal, or No Meal.
4. Payment Processing
The system supports credit card and debit card payments.
Securely collects payment details (card number, CVV, expiry date, password).
Displays a confirmation message upon successful payment.
5. Ticket Generation
After successful booking, the system generates and displays the flight ticket, including:
Flight Number
Airline Name
Departure & Arrival Times
Passenger Information
Seat & Meal Details
6. Flight Cancellation
Users can cancel their booked flight by entering the flight number.
The system searches for the flight and removes it from the booking list.
7. Cost Calculation
The system calculates ticket costs based on seat class and applies VAT (15%) to the total amount.
Technologies Used
C++ for application logic and user interaction.
File Handling (fstream) to store passenger details.
Structs & Namespaces for organizing booking and payment modules.
Arrays & Strings for managing flight schedules and seat allocation.
