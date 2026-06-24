Algorithm

1. Start.
2. Declare variables:
    * current
    * safeCount = 0
    * unsafeCount = 0
3. Use a for loop from 1 to 8.
4. Input a current reading.
5. If current = 10 A:
    * Increase safeCount.
6. Else:
    * Increase unsafeCount.
7. Repeat until 8 readings have been entered.
8. Display the number of safe readings.
9. Display the number of unsafe readings.
10. Stop.

Pseudocode
BEGIN

SET safeCount = 0
SET unsafeCount = 0

FOR counter = 1 TO 8
    DISPLAY "Enter current reading: "
    INPUT current

    IF current <= 10 THEN
        safeCount = safeCount + 1
    ELSE
        unsafeCount = unsafeCount + 1
    ENDIF
END FOR

DISPLAY "Safe Readings = ", safeCount
DISPLAY "Unsafe Readings = ", unsafeCount

END


Flowchart

 +-------+
 ¦ Start ¦
 +-------+
     ¦
     ?
+-----------------+
¦ safe=0          ¦
¦ unsafe=0        ¦
+-----------------+
       ¦
       ?
+----------------+
¦ counter = 8 ?  ¦
+----------------+
    ¦Yes     ¦No
    ?        ?
+---------------+   +----------------+
¦ Input Current ¦   ¦ Display Safe   ¦
+---------------+   ¦ Display Unsafe ¦
       ¦            +----------------+
       ?                    ?
+----------------+      +------+
¦ Current = 10 ? ¦      ¦ Stop ¦
+----------------+      +------+
    ¦Yes   ¦No
    ?      ?
+-------+ +---------+
¦safe++ ¦ ¦unsafe++ ¦
+-------+ +---------+
    ¦          ¦
    +----------+
         ?
   counter++
         ¦
         +--? Back to
             counter = 8?
             
             
             C++ Program

#include <iostream>
using namespace std;

int main()
{
    double current;
    int safeCount = 0, unsafeCount = 0;

    for(int i = 1; i <= 8; i++)
    {
        cout << "Enter Current Reading " << i << " (A): ";
        cin >> current;

        if(current <= 10)
        {
            safeCount++;
        }
        else
        {
            unsafeCount++;
        }
    }

    cout << "\nSafe Readings = " << safeCount << endl;
    cout << "Unsafe Readings = " << unsafeCount << endl;

    return 0;
}
