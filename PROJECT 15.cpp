Algorithm

1. Start.
2. Declare variables:
    * power
    * totalLoad = 0
3. Use a while loop while totalLoad = 3000.
4. Input appliance power rating.
5. Add power to totalLoad.
6. If totalLoad > 3000:
    * Display warning message.
    * Stop adding more inputs.
7. Display final total load.
8. Stop.

Pseudocode 

BEGIN

SET totalLoad = 0

WHILE totalLoad <= 3000

    DISPLAY "Enter appliance power (W): "
    INPUT power

    totalLoad = totalLoad + power

    IF totalLoad > 3000 THEN
        DISPLAY "Load limit exceeded. Do not add more appliances."
        BREAK
    ENDIF

END WHILE

DISPLAY "Final Total Load = ", totalLoad, " W"

END


Flowchart 

 +---------+
 ¦ Start   ¦
 +---------+
      ¦
      ?
 +------------------+
 ¦ totalLoad = 0    ¦
 +------------------+
        ¦
        ?
 +------------------+
 ¦ totalLoad = 3000 ¦
 +------------------+
     ¦Yes     ¦No
     ?        ?
+---------------+   +--------------+
¦ Input Power   ¦   ¦ Display Final¦
+---------------+   ¦ Load         ¦
       ¦            +--------------+
       ?                   ¦
+------------------+       ?
¦ totalLoad += P   ¦    +------+
+------------------+    ¦ Stop ¦
       ¦                +------+
       ?
+------------------+
¦ totalLoad > 3000?¦
+------------------+
    ¦Yes     ¦No
    ?        ¦
+------------------+
¦ Load limit       ¦
¦ exceeded         ¦
+------------------+
       ¦
       ?
     BREAK
     
     
     C++ program 

#include <iostream>
using namespace std;

int main()
{
    double power;
    double totalLoad = 0;

    while(totalLoad <= 3000)
    {
        cout << "Enter appliance power (W): ";
        cin >> power;

        totalLoad += power;

        if(totalLoad > 3000)
        {
            cout << "\nLoad limit exceeded. Do not add more appliances." << endl;
            break;
        }
    }

    cout << "\nFinal Total Load = " << totalLoad << " W" << endl;

    return 0;
}
