#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::setprecision;
using std::fixed;

int main()
{
    // pre filled test scores from prof git
    const int MAX_STUDENTS = 30;
    int scores[MAX_STUDENTS] = {
        78, 92, 65, 88, 45, 100, 72, 81, 59, 96,
        84, 67, 91, 53, 77, 89, 62, 98, 74, 85,
        48, 93, 70, 82, 66, 95, 55, 87, 79, 64
    };
    const int numStudents = 30;
    //Number of students + the sum for average
    cout << "Number of students: " << numStudents << endl;
    int sum = 0;
    for (int i = 0; i < numStudents; i++) {
        sum = sum + scores[i];
    }
    
    //Average
    
    double avg;
    avg = (float)sum / numStudents;
    cout << " The average score from the array of 30 students is:" << avg << endl;
    
    //Highest number
    
    int highestGrade = scores[0];
    for (int i = 1; i < numStudents; i++) {
        if (scores[i] > highestGrade) {
            highestGrade = scores[i];
        }
    }
    cout << "Highest grade: " << highestGrade << endl;
    
    //lowest 

    int lowestGrade = scores[0];
    for (int i = 1; i < numStudents; i++) {
        if (scores[i] < lowestGrade) {
            lowestGrade = scores[i];
        }
    }
    cout << "Lowest grade: " << lowestGrade << endl;

    //passing studetns

    int studentpass = 0;

    for (int i = 0; i < numStudents; i++) {
        if (scores[i] >= 60) {
            studentpass++;
        }
    }
    cout << "Number of students who passed: " << studentpass << endl;
    
    // A students

    int astudents = 0;

    for (int i = 0; i < numStudents; i++) {
        if (scores[i] >= 90) {
            astudents++;
        }
    }
    cout << "Number of students who passed with an A: " << astudents << endl;

    //og order
    cout << "Score in original order:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << scores[i] << " " ;

    }
    //reverse order
    cout << "\nScore in reverse order:" << endl;
    for (int i = numStudents-1; i > 0; i--) {
        cout << scores[i] << " ";

    }
    
    
    return 0;
}