QUESTION 5: Power Rating Menu

Algorithm

	1.	Start
	2.	Display menu (1–3)
	3.	Accept choice
	4.	Accept required inputs per option
	5.	Calculate and display result with units
	6.	Stop
	
	
	Pseudocode

BEGIN
  DISPLAY menu options
  INPUT choice
  SWITCH choice:
    CASE 1:
      INPUT voltage, current
      power = voltage * current
      DISPLAY power in Watts
    CASE 2:
      INPUT voltage, current
      resistance = voltage / current
      DISPLAY resistance in Ohms
    CASE 3:
      INPUT power, time
      energy = power * time
      DISPLAY energy in Joules
    DEFAULT: DISPLAY "Invalid choice."
EN

 START
   |
   v
Display Menu
1. DC Power
2. Resistance
3. Energy
   |
   v
Input choice
   |
   v
+-------------------+
|   switch(choice)  |
+-------------------+
   |        |        |
   |        |        |
   v        v        v
Case 1    Case 2    Case 3
   |         |         |
Input V,I  Input V,I  Input P,T
   |         |         |
P = V*I    R = V/I   E = P*T
   |         |         |
Display P  Display R  Display E
   \         |        /
    \        |       /
     \       |      /
      v      v     v
      End / Stop

If invalid choice:
Display "Invalid choice"
        |
        v
       STOP

C++ Programme
#include <iostream>
using namespace std;

int main() {
    int choice;
    double voltage, current, power, resistance, energy, time;

    cout << "=== Power Rating Menu ===" << endl;
    cout << "1. Calculate DC Power" << endl;
    cout << "2. Calculate Resistance (Ohm's Law)" << endl;
    cout << "3. Calculate Energy Consumption" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter Voltage (V): "; cin >> voltage;
            cout << "Enter Current (A): "; cin >> current;
            power = voltage * current;
            cout << "DC Power = " << power << " W" << endl;
            break;
        case 2:
            cout << "Enter Voltage (V): "; cin >> voltage;
            cout << "Enter Current (A): "; cin >> current;
            resistance = voltage / current;
            cout << "Resistance = " << resistance << " Ohms" << endl;
            break;
        case 3:
            cout << "Enter Power (W): "; cin >> power;
            cout << "Enter Time (s): "; cin >> time;
            energy = power * time;
            cout << "Energy = " << energy << " J" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }
    return 0;
}
