Algorithm

1. Start.
2. Declare variables for voltage, current, power, resistance, energy, time, and choice.
3. Display the menu.
4. Accept the user’s choice.
5. Use a switch statement:
    * Case 1: Calculate Power.
    * Case 2: Calculate Resistance.
    * Case 3: Calculate Energy.
    * Case 4: Exit.
    * Default: Display invalid option.
6. Repeat the menu using a do...while loop until the user selects option 4.
7. Stop.

Pseudocode 

BEGIN

DO

    DISPLAY MENU

    INPUT choice

    SWITCH(choice)

        CASE 1:
            INPUT voltage, current
            power = voltage * current
            DISPLAY power
            BREAK

        CASE 2:
            INPUT voltage, current
            resistance = voltage / current
            DISPLAY resistance
            BREAK

        CASE 3:
            INPUT power, time
            energy = power * time
            DISPLAY energy
            BREAK

        CASE 4:
            DISPLAY "Exiting Program"
            BREAK

        DEFAULT:
            DISPLAY "Invalid Choice"

    END SWITCH

WHILE choice != 4

END


Flowchart 

 +---------+
 ¦ Start   ¦
 +---------+
      ¦
      ?
 +--------------+
 ¦ Display Menu ¦
 +--------------+
        ¦
        ?
 +--------------+
 ¦ Input Choice ¦
 +--------------+
        ¦
        ?
 +--------------+
 ¦   Switch     ¦
 +--------------+
   ¦  ¦  ¦  ¦
   ?  ?  ?  ?
 Power Resistance Energy Exit
   ¦      ¦       ¦      ¦
   +--------------+      ¦
      ?       ?          ?
   Display Result    Stop
      ¦
      ?
 Back to Menu

C++ program 

#include <iostream>
using namespace std;

int main()
{
    int choice;
    double voltage, current, power, resistance, energy, time;

    do
    {
        cout << "\nELECTRICAL CALCULATOR";
        cout << "\n1. Calculate Power";
        cout << "\n2. Calculate Resistance";
        cout << "\n3. Calculate Energy";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter Voltage (V): ";
                cin >> voltage;

                cout << "Enter Current (A): ";
                cin >> current;

                power = voltage * current;

                cout << "Power = "
                     << power << " W" << endl;
                break;

            case 2:
                cout << "Enter Voltage (V): ";
                cin >> voltage;

                cout << "Enter Current (A): ";
                cin >> current;

                resistance = voltage / current;

                cout << "Resistance = "
                     << resistance << " Ohms" << endl;
                break;

            case 3:
                cout << "Enter Power (W): ";
                cin >> power;

                cout << "Enter Time (h): ";
                cin >> time;

                energy = power * time;

                cout << "Energy = "
                     << energy << " Wh" << endl;
                break;

            case 4:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}
