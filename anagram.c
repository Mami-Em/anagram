#include <cs50.h>
#include <stdio.h>
#include <string.h>

int anagram(string a,string b);

int main() {
    string a = get_string("Insert the word: ");
    string b = get_string("Compare with: ");
    if (strlen(a) == strlen(b))
    {
        /* code */
        anagram(a,b);
    } else {
        printf("They do not have the same size");
    }
    return 0;
}

int anagram(string a, string b) {
    char val[strlen(a)];
    int t, f;
    for (int i = 0; i < strlen(a); i++)
    {
        for (int j = 0; j < strlen(a); j++)
        {
            if (a[i] == b[j])
                t ++;
            else
                f ++;
        }
        
    }
    printf("%i true\n%i fale\n", t,f);
    return 0;
    
}
