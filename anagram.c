#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int anagram(string a,string b);

int main() {
    string a = get_string("Insert the word: ");
    string b = get_string("Compare with: ");
    anagram(a,b);
}

int anagram(string a, string b) {
    char val;
    string new;

    for (int i = 0; i < strlen(a); i++) {
        // pick one by one each value in A
        val = a[i];
        for (int j = 0; j < strlen(b); j++)
        {
            // check if each word in A appear in B
            if (val == b[j]) {
                new[i] = val;
            }
        } 
    }

    // if new str and first str are same
    if (strcmp(new, a) == 0)
        printf("They are anagrams\n ");

    // if there are similarities
    else if (strlen(new) > 1)
        /* -1 bc there is already one value by default inside of the new str */
        printf("There are only %lu words that matches!\n", strlen(new)-1);
    
    // not anagrams
    else
        printf("They are not anagrams!\n");
    
    return 0;
}
