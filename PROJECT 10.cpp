Algorithm

1. Start.
2. Declare a variable voltage.
3. Ask the user to enter a battery voltage reading.
4. While voltage is 12 V or above:
    * Display the voltage reading.
    * Ask for another voltage reading.
5. If voltage becomes less than 12 V:
    * Display “Battery voltage low.”
    * Display “Recharge required.”
6. Stop.

Pseudocode

BEGIN

DISPLAY "Enter battery voltage: "
INPUT voltage

WHILE voltage >= 12

    DISPLAY "Battery Voltage = ", voltage, " V"

    DISPLAY "Enter battery voltage: "
    INPUT voltage

END WHILE

DISPLAY "Battery voltage low."
DISPLAY "Recharge required."

END


Flowchart

 +---------+
 ¦  Start  ¦
 +---------+
      ¦
      ?
+-----------------+
¦ Input Voltage   ¦
+-----------------+
       ¦
       ?
+-----------------+
¦ Voltage = 12 ?  ¦
+-----------------+
    ¦Yes     ¦No
    ?        ?
+-------------------+
¦ Display Battery   ¦
¦ Voltage Reading   ¦
+-------------------+
       ¦
       ?
+-----------------+
¦ Input Voltage   ¦
+-----------------+
       ¦
       +------? Back to
                Voltage = 12 ?

                No
                ?
      +-------------------+
      ¦ Battery voltage   ¦
      ¦ low.              ¦
      ¦ Recharge required ¦
      +-------------------+
                ?
            +------+
            ¦ Stop ¦
            +------+
            
            
            
            C++ Program

 #include <iostream>
using namespace std;

int main()
{
    double voltage;

    cout << "Enter battery voltage (V): ";
    cin >> voltage;

    while(voltage >= 12)
    {
        cout << "Battery Voltage = "
             << voltage << " V" << endl;

        cout << "Enter battery voltage (V): ";
        cin >> voltage;
    }

    cout << "\nBattery voltage low." << endl;
    cout << "Recharge required." << endl;

    return 0;
}
