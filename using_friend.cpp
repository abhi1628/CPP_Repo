/**
 * @file using_friend.cpp
 * @author Abhishek Singh (abhishek.ec@global.org.in)
 * @brief Friend function is used for accessing private 
 *        and protected members of other classes. It allows 
 *        to extend storage and access its part while maintaining encapsulation
 * @version 0.1
 * @date 2022-07-27
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
using namespace std;
class Box
{
    int length;

public:
    Box() : length(0) {}
    friend int printlength(Box);
};
int printlength(Box b)
{
    b.length += 10;
    return b.length;
}

int main()
{
    Box b;
    cout << "Length of the box:" << printlength(b) << endl;
    return 0;
}