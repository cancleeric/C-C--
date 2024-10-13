#include <iostream>
#include <limits>

// Function to get user input
void getUserInput()
{
    int number;
    std::cout << "Please enter a number: ";

    if (std::cin >> number)
    {
        std::cout << "You entered: " << number << std::endl;
    }
    else
    {
        std::cout << "Invalid input." << std::endl;
        // Clear the error flag on cin (caused by non-numeric input)
        std::cin.clear();
        // Ignore the rest of the input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

int main()
{
    getUserInput();
    return 0;
}