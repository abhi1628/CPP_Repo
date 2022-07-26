/**
 * @file using_inline.cpp
 * @author Abhishek Singh (abhishek.ec@global.org)
 * @brief The inline functions are a C++ enhancement feature 
 *        to reduce the execution time of a program. 
 *        Functions can be instructed to compiler to make them 
 *        inline so that compiler can replace those function definition 
 *        wherever those are being called. Compiler replaces the definition 
 *        of inline functions at compile time instead of referring function definition at runtime.
 * @version 0.1
 * @date 2022-07-26
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
using namespace std;

class A
{
public:
    inline int add(int a, int b)
    {
        return (a + b);
    }
};
int main()
{
    A x;
    cout << x.add(3, 4) << endl;
    return 0;
}