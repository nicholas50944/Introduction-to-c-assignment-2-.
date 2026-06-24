QUESTION 2: Current Overload Checker

Algorithm
	1.	Start
	2.	Declare float variables ratedCurrent and measuredCurrent
	3.	Prompt user to enter rated current of circuit breaker
	4.	Read ratedCurrent
	5.	Prompt user to enter measured current in circuit
	6.	Read measuredCurrent
	7.	If measuredCurrent > ratedCurrent ? display “Overload detected. Circuit breaker should trip.”
	8.	Else ? display “Current is within safe limit.”
	9.	End


Pseudocode 
BEGIN
  DECLARE gpa AS FLOAT

  OUTPUT "Enter your GPA: "
  INPUT gpa

  IF gpa >= 3.5 THEN
    OUTPUT "Eligible for engineering scholarship"
  ELSE
    OUTPUT "Not eligible for engineering scholarship"
  END IF
END




Flowchart

[START]
   |
[Input gpa]
   |
[gpa >= 3.5?]
   |            |
  YES           NO
   |            |
[Display       [Display "Not eligible
"Eligible for   for engineering
engineering     scholarship"]
scholarship"]
   |            |
        [END]







C++ Programme

#include <iostream>
using namespace std;

int main() {
    float ratedCurrent, measuredCurrent;

    cout << "Enter rated current of circuit breaker (A): ";
    cin >> ratedCurrent;

    cout << "Enter measured current in circuit (A): ";
    cin >> measuredCurrent;

    if (measuredCurrent > ratedCurrent) {
        cout << "Overload detected. Circuit breaker should trip." << endl;
    } else {
        cout << "Current is within safe limit." << endl;
    }

    return 0;

