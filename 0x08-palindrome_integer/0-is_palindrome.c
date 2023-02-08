#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "palindrome.h"


bool is_palindrome(unsigned int num) {
    char str[20];
    sprintf(str, "%u", num);
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}
