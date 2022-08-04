
#include <stdbool.h>

bool isPalindrome(char *s){
    int head, tail = strlen(s) - 1;
    
    while (head < tail) {
        if (!isalnum(s[head])) head++;
        if (!isalnum(s[tail])) tail--;
        if (isalnum(s[head]) && isalnum(s[tail])) {
            if (tolower(s[head]) != tolower(s[tail]))
                return false;
            head++;
            tail--;
        }        
    }
    return true;
