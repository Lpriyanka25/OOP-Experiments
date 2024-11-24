#include <iostream>

// Function to reverse a number
int reverseNumber(int number) {
    int reversedNumber = 0;
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    return reversedNumber;
}

// Function to check if a number is a palindrome
bool isPalindromeNumber(int number) {
    int originalNumber = number;
    int reversedNumber = reverseNumber(number);
    return originalNumber == reversedNumber;
}

int main() {
    int number; // Number to check

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPalindromeNumber(number)) {
        std::cout << number << " is a palindrome number." << std::endl;
    } else {
        std::cout << number << " is not a palindrome number." << std::endl;
    }

    return 0;
}
