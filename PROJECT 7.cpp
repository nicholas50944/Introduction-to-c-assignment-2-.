QUESTION 7: Average Voltage from Sensor Readings

1. Algorithm

1. Start.
2. Set totalVoltage = 0.
3. Use a for loop from 1 to 10.
4. Input a voltage reading.
5. Add the reading to totalVoltage.
6. Repeat until 10 readings have been entered.
7. Calculate the average voltage using:
    Average Voltage = Total Voltage / 10
8. Display the average voltage in Volts (V).
9. Stop.


Pseudocode
BEGIN

SET totalVoltage = 0

FOR counter = 1 TO 10
    DISPLAY "Enter Voltage Reading ", counter, ": "
    INPUT voltage
    totalVoltage = totalVoltage + voltage
END FOR

averageVoltage = totalVoltage / 10

DISPLAY "Average Voltage = ", averageVoltage, " V"

END

Flowchart
 +---------+
 ¦  Start  ¦
 +---------+
      ¦
      ?
 +-----------------+
 ¦ totalVoltage=0  ¦
 ¦ counter = 1     ¦
 +-----------------+
      ¦
      ?
 +----------------+
 ¦ counter = 10 ? ¦
 +----------------+
     ¦ Yes    ¦ No
     ?        ?
+---------------+   +--------------------+
¦ Input Voltage ¦   ¦ Average Voltage =  ¦
+---------------+   ¦ totalVoltage / 10  ¦
       ¦            +--------------------+
       ?                      ¦
+-------------------+         ?
¦ totalVoltage =    ¦   +----------------+
¦ totalVoltage + V  ¦   ¦ Display Average¦
+-------------------+   ¦ Voltage (V)    ¦
       ¦                +----------------+
       ?                       ¦
+----------------+             ?
¦ counter =      ¦         +--------+
¦ counter + 1    ¦         ¦ Stop   ¦
+----------------+         +--------+
       ¦
       +--------------? Back to
                        counter = 10 ?
                        
                        
                        C++ Program

#include <iostream>
using namespace std;

int main()
{
    double voltage, totalVoltage = 0, averageVoltage;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter Voltage Reading " << i << ": ";
        cin >> voltage;

        totalVoltage += voltage;
    }

    averageVoltage = totalVoltage / 10;

    cout << "\nAverage Voltage = "
         << averageVoltage
         << " V" << endl;

    return 0;
}
