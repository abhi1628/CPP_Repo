# include <iostream>
int main(){
    int temp = 35;
    std::string result = "";
    result = temp < 18 ? "Cool Temp" : "Very Hot";
    std::cout << result;
}

