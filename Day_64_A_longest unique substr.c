//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);
    int freq[256] = {0};
    int l = 0, r = 0, n = strlen(s), max = 0;
    while(r < n){
        freq[(int)s[r]]++;
        while(freq[(int)s[r]] > 1){
            freq[(int)s[l]]--;
            l++;
        }
        if(r - l + 1 > max) max = r - l + 1;
        r++;
    }
    printf("%d", max);
    return 0;
}
