#ifndef MENU_H
#define MENU_H

#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>


using namespace std;



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

#endif // MENU_H