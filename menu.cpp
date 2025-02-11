#include "./header/menu.h"
#include "./header/Point2D.h"
#include "./header/Point3D.h"
#include "./header/Line2D.h"
#include "./header/Line3D.h"
#include <fstream>
#include <iostream>
#include <algorithm>

// Global variable
const string student_Name = "Eugene Lay Chai Chun";
const string student_ID = "9070783";
const string divider = "=========================================";

string filterCriteria = "Point2D";
string sortCriteria = "x-ordinate";
string sortOrder = "ASC";

int userchoice;
string filename;


vector<Point2D> point2D_vect;
vector<Point3D> point3D_vect;
vector<Line2D> line2D_vect;
vector<Line3D> line3D_vect;

 


 




int main()
{

    while (true)
    {
        displaymenu();
        cin >> userchoice;
        cout << "UserChoice : " << userchoice << endl;

        switch (userchoice)
        {
        case 1:

            cout << "Please enter filename :";
            cin >> filename;
            readDataFromFile(filename);
            break;
        case 2:
            spec_filt_criteria();
            break;

        case 3:
            spec_sort_criteria();
            break;

        case 4:
            spec_sort_order();
            break;

        case 5:
            view_data();
            break;

        case 6:
            cout << "Store data" << endl;
            break;
        case 7:
            cout << "Quit" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
}

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
    if (filterCriteria == "Point2D")
    {
        cout << "Point2D SOrt" << endl;
        P2Dsort();
    }
    else if (filterCriteria == "Point3D")
    {
        cout << "Point3D SOrt" << endl;
        P3Dsort();
    }
    else if (filterCriteria == "Line2D")
    {
        cout << "Line2DSort" << endl;
        L23Dsort();
    }
    else if (filterCriteria == "Line3D")
    {
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

// P2DSORT
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

// P3DSORT
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

// L2DSORT
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
    int count = 0;
    ifstream file(filename); // Open the file

    if (!file)
    {
        cout << "Error opening file" << endl;
    }
    else
    {
        cout << endl;
        cout << "File opened successfully" << endl;
        cout << endl;
        cout << "Reading data from file..." << endl;
        string line;
        while (getline(file, line))
        {

            
         
            if (line.find("Point2D") != string::npos)
            {
                 
                size_t OpenBracket = line.find("[");

                size_t CloseBracket = line.find("]");
                
                line = line.substr(OpenBracket + 1, CloseBracket - OpenBracket - 1);
           
                vector<string> tokens = TokenizeString(line);
                int x = stoi(tokens[0]);
                int y = stoi(tokens[1]);

                Point2D p2d(x, y);
                

                auto itr = find(point2D_vect.begin(), point2D_vect.end(), p2d);
                if (itr == point2D_vect.end()) 
                {
                    point2D_vect.emplace_back(p2d);
                    count++;
                }

            }
            else if (line.find("Point3D") != string::npos)
            {
                
                size_t OpenBracket = line.find("[");

                size_t CloseBracket = line.find("]");

                line = line.substr(OpenBracket + 1, CloseBracket - OpenBracket - 1);
                vector<string> tokens = TokenizeString(line);
                int x = stoi(tokens[0]);
                int y = stoi(tokens[1]);
                int z = stoi(tokens[2]);

                Point3D p3d(x, y,z);

                auto itr = find(point3D_vect.begin(),point3D_vect.end(),p3d);
                if (itr == point3D_vect.end())
                {
                    point3D_vect.emplace_back(p3d);
                    count++;
                }
             

            
            }
            else if (line.find("Line2D") != string::npos)
            {
                 

                size_t OpenBracket = line.find("[");
                size_t CloseBracket = line.find("]");

                string pt1 = line.substr(OpenBracket + 1, CloseBracket - OpenBracket - 1);

                size_t OpenBracket2 = line.find_last_of("[");
                size_t CloseBracket2 = line.find_last_of("]");

                string pt2 = line.substr(OpenBracket2 + 1, CloseBracket2 - OpenBracket2 - 1);


                vector<string> tokens = TokenizeString(pt1);
                int x1 = stoi(tokens[0]);
                int y1 = stoi(tokens[1]);

              

                tokens = TokenizeString(pt2);
                int x2 = stoi(tokens[0]);
                int y2 = stoi(tokens[1]);

                Point2D p1(x1, y1);
                Point2D p2(x2, y2);

                Line2D l2d(p1, p2);

                auto itr = find(line2D_vect.begin(),line2D_vect.end(),l2d);
                if (itr == line2D_vect.end()){
                    line2D_vect.emplace_back(l2d);
                    count++;
                }
               
                
                
            }
            else if (line.find("Line3D") != string::npos)
            {
              

                size_t OpenBracket = line.find("[");
                size_t CloseBracket = line.find("]");

                string pt1_L3D = line.substr(OpenBracket + 1, CloseBracket - OpenBracket - 1);

                size_t OpenBracket2 = line.find_last_of("[");
                size_t CloseBracket2 = line.find_last_of("]");

                string pt2_L3D = line.substr(OpenBracket2 + 1, CloseBracket2 - OpenBracket2 - 1);

                vector<string> tokens = TokenizeString(pt1_L3D);
                int x1 = stoi(tokens[0]);
                int y1 = stoi(tokens[1]);
                int z1 = stoi(tokens[2]);
                

               tokens = TokenizeString(pt2_L3D);
                int x2 = stoi(tokens[0]);
                int y2 = stoi(tokens[1]);
                int z2 = stoi(tokens[2]);


                Point3D point1(x1, y1, z1);
                Point3D point2(x2, y2, z2);


                auto itr =  find(line3D_vect.begin(),line3D_vect.end(),Line3D(point1,point2));
                if (itr == line3D_vect.end()){
                    line3D_vect.emplace_back(Line3D(point1,point2));
                    count++;
                }

              
                
            }
        }

        cout << count << " records read in successfully!"<<endl;
    }
}

void promptUserToPressEnterToContinue()
{
    // Clears any previous input from the input buffer
    cin.ignore(1000, '\n');
    string userInput = "";

    do
    {
        cout << "Press <Enter> to return to the main menu...";

        getline(cin, userInput);
    } while (userInput.length() != 0);
    cout << endl;
}


vector<string> TokenizeString(string line)
{
    vector<string>tokens;
    string token;
    stringstream ss(line);
    while (getline(ss, token, ','))
    {
        tokens.push_back(token);
    }
    return tokens;
}

