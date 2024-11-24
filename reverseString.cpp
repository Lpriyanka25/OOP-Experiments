#include <iostream>
#include <string>
#include <algorithm>

// Function to check if a number is a palindrome using strings
bool isPalindromeNumber(int number) {
    std::string str = std::to_string(number);
    std::string reversedStr = str;
    std::reverse(reversedStr.begin(), reversedStr.end());
    return str == reversedStr;
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
