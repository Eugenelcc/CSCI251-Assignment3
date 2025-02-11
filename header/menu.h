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

#include "Point2D.h"
#include "Point3D.h"
#include "Line3D.h"
#include "Line2D.h"

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


void printdata(vector<Point2D> point2D_vect, vector<Point3D> point3D_vect, vector<Line3D> line3D_vect, vector<Line2D> line2D_vect, string filterCriteria, string sortCriteria, string sortOrder);


void readDataFromFile(const string &filename);

vector<string> TokenizeString(string line);

#endif // MENU_H