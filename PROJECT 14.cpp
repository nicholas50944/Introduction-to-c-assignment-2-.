Algorithm

1. Start.
2. Declare variables:
    * temp
    * sum = 0
    * count = 0
3. Use a for loop from 1 to 10.
4. Input temperature reading.
5. If temperature < 0:
    * Display “Invalid reading”
    * Use continue to skip it.
6. Otherwise:
    * Add temperature to sum
    * Increase count
7. After loop:
    * Calculate average = sum / count
8. Display average temperature.
9. Stop.


Pseudocode 
BEGIN

SET sum = 0
SET count = 0

FOR i = 1 TO 10

    DISPLAY "Enter temperature: "
    INPUT temp

    IF temp < 0 THEN
        DISPLAY "Invalid reading"
        CONTINUE
    ENDIF

    sum = sum + temp
    count = count + 1

END FOR

average = sum / count

DISPLAY "Average Temperature = ", average

END

Flowchart 

 +---------+
 ¦ Start   ¦
 +---------+
      ¦
      ?
 +------------------+
 ¦ sum = 0, count=0 ¦
 +------------------+
        ¦
        ?
 +----------------+
 ¦ i = 10 ?       ¦
 +----------------+
     ¦Yes     ¦No
     ?        ?
+---------------+   +--------------------+
¦ Input temp    ¦   ¦ average = sum/count¦
+---------------+   +--------------------+
       ¦                      ¦
       ?                      ?
+---------------+        +--------+
¦ temp < 0 ?    ¦        ¦ Display¦
+---------------+        ¦ Result ¦
    ¦Yes   ¦No           +--------+
    ?      ?                 ¦
+--------------+     +--------------+
¦ Invalid      ¦     ¦ sum += temp  ¦
¦ continue     ¦     ¦ count++      ¦
+--------------+     +--------------+
       ¦                    ¦
       +--------------------+
                  ?
            Back to loop
            
            
            C++ program 

#include <iostream>
using namespace std;

int main()
{
    double temp, sum = 0, average;
    int count = 0;

    for(int i = 1; i <= 10; i++)
    {
        cout << "Enter temperature reading " << i << ": ";
        cin >> temp;

        if(temp < 0)
        {
            cout << "Invalid reading (ignored)" << endl;
            continue;
        }

        sum += temp;
        count++;
    }

    if(count > 0)
    {
        average = sum / count;
        cout << "\nAverage Temperature = " << average << " °C" << endl;
    }
    else
    {
        cout << "\nNo valid readings entered." << endl;
    }

    return 0;
}
