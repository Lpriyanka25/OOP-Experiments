#include <iostream>
#include <cmath>

// Function to count the number of digits in a number
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
bool isArmstrongNumber(int number) {
    int originalNumber = number;
    int sum = 0;
    int digitCount = countDigits(number);

    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, digitCount);
        number /= 10;
    }

    return sum == originalNumber;
}

int main() {
    int number; // Number to check

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isArmstrongNumber(number)) {
        std::cout << number << " is an Armstrong number." << std::endl;
    } else {
        std::cout << number << " is not an Armstrong number." << std::endl;
    }

    return 0;
}
