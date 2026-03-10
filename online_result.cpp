#include <iostream>
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n========== ONLINE RESULT PROCESSING SYSTEM ==========\n";
        cout << "1. Generate Result\n";
        cout << "2. Exit\n";
        cout << "Enter Choice: ";

        if(!(cin >> choice))
        {
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Invalid input! Please enter number.\n";
            continue;
        }

        if(choice == 1)
        {
            int m1,m2,m3,m4,m5;
            int total;
            float percentage;
            char grade;

            cout << "\nEnter Marks (Out of 100)\n";

            cout << "Maths: ";
            cin >> m1;

            cout << "Physics: ";
            cin >> m2;

            cout << "Chemistry: ";
            cin >> m3;

            cout << "English: ";
            cin >> m4;

            cout << "Computer: ";
            cin >> m5;

            // Arithmetic Logic
            total = m1 + m2 + m3 + m4 + m5;

            percentage = (total / 500.0) * 100;

            // Grade Logic
            if(percentage >= 90)
                grade = 'A';
            else if(percentage >= 75)
                grade = 'B';
            else if(percentage >= 60)
                grade = 'C';
            else if(percentage >= 50)
                grade = 'D';
            else if(percentage >= 40)
                grade = 'E';
            else
                grade = 'F';

            cout << "\n=========== MARKSHEET ===========\n";

            cout << "Maths      : " << m1 << endl;
            cout << "Physics    : " << m2 << endl;
            cout << "Chemistry  : " << m3 << endl;
            cout << "English    : " << m4 << endl;
            cout << "Computer   : " << m5 << endl;

            cout << "---------------------------------\n";

            cout << "Total Marks : " << total << " / 500\n";
            cout << "Percentage  : " << percentage << "%\n";
            cout << "Grade       : " << grade << endl;

            if(percentage >= 40)
                cout << "Result      : PASS\n";
            else
                cout << "Result      : FAIL\n";

            cout << "=================================\n";
        }

        else if(choice == 2)
        {
            cout << "Program Exiting...\n";
        }

        else
        {
            cout << "Invalid Choice! Try again.\n";
        }

    }while(choice != 2);

    return 0;
}