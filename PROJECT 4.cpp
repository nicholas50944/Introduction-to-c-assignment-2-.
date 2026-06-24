 QUESTION 4: Electrical Component Menu

Algorithm
	1.	Start
	2.	Display menu (1–5)
	3.	Accept user choice
	4.	Use switch to display component description
	5.	Display “Invalid selection” for out-of-range input
	6.	Stop

 Pseudocode
BEGIN
  DISPLAY "1. Resistor"
  DISPLAY "2. Capacitor"
  DISPLAY "3. Diode"
  DISPLAY "4. Transistor"
  DISPLAY "5. LED"
  INPUT choice
  SWITCH choice:
    CASE 1: DISPLAY "Resistor: Used to limit current in a circuit."
    CASE 2: DISPLAY "Capacitor: Stores and releases electrical energy."
    CASE 3: DISPLAY "Diode: Allows current to flow in one direction only."
    CASE 4: DISPLAY "Transistor: Used to amplify or switch signals."
    CASE 5: DISPLAY "LED: Emits light when current flows through it."
    DEFAULT: DISPLAY "Invalid selection."
END


C++ Programme
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "=== Electrical Component Menu ===" << endl;
    cout << "1. Resistor" << endl;
    cout << "2. Capacitor" << endl;
    cout << "3. Diode" << endl;
    cout << "4. Transistor" << endl;
    cout << "5. LED" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Resistor: Used to limit current in a circuit." << endl; break;
        case 2: cout << "Capacitor: Stores and releases electrical energy." << endl; break;
        case 3: cout << "Diode: Allows current to flow in one direction only." << endl; break;
        case 4: cout << "Transistor: Used to amplify or switch signals." << endl; break;
        case 5: cout << "LED: Emits light when current flows through it." << endl; break;
        default: cout << "Invalid selection." << endl;
    }
    return 0;
}
