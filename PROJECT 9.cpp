Algorithm

1. Start.
2. Declare a variable current.
3. Ask the user to enter a current reading.
4. While current is less than or equal to 10 A:
    * Display the current reading as safe.
    * Ask for another current reading.
5. If current becomes greater than 10 A:
    * Display “Overcurrent detected.”
    * Display “Monitoring stopped.”
6. Stop.


Pseudocode

BEGIN

DISPLAY "Enter current reading: "
INPUT current

WHILE current <= 10

    DISPLAY "Safe Current Reading = ", current, " A"

    DISPLAY "Enter current reading: "
    INPUT current

END WHILE

DISPLAY "Overcurrent detected."
DISPLAY "Monitoring stopped."

END


Flowchart

 +---------+
 ¦  Start  ¦
 +---------+
      ¦
      ?
+-----------------+
¦ Input Current   ¦
+-----------------+
       ¦
       ?
+-----------------+
¦ Current = 10 ?  ¦
+-----------------+
    ¦Yes     ¦No
    ?        ?
+-------------------+
¦ Display Safe      ¦
¦ Current Reading   ¦
+-------------------+
       ¦
       ?
+-----------------+
¦ Input Current   ¦
+-----------------+
       ¦
       +------? Back to
                Current = 10 ?

                No
                ?
      +--------------------+
      ¦ Overcurrent        ¦
      ¦ detected.          ¦
      ¦ Monitoring stopped ¦
      +--------------------+
                ?
            +------+
            ¦ Stop ¦
            +------+
            
            
            
            C++ Program

#include <iostream>
using namespace std;

int main()
{
    double current;

    cout << "Enter current reading (A): ";
    cin >> current;

    while(current <= 10)
    {
        cout << "Safe Current Reading = "
             << current << " A" << endl;

        cout << "Enter current reading (A): ";
        cin >> current;
    }

    cout << "\nOvercurrent detected." << endl;
    cout << "Monitoring stopped." << endl;

    return 0;
}
