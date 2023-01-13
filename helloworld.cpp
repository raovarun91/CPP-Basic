#include<iostream>
#include<cmath>

int main() {
    int user_number = 0;
    std::cout <<  "Enter radius of the circle to calculate area" ;
    std::cin >> user_number;
    std::cout <<  "Area of the cicle is " << M_PI * pow(user_number, 2);
    return 0;

}