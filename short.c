#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZ 1

int shorting(char *val);
void alana(char *val, int miala);

int main() {
    char *val = get_string("Insert: ");
    shorting(val);
    return 0;
}

int shorting(char *val) {
    char jerena;

    // if char not inside the new array yet, insert it
    for (int i = 0; i < strlen(val); i++)
    {
        
        jerena = val[i];
        /* code */
        for (int j = 0; j < strlen(val); j++)
        {
            /* code */
            if (jerena == val[j])
                /* code */
                alana(val, j);
        }
    }
    printf("%s\n", val);
    
    return 0;
}

void alana(char *val, int miala) {
    char *val_f = val;
    // work on
    for (int i = 0; i < strlen(val); i++)
    {
        /* code */
        if ((i =! miala))
            *val_f++ = *val;        
    }
    *val_f = '\0';
}
