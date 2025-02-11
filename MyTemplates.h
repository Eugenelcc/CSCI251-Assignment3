#ifndef MY_TEMPLATE_H
#define MY_TEMPLATE_H

#include <fstream>

template <typename T>
double scalar_difference (const T a , const T b) {
    return a - b;
}   

template <typename T>
bool equals(const T a , const T b ){
    return a == b;
}



#endif