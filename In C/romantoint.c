#include <stdio.h>
#include <string.h>

int value(char r) {
    switch(r) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return -1;
}

int romanToInt(const char *str) {
    int res = 0;
    int i;
    for(i = 0; i < strlen(str); i++) {
        int s1 = value(str[i]);
        if(i + 1 < strlen(str)) {
            int s2 = value(str[i + 1]);
            if(s1 >= s2)
                res += s1;
            else {
                res += s2 - s1;
                i++;
            }
        } else {
            res += s1;
        }
    }
    return res;
}

int main() {
    char roman[20] = "MCMXCIV";
    printf("Roman numeral: %s → Integer: %d\n", roman, romanToInt(roman));
    return 0;
}
