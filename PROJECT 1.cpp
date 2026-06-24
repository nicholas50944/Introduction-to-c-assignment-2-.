QUESTION 1: Voltage Level Classifier
1) Algorithm
Start

Declare a variable voltage of type float or double.

Prompt the user to enter a voltage reading.

Read the voltage value from the user.

Check the voltage using if...else if...else:

If voltage is less than 0, display Invalid voltage reading.

Else if voltage is between 0 and 50, display Low voltage.

Else if voltage is between 51 and 240, display Normal voltage.

Else if voltage is between 241 and 415, display High voltage.

Else display Dangerous voltage.

Stop.


2) Pseudocode
BEGIN
    DECLARE voltage AS REAL

    OUTPUT "Enter voltage reading: "
    INPUT voltage

    IF voltage < 0 THEN
        OUTPUT "Invalid voltage reading"
    ELSE IF voltage >= 0 AND voltage <= 50 THEN
        OUTPUT "Low voltage"
    ELSE IF voltage >= 51 AND voltage <= 240 THEN
        OUTPUT "Normal voltage"
    ELSE IF voltage >= 241 AND voltage <= 415 THEN
        OUTPUT "High voltage"
    ELSE
        OUTPUT "Dangerous voltage"
    END IF
END
3) Flowchart
 +----------+
 ¦  Start   ¦
 +----------+
      ¦
      v
+----------------------+
¦ Input voltage reading¦
+----------------------+
          ¦
          v
   +----------------+
   ¦ voltage < 0 ?  ¦
   +----------------+
      Yes ¦     No
          v
+-------------------------+
¦ Invalid voltage reading ¦
+-------------------------+
           ¦
           v
         +-----+
         ¦ End ¦
         +-----+

If No:
          v
 +----------------------+
 ¦ voltage >=0 && <=50? ¦
 +----------------------+
    Yes ¦        No
        v
+----------------+
¦  Low voltage   ¦
+----------------+
       ¦
       v
     +-----+
     ¦ End ¦
     +-----+

If No:
          v
+------------------------+
¦ voltage >=51 && <=240? ¦
+------------------------+
    Yes ¦        No
        v
+----------------+
¦ Normal voltage ¦
+----------------+
       ¦
       v
     +-----+
     ¦ End ¦
     +-----+

If No:
          v
+------------------------+
¦ voltage >=241 && <=415?¦
+------------------------+
    Yes ¦        No
        v
+----------------+   +-------------------+
¦  High voltage  ¦   ¦ Dangerous voltage ¦
+----------------+   +-------------------+
       ¦                       ¦
       v                       v
     +-----+                +-----+
     ¦ End ¦                ¦ End ¦
     +-----+                +-----+4)    
	 
	 
 C++ Programme
#include <iostream>
using namespace std;

int main() {
    double voltage;

    // Accept voltage input
    cout << "Enter voltage reading (V): ";
    cin >> voltage;

    // Classify voltage
    if (voltage < 0) {
        cout << "Invalid voltage reading" << endl;
    }
    else if (voltage >= 0 && voltage <= 50) {
        cout << "Voltage = " << voltage << " V --> Low voltage" << endl;
    }
    else if (voltage >= 51 && voltage <= 240) {
        cout << "Voltage = " << voltage << " V --> Normal voltage" << endl;
    }
    else if (voltage >= 241 && voltage <= 415) {
        cout << "Voltage = " << voltage << " V --> High voltage" << endl;
    }
    else {
        cout << "Voltage = " << voltage << " V --> Dangerous voltage" << endl;
    }

    return 0;
}

