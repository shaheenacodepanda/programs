#include <stdio.h>

// Function to set a group of bits
unsigned int set_group_of_bits(unsigned int num, int start, int length, unsigned int value) {
    // Create a mask for the specified length
    unsigned int mask = ((1 << length) - 1) << start;

    // Clear the bits in the range and set them to the new value
    num = (num & ~mask) | ((value << start) & mask);

    return num;
}

int main() {
    unsigned int num;
    int start, length;
    unsigned int value;

    // Input the number
    printf("Enter an unsigned integer: ");
    scanf("%u", &num);

    // Input the starting bit position
    printf("Enter the starting bit position: ");
    scanf("%d", &start);

    // Input the length of bits to set
    printf("Enter the number of bits to set: ");
    scanf("%d", &length);

    // Input the value to set the bits to
    printf("Enter the value to set the bits to: ");
    scanf("%u", &value);

    // Set the group of bits
    unsigned int result = set_group_of_bits(num, start, length, value);

    // Output the result
    printf("Original number: 0x%08x\n", num);
    printf("Modified number: 0x%08x\n", result);

    return 0;
}
