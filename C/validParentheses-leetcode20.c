#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool isValid(char *s)
{
    size_t s_length = strlen(s);
    char *stack = (char *)malloc(sizeof(char) * s_length);
    char ch;
    int stack_len = 0;

    for (int i = 0; i < s_length; i++) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            stack[stack_len++] = c;
            if (stack_len > (s_length / 2)) return false;
        } else {
            if (stack_len == 0) return false;
            switch (c) {
                case ')':
                    if (stack[--stack_len] != '(') return false;
                    break;
                case '}':
                    if (stack[--stack_len] != '{') return false;
                    break;
                case ']':
                    if (stack[--stack_len] != '[') return false;
                    break;
            }
        }
    }
    free(stack);
    return (stack_len == 0);
}