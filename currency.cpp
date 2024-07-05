/*  This program is designed to report back the currency amount 
in US Dollars given currency amounts from three European countries  */

#include <iostream>
#include <iomanip>

float conversion(float &currency, float conversion_rate){
    currency *= conversion_rate;
}


int main(){
    float euros, marks, francs;

    std::cout << "Enter the amount of German Euros: ";
    std::cin >> euros;

    std::cout << "Enter the amount of Bosnian Marks: ";
    std::cin >> marks;

    std::cout << "Enter the amount of Swiss Francs: ";
    std::cin >> francs;

    conversion(euros, 1.08);
    conversion(marks, 0.55);
    conversion(francs, 1.11);

    float total = euros + marks + francs;

    char str[40];

    sprintf(str,"%.2f", total);

    std::cout << "US Dollars = $" << str;
    
    return 0;
}