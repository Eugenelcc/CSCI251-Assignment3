#include "./header/main.h"
#include "./header/menu.h"
#include <fstream>
#include <iostream>

// Global variable
const string student_Name = "Eugene Lay Chai Chun";
const string student_ID = "9070783";
const string divider = "=========================================";

string filterCriteria = "None";
string sortCriteria = "None";
string sortOrder = "None";

void displaymenu()
{

    int userchoice;
    cout << '\n'
         << divider << endl;
    cout << "Student ID: " << student_ID << endl;
    cout << "Student Name: " << student_Name << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Welcome to Assn3 program!" << endl
         << '\n';
    cout << "1)\tRead in data" << endl;
    cout << "2)\tSpecify filtering criteria (current : " << filterCriteria << ")" << endl;
    cout << "3)\tSpecify sorting criteria (current : " << sortCriteria << ")" << endl;
    cout << "4)\tSpecify sorting order (current : " << sortOrder << ")" << endl;
    cout << "5)\tView data" << endl;
    cout << "6)\tStore data" << endl;
    cout << "7)\tQuit" << endl;

    cout << divider << endl;

    cout << "Please enter your choice (1-7): ";

    cin >> userchoice;
    while (!(cin >> userchoice) || userchoice < 1 || userchoice > 7)
    {
        cout << "Invalid input. Please enter a number between 1 and 5: ";
        cin.clear();             // Clear the error flag
        cin.ignore(10000, '\n'); // Ignore the rest of the input
    }
}

// select filtering criteria
void spec_filt_criteria()
{
    char UserOpt;
    cout << "[ Specifying filtering criteria (current: " << filterCriteria << ") ]" << endl;
    cout << endl;
    cout << "\ta)   Point2D records" << endl;
    cout << "\tb)   Point3D records" << endl;
    cout << "\tc)   Line2D records" << endl;
    cout << "\td)   Line3D records" << endl;
    cout << endl;
    cout << "\tPlease enter your criteria(a-d):";
    cin >> UserOpt;
    switch (UserOpt)
    {
    case ('a'):
        filterCriteria = "Point2D";
        sortCriteria = "X-ordinate";
        break;
    case ('b'):
        filterCriteria = "Point3D";
        sortCriteria = "X-ordinate";
        break;
    case ('c'):
        filterCriteria = "Line2D";
        sortCriteria = "Pt. 1";
        break;
    case ('d'):
        filterCriteria = "Line3D";
        sortCriteria = "Pt. 1";
        break;
    default:
        break;
    }
    cout << endl;
    cout << "Filter criteria successfully set to'" << filterCriteria << "'!..." << endl;
    promptUserToPressEnterToContinue();
}

// select sorting criteria
void spec_sort_criteria()
{
    cout << "[ Specifying sorting criteria (current: " << filterCriteria << ") ]" << endl;
    cout << endl;
    if (filterCriteria == "Point2D") {
        cout << "Point2D SOrt" << endl;
        P2Dsort();
    } else if (filterCriteria == "Point3D") {
        cout << "Point3D SOrt" << endl;
        P3Dsort();
    } else if (filterCriteria == "Line2D") {
        cout << "Line2DSort" << endl;
        L23Dsort();
    } else if (filterCriteria == "Line3D") {
        cout << "Line3D SOrt" << endl;
        L23Dsort();
    }

    cout << "Filter criteria successfully set to'" << sortCriteria << "'!...\n";
    promptUserToPressEnterToContinue();
}

// select sorting order
void spec_sort_order()
{
    char UserOpt;
    cout << "[ Specifying sorting order (current: " << sortOrder << ") ]\n";
    cout << endl;
    cout << "\ta)\tASC (Ascending order)\n";
    cout << "\tb)\tDSC (Descending order)\n";
    cout << endl;
    cout << "\tPlease enter your criteria(a-b):";
    cin >> UserOpt;
    switch (UserOpt)
    {
    case ('a'):
        sortOrder = "ASC";
        break;
    case ('b'):
        sortOrder = "DSC";
        break;
    default:
        break;
    }
    cout << endl;
    cout << "Sorting order successfully set to'" << sortOrder << "'!...\n";
    promptUserToPressEnterToContinue();
}

// Method to view data according to preferences
void view_data()
{
    cout << "[View data ... ]\n";
    cout << "filtering criteria: " << filterCriteria << endl;
    cout << "sorting criteria: " << sortCriteria << endl;
    cout << "sorting order: " << sortOrder << endl;
    cout << endl;

    promptUserToPressEnterToContinue();
}


//P2DSORT
void P2Dsort()
{
    char UserOpt;
    cout << "\ta)\tX ordinate Value" << endl;
    cout << "\tb)\tY ordinate Value" << endl;
    cout << "\tc)\tDist. Fr origin Value" << endl;
    cout << endl;

    cout << "\tPlease enter your criteria(a-c):";
    cin >> UserOpt;
    switch (UserOpt)
    {
    case ('a'):
    sortCriteria = "X-ordinate";
        break;
    case ('b'):
    sortCriteria = "Y-ordinate";
        break;
    case ('c'):
    sortCriteria = "Dist";
        break;
    default:
        break;
    }
}

//P3DSORT
void P3Dsort()
{
    char UserOpt;
    cout << "\ta)\tX ordinate Value" << endl;
    cout << "\tb)\tY ordinate Value" << endl;
    cout << "\tc)\tZ ordinate Value" << endl;
    cout << "\td)\tDist. Fr origin Value" << endl;
    cout << endl;

    cout << "\tPlease enter your criteria(a-d):";
    cin >> UserOpt;
    switch (UserOpt)
    {
    case ('a'):
    sortCriteria = "X-ordinate";
        break;
    case ('b'):
    sortCriteria = "Y-ordinate";
        break;
    case ('c'):
    sortCriteria = "Z-ordinate";
        break;
    case ('d'):
    sortCriteria = "Dist";
        break;
    default:
        break;
    }
}

//L2DSORT
void L23Dsort()
{
    char UserOption;
    cout << "\ta)\tPt.1's (x,y) values" << endl;
    cout << "\tb)\tPt.2's (x,y) values" << endl;
    cout << "\tc)\tLength Value" << endl;
    cout << endl;

    cout << "\tPlease enter your criteria(a-c):";
    cin >> UserOption;
    switch (UserOption)
    {
    case ('a'):
    sortCriteria = "Values of Pt.1";
        break;
    case ('b'):
    sortCriteria = "Values of Pt.2";
        break;
    case ('c'):
    sortCriteria = "Length value";
        break;
    default:
        break;
    }
}






// Method to read data from a file
void readDataFromFile(const string &filename)
{
    cout << "Reading data from file..." << endl;

    ifstream file(filename);
    file.open(filename);
    if (!file)
    {
        cout << "Error opening file" << endl;
    }
    else
    {
        cout << "File opened successfully" << endl;
        cout << "Reading data from file..." << endl;
        string line;
        while (getline(file, line))
        {
            cout << line << endl;
        }
    }
}
