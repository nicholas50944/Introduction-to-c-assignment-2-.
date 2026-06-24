QUESTION 6: Series Resistor Calculator

1. Algorithm

1. Start.
2. Set totalResistance = 0.
3. Use a for loop from 1 to 5.
4. Ask the user to enter the value of each resistor.
5. Add the resistor value to totalResistance.
6. Repeat until all five resistor values are entered.
7. Display the total resistance in Ohms.
8. Stop.

Pseudocode

BEGIN

SET totalResistance = 0

FOR counter = 1 TO 5
    DISPLAY "Enter resistor ", counter, ": "
    INPUT resistor
    totalResistance = totalResistance + resistor
END FOR

DISPLAY "Total Resistance = ", totalResistance, " Ohms"

END

Flowchart
 +---------+
 ¦  Start  ¦
 +---------+
      ¦
      ?
 +---------------------+
 ¦ totalResistance = 0 ¦
 ¦ counter = 1         ¦
 +---------------------+
      ¦
      ?
 +-----------------+
 ¦ counter = 5 ?   ¦
 +-----------------+
     ¦Yes      ¦No
     ?         ?
+-----------+  +---------------------+
¦ Input R   ¦  ¦ Display Total       ¦
+-----------+  ¦ Resistance (Ohms)   ¦
     ¦         +---------------------+
     ?                   ¦
+-------------------+    ?
¦ totalResistance = ¦ +-------+
¦ totalResistance+R ¦ ¦ Stop  ¦
+-------------------+ +-------+
     ¦
     ?
+---------------+
¦ counter =     ¦
¦ counter + 1   ¦
+---------------+
     ¦
     +--------------? Back to
                      counter = 5?
 
 
 C++ Program
#include <iostream>
using namespace std;

int main()
{
    double resistor, totalResistance = 0;

    for(int i = 1; i <= 5; i++)
    {
        cout << "Enter value of Resistor " << i << ": ";
        cin >> resistor;

        totalResistance += resistor;
    }

    cout << "\nTotal Resistance = "
         << totalResistance
         << " Ohms" << endl;

    return 0;
}




