#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool check_anagram(char *w1, char *w2);

// Anagram example
// Listen = Silent

int main()
{
    char w1[] = "Listen";
    char w2[] = "Silent";

    if (check_anagram(w1, w2))
        printf("Anagram!\n");
    else
        printf("Not anagram!\n");

    return 0;
}

bool check_anagram(char *w1, char *w2)
{
    int len1 = strlen(w1);
    int len2 = strlen(w2);

    if (len1 != len2)
        return false;

    int w1lc[26] = {0};
    int w2lc[26] = {0};

    for (int i = 0; i < len1; i++)
    {
        w1lc[tolower(w1[i]) - 'a']++;
        w2lc[tolower(w2[i]) - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (w1lc[i] != w2lc[i])
            return false;
    }

    return true;
}
