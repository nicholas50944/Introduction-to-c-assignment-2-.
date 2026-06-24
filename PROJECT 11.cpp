Algorithm

1. Start.
2. Declare a variable password.
3. Ask the user to enter the password.
4. While the password is not equal to 2080:
    * Display “Incorrect password. Try again.”
    * Ask the user to enter the password again.
5. When the password equals 2080:
    * Display “Access granted to control panel.”
6. Stop.

Pseudocode
BEGIN

DISPLAY "Enter Password: "
INPUT password

WHILE password <> 2080

    DISPLAY "Incorrect Password. Try Again."
    DISPLAY "Enter Password: "
    INPUT password

END WHILE

DISPLAY "Access granted to control panel."

END



Flowchart 

 +---------+
 ¦  Start  ¦
 +---------+
      ¦
      ?
+-----------------+
¦ Input Password  ¦
+-----------------+
       ¦
       ?
+-----------------+
¦ Password=2080 ? ¦
+-----------------+
    ¦Yes     ¦No
    ?        ?
+-----------------+  +------------------+
¦ Access Granted  ¦  ¦ Incorrect        ¦
¦ to Control      ¦  ¦ Password         ¦
¦ Panel           ¦  ¦ Try Again        ¦
+-----------------+  +------------------+
       ¦                      ¦
       ?                      ?
   +------+          +----------------+
   ¦ Stop ¦          ¦ Input Password ¦
   +------+          +----------------+
                             ¦
                             +--? Back to
                                 Password=2080?
                                 
                                 
                                 
                                 C++ program 

#include <iostream>
using namespace std;

int main()
{
    int password;

    cout << "Enter Password: ";
    cin >> password;

    while(password != 2080)
    {
        cout << "Incorrect Password. Try Again." << endl;

        cout << "Enter Password: ";
        cin >> password;
    }

    cout << "\nAccess granted to control panel." << endl;

    return 0;
}
