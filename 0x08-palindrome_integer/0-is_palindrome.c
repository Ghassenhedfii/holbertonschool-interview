#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "palindrome.h"

unsigned long long reverse_number(unsigned long long n)
{
    unsigned long long r = 0;

    while (n != 0)
    {
        r = r * 10 + n % 10;
        n /= 10;
    }

    return r;
}

bool is_palindrome(unsigned long long n)
{
    unsigned long long r = reverse_number(n);

    return (n == r);
}
