 QUESTION 3: Scholarship Eligibility for Engineering Student

Algorithm
	1.	Start
	2.	Declare a float variable gpa
	3.	Prompt user to enter GPA
	4.	Read gpa
	5.	If gpa >= 3.5 ? display “Eligible for engineering scholarship”
	6.	Else ? display “Not eligible for engineering scholarship”
	7.	End
	
	
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
[1:59 AM, 6/24/2026] Nicolas: Flowchart

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
    float gpa;

    cout << "Enter your GPA: ";
    cin >> gpa;

    if (gpa >= 3.5) {
        cout << "Eligible for engineering scholarship" << endl;
    } else {
        cout << "Not eligible for engineering scholarship" << endl;
    }

    return 0;

