#include <cs50.h>
#include <stdio.h>
#include <string.h>

int c_f_anagram(string a,string b);

int main() {
    string a = get_string("Insert the first word: ");
    string b = get_string("Insert the word to comparee it with: ");
    if (strlen(a) == strlen(b))
    {
        /* code */
        c_f_anagram(a,b);
    } else {
        printf("They do not have the same size");
    }
    return 0;
}

int c_f_anagram(string a, string b) {
    for (int i = 0; i < strlen(a); i++)
    {
        // funtion to correct
        printf("%c\n", a[i]);
    }
    return 0;
    
}
