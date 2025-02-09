#include "./header/main.h"


// Global variable
string student_Name = "Eugene Lay Chai Chun";
string student_ID = "9070783";
string divider = "=========================================";


int main(){


    return 0;
}

int displaymenu(){
    int userchoice;

        int userchoice;

    while (true)
    {
        cout << '\n'
             << divider << endl;
        cout << "Student ID: " << student_ID << endl;
        cout << "Student Name: " << student_Name << endl;
        cout << "-----------------------------------------" << endl;
        cout << "Welcome to Assn3 program!" << endl
             << '\n';
        cout << "1)\tRead in data " << endl;
        cout << "2)\tCompute area (for all records)" << endl;
        cout << "3)\tPrint Shape Report" << endl;
        cout << "4)\tSort Shape data" << endl;
        cout << "5)\tQuit" << endl;

        cout << divider << endl;

        cout << "Please enter your choice (1-5): ";
        while (!(cin >> userchoice) || userchoice < 1 || userchoice > 5)
        {
            cout << "Invalid input. Please enter a number between 1 and 5: ";
            cin.clear();             // Clear the error flag
            cin.ignore(10000, '\n'); // Ignore the rest of the input
        }

        // OPTION 1  - Input Sensor Data
        if (userchoice == 1)
        {

            try
            {
              
            }
            catch (const std::exception &e)
            {
                cout << "Error: " << e.what() << endl;
                cout << "Returning to display menu." << endl;
            }
        }

        else if (userchoice == 2)
        {
            cout << "Option 2 selected" << endl;
            
        }
        // OPTION 3  - Print Shape Report
        else if (userchoice == 3)
        {
            cout << "Option 3 selected" << endl;
            
        }

        // OPTION 4  - Sort Shape data
        else if (userchoice == 4)
        {   
            cout << "Option 4 selected" << endl;
        
        }

        // Other options...
        else if (userchoice == 5)
        {   
            break;
        }
    }
    return 0;


}