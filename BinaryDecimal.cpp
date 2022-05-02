/*
Fill in this comment header with the relevant information.
*/

#include <iostream>
#include <string>
#include <cmath>

/// <summary>
/// Converts a binary number into the decimal equivalent.
/// </summary>
/// <param name="binary_number">Binary number to convert.</param>
/// <returns>Decimal equivalent of the binary number.</returns>
int BinaryToDecimal(int binary_number)
{
    int decimal_number = 0, place_value = 1;
    while (binary_number > 0)
    {
        int digit = binary_number % 10;
        decimal_number += digit * place_value;
        place_value *= 2;
        binary_number /= 10;
    }
    return decimal_number;
}

/// <summary>
/// Converts the decimal number into the binary equivalent.
/// </summary>
/// <param name="decimal_number">Decimal number to convert.</param>
/// <returns>Binary equivalent of the decimal number.</returns>
int DecimalToBinary(int decimal_number)
{
    int binary_number = 0, place_value = 1;
    while (decimal_number > 0)
    {
        int remainder = decimal_number % 2;
        binary_number += remainder * place_value;
        place_value *= 10;
        decimal_number /= 2;
    }
    return binary_number;
}

int main()
{
    // Write your code for the main() here!
}
