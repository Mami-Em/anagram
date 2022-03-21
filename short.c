#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZ 1

int shorting2(char *val);

int main() {
    char *val = get_string("Insert: ");
    shorting2(val);
    return 0;
}

int shorting(char *val) {
    // char new_arr[SIZ] = "";
    char to_check;
    char *p = val;
    int count = 0;
    // if char not inside the new array yet, insert it
    for (int i = 0; i < strlen(val); i++)
    {
        
        to_check = val[i];
        /* code */
        for (int j = 0; j < strlen(val); j++)
        {

            /* code */
            if (to_check == val[j])
                /* code */
                count ++;
                if (count > 1)
                {
                    // keep only one
                    val[j] = 0;
                }
        }
        
        printf("%c %i", to_check, count);
        printf("\n");
        
        count = 0;
    }
    printf("%s\n", p);
    
    return 0;
}



int shorting2(char *val) {
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
        
        printf("%c %i", to_check, count);
        printf("\n");
        
        count = 0;
    }
    printf("%s\n", p);
    
    return 0;
}
