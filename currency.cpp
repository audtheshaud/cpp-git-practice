/*  This program is designed to report back the currency amount 
in US Dollars given currency amounts from three European countries  */

#include <iostream>

float conversion(float &currency, float conversion_rate){
    /*
    This function uses a conversion rate and the reference to the
    user input currency amount to calculate the currency amount in
    US Dollars
    */
    currency *= conversion_rate; 
}


int main(){
    float euros, marks, francs; // Instantiates floats of each currency

    std::cout << "Enter the amount of German Euros: "; // User prompt
    std::cin >> euros; // User input

    std::cout << "Enter the amount of Bosnian Marks: "; // User prompt
    std::cin >> marks; // User input

    std::cout << "Enter the amount of Swiss Francs: "; // User prompt
    std::cin >> francs; // User input

    conversion(euros, 1.08); 
    conversion(marks, 0.55);
    conversion(francs, 1.11);

    float total = euros + marks + francs; 
    // Calculation of total in US Dollars

    char str[40]; // Buffer for formatting

    sprintf(str,"%.2f", total); 
    // Formats to two decimal places

    std::cout << "US Dollars = $" << str; 
    // Outputs the Dollar amount to the terminal
    
    return 0; // End of function
}