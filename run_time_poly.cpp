/**
 * @file run_time_poly.cpp
 * @author Abhishek Singh (abhishek.ec@global.org)
 * @brief Runtime Polymorphism can be achieved by data members in C++. 
 *        Here we are accessing the field by reference variable which refers 
 *        to the instance of derived class.
 * @version 0.1
 * @date 2022-07-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
using namespace std;
class Animal{
    public:
        string color = "black";
};
class Dog: public Animal{
    public:
        string color = "Grey";
};
int main(){
    Animal x = Dog();
    cout << x.color;
return 0;
}