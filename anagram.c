#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int anagram(string a,string b);

char *shorting2(char *val) {
    char to_check;
    char *p = val;
    int count = 0;
    // if char not inside the new array yet, insert it
    for (int i = 0; i < strlen(val); i++)
    {
        if(val[i] == ' ') continue;

        to_check = val[i];
        /* code */
        for (int j = i; j < strlen(val); j++)
        {

            /* code */
            if (to_check == val[j]){
                count ++;
                val[j] = ' ';}
        }
        
        count = 0;
    }
    printf("%s \n", val);
    return val;
}

int main() {
    string a = get_string("Insert the word: ");
    string b = get_string("Compare with: ");
    
    anagram(shorting2(a),shorting2(b));
}

int anagram(string a, string b) {
    char val;
    int same = 0;
    
    for (int i = 0; i < strlen(a); i++) {
        
        // pick one by one each value in A including spaces
        val = a[i];
        if (a[i] == ' ')
            val = ' ';
        
        for (int j = 0; j < strlen(b); j++)
        {
            // check if each word in A appear in B
            if (val == b[j]) 
                same ++;
        } 
    }
    
    
    // if new str and first str are same
    if (same == strlen(a))
        printf("They are anagrams\n");

    // not anagrams
    else
        printf("They are not anagrams!\n");
    
    return 0;
}
