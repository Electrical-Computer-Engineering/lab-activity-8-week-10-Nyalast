//Nyala Smith-Thompson 115895393

#include <stdio.h>
#include <string.h>
#define MAX 10

int my_len(char str[]){ //String length function
    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}

char* my_shift(char str[]){ //Shifting the characters over to the right
    int i, j;
    int len = my_len(str);
    for(i = 0; str[i] != '\0'; i++){
        printf("%s\n", str);
        for(j = 0; j < len - 1; j++){
            str[j] = str[j+1];
        }
        str[len - 1] = ' ';
    }
    return str;
}

int main(){
    char str[MAX];
    int i;

    printf("Enter a string (10 characters or less): "); scanf("%s", &str); getchar();
    printf("\n");
   
    printf("%s\n", my_shift(str));
}