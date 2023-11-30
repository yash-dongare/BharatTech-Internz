#include <iostream>

int main() 
{
    // Getting user input for CGPA
    float cgpa;
    std::cout << "Enter your CGPA: ";
    std::cin >> cgpa;

    // Converting CGPA to percentage
    float percentage = cgpa * 9.5;

    // Output of the  converted value
    std::cout << "Your percentage is: " << percentage << "%\n";

    return 0;
}
