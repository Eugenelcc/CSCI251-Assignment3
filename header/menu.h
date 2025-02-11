#ifndef MAIN_H
#define MAIN_H

#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <sstream>
#include <iomanip>
#include <math.h>
#include <cmath>


using namespace std;


 
 
extern void promptUserToPressEnterToContinue();


const extern string student_Name;
const extern string student_ID;
const extern string divider;


extern void displaymenu();

void spec_filt_criteria();
void spec_sort_criteria();
void spec_sort_order();


void view_data();

//SORTING
void P2Dsort();
void P3Dsort();
void L23Dsort();




void readDataFromFile(const string &filename);

vector<string> TokenizeString(string line);

#endif // MENU_H