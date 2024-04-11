//Nyala Smith-Thompson 115895393

#include <stdio.h>
#include <string.h>

#define MAX 64

char* remove_copy(char str1[], const char str2[]){ //Removing the characters that are the same in both strings
    int i, j, k;
    for(i = k = 0; str1[i] != '\0'; ++i){
        int copy = 0;
        for(j = 0; str2[j] != '\0'; ++j){
            if(str1[i] == str2[j]){
                copy = 1;
                break;
            }
        }
        if(!copy){
            str1[k++] = str1[i];
        }
    }
    str1[k] = '\0';
    return str1;
}

int main(){
    char str1[MAX], str2[MAX];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    printf("%s\n", remove_copy(str1, str2));
}

