// C++ Libraries used for this program
#include <iostream>
#include <iomanip>
// Namespace which is used in this program to avoid typing std::
using namespace std;
// Constants used in this calculator which may be changed to fit your schools needs
const double SEM = 0.425;
const double FIN = 0.15;

int main()
{   
    // Variables used in this program which can be altered for easier readability and customization
    double Q1 = 0;
    double Q1F = 0;
    double Q2 = 0;
    double Q2F = 0;
    double Final = 0;
    double Grade = 0;

    // Prompting the end user for their final grade for each quarter and calculating their final grade with out the final exam
    cout << fixed << setprecision(2);
    cout << "What was your final grade for Quarter 1? " << endl;
    cin >> Q1;
    cout << "What was your final grade for Quarter 2? " << endl;
    cin >> Q2;
    
    cout << fixed << setprecision(2);
    Q1F = Q1 * SEM;
    Q2F = Q2 * SEM;
    Grade = Q1F + Q2F;
    // Outputting the users grade with the percentage changes and their grade without the final exam
    cout << "Quarter 1 = " << Q1F << endl;
    cout << "Quarter 2 = " << Q2F << endl;
    cout << "This is what your grade is as of currently before taking the final exam: " << Grade << endl << endl;

    // Initializing a new variable for the letter grade the users wants 
    int Letter = 0;
    // Prompting the user for what letter grade they want with just the bare minimum needed
    cout << "What Letter Grade do you want to end with this semester (A: 90 B: 80 C: 70 D: 60 F:50): ";
    cin >> Letter;
    cout << endl; 
    // Outputting the letter grade as a percent so changing the fixed precision to 0
    cout << fixed << setprecision(0);
    double Exam = 0;
    // Calculating the final grade needed on the exam and outputting it
    Exam = (Letter - Grade) / FIN;
    Exam * 100;

    cout << "The grade you need on your exam is " << "(" << Exam << "%)" << endl;

    // Returning 0 to end the program
    return 0;
}