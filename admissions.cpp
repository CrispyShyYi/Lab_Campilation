/**
 * admissions.cpp
 *
 * 
 *Jialiang Wu (Alfred) & Daniel Cha
 * 
 * alfredwu@umich.edu
 * dchaa@umich.edu
 * 
 *
 * EECS 183: Lab 2
 *
 * First, ask a user to put in their data. 
 * Then, resign value for GPA, SAT score, demonstrated interest, and curriculum strength. 
 * After, calculate the score.
 * Last, print expected chance for admission.
 */
 
#include <iostream>
using namespace std;


/* TODO: WHEN COMPLETING THE REFLCTION FORM!
 * change the values for these variables
 * NOTE: in order for the program to work the values must all add up to a
 * number <= 1, otherwise you will get values greater than 100
*/
const double GPA_WEIGHT = 0.4;
const double SAT_WEIGHT = 0.3;
const double DEM_INTREST_WEIGHT = 0.1;
const double CURRICULUM_STRENGTH_WEIGHT = 0.2;



int main() {
    double GPA;
    double SAT_score;
    double DI;
    double CS;
    double totalScore;
    double expScore;
    // Task 1 Hello World
    // will be deleted by students when completing Task 2
    
    // Task 2 College Admissions
    // TO-DO: Print "College Admissions Calculator"
    cout << "College Admissions Calculator" << endl;

  
    // TO-DO: Ask user to enter data. Store in variables named: 
    // GPA, SAT, and DEM_INTEREST
    cout << "Please enter your GPA out of 5.0: ";
    cin >> GPA;
    cout << endl;

    cout << "Please enter your SAT score out of 1600:";
    cin >> SAT_score;
    cout << endl;


    cout << "Please enter your demonstrated interest out of 10: ";
    cin >> DI;
    cout << endl;

    cout << "Please enter your high school curriculum strength out of 10: ";
    cin >> CS;
    cout << endl;

    /* Formula: gpa_weight * (GPA * 2) 
                + sat_weight * (SAT / 160) 
                + dem_interested_weight * DEM_INTEREST 
                + curriculum_strength_weight * CURRICULUM_STRENGTH 
    */

    // TO-DO: Create a variable score that equals the expected chance
    // of admission. Use the formula given in the comment above.
    totalScore = GPA_WEIGHT * (GPA * 2)
        + SAT_WEIGHT * (SAT_score / 160)
        + DEM_INTREST_WEIGHT * DI
        + CURRICULUM_STRENGTH_WEIGHT * CS;

    // TO-DO: Multiply the score by 10 
    expScore = totalScore * 10;
    cout << endl;
    // TO-DO: Announce the score to the user
    cout << "Expected chance of admission: " << static_cast<int>(expScore) << "/100" << endl;

    return 0;
}
