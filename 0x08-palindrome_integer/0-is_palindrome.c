#include <stdbool.h>
#include "palindrome.h"

bool is_palindrome(unsigned int num) {
    unsigned int original = num;
    unsigned int reverse = 0;
    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    return original == reverse;
}
