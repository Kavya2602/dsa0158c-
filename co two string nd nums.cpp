#include <iostream>
#include <cstring>  // For strlen and strcpy

// Function to concatenate two std::string objects
std::string concatenate(const std::string& str1, const std::string& str2) {
    return str1 + str2;
}

// Function to concatenate two char arrays
char* concatenate(const char* str1, const char* str2) {
    // Calculate the length of the concatenated string
    size_t length1 = std::strlen(str1);
    size_t length2 = std::strlen(str2);
    size_t totalLength = length1 + length2 + 1; // +1 for the null terminator

    // Allocate memory for the new string
    char* result = new char[totalLength];

    // Copy the first string to the result
    std::strcpy(result, str1);

    // Concatenate the second string to the result
    std::strcat(result, str2);

    return result;
}

int main() {
    // Input for std::string
    std::string str1, str2;
    std::cout << "Enter the first std::string: ";
    std::getline(std::cin, str1);
    std::cout << "Enter the second std::string: ";
    std::getline(std::cin, str2);
    std::string resultStr = concatenate(str1, str2);
    std::cout << "Concatenated std::string: " << resultStr << std::endl;

    // Input for char arrays
    char cstr1[100], cstr2[100];
    std::cout << "Enter the first char array: ";
    std::cin.getline(cstr1, 100);
    std::cout << "Enter the second char array: ";
    std::cin.getline(cstr2, 100);
    char* resultCStr = concatenate(cstr1, cstr2);
    std::cout << "Concatenated char array: " << resultCStr << std::endl;

    // Clean up allocated memory
    delete[] resultCStr;

    return 0;
}

