
#include <iostream>
int main()
{
    int time = 18;
    if (time < 10)
        std::cout << "Good morning.";
    else if (time < 20)
        std::cout << "Good day.";
    else
        std::cout << "Good evening.";
}