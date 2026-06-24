Algorithm

1. Start.
2. Declare a variable voltage.
3. Use a for loop from 1 to 10.
4. Input a battery voltage reading.
5. If voltage is below 10.5 V:
    * Display “Low battery detected.”
    * Display “Test stopped.”
    * Use break to terminate the loop.
6. Otherwise:
    * Display “Battery voltage normal.”
7. Continue until 10 readings are entered or a low battery is detected.
8. Stop.


Pseudocode 
BEGIN

FOR counter = 1 TO 10

    DISPLAY "Enter Battery Voltage: "
    INPUT voltage

    IF voltage < 10.5 THEN
        DISPLAY "Low battery detected."
        DISPLAY "Test stopped."
        BREAK
    ELSE
        DISPLAY "Battery voltage normal."
    ENDIF

END FOR

END


Flowchart 

 +---------+
 ¦ Start   ¦
 +---------+
      ¦
      ?
 +----------------+
 ¦ Counter = 10 ? ¦
 +----------------+
     ¦Yes     ¦No
     ?        ?
+---------------+  +------+
¦ Input Voltage ¦  ¦ Stop ¦
+---------------+  +------+
       ¦
       ?
+----------------+
¦ Voltage <10.5? ¦
+----------------+
    ¦Yes     ¦No
    ?        ?
+---------------+  +------------------+
¦ Low Battery   ¦  ¦ Battery Voltage  ¦
¦ Test Stopped  ¦  ¦ Normal           ¦
+---------------+  +------------------+
       ¦                    ¦
       ?                    ?
   +------+          Back to Loop
   ¦ Stop ¦
   +------+
   
   
   
   C++ program 

#include <iostream>
using namespace std;

int main()
{
    double voltage;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter Battery Voltage Reading "
             << i << ": ";
        cin >> voltage;

        if(voltage < 10.5)
        {
            cout << "Low battery detected." << endl;
            cout << "Test stopped." << endl;
            break;
        }
        else
        {
            cout << "Battery voltage normal." << endl;
        }
    }

    return 0;
}
