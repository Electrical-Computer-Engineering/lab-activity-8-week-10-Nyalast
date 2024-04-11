//Nyala Smith-Thompson 115895393

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 39

char to_lower(char c){ // upper to lowercase
    if(c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    else
        return c;
}

char* my_strcat(char str1[], char str2[]){ 
    int len = 0;
    while(str1[len] != '\0'){
        len++;
    }

    int i = 0;
    while(str2[i] != '\0'){
        str1[len++] = str2[i++];
    }

    str1[len] = '\0';
    return str1;
}

char* my_strcpy(char str1[], char str2[]){ 
    int i;
    for(i = 0; str2[i] != '\0'; i++){
        str1[i] = str2[i];
    }
    return str1;
}

int my_vowel(char c){
    c = to_lower(c); 
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

char* my_piglatin(char* word){ // Writing words in pig latin
    char* pig_latin = (char*)malloc((strlen(word) + 4) * sizeof(char)); // allocating a size byte of memory to beginning pointer of block

    if(my_vowel(word[0]) && !my_vowel(word[1])) { 
        return word = my_strcat(word, "way");
    }
    else{ 
        int i;

        for(i = 1; word[i] != '\0'; ++i) {
            if(my_vowel(word[i])){
                break;
            }
        }

        my_strcpy(pig_latin, word + i);
        strncat(pig_latin, word, i); 
        my_strcat(pig_latin, "ay"); 
    }
    
    if(isupper(word[0])) {
        pig_latin[0] = toupper(pig_latin[0]);
    }

    return pig_latin;
}

int main() {
    char word[MAX];

    printf("Please enter 5 words:\n");
    for (int i = 0; i < 5; i++) {
        printf("Word %d: ", i + 1); scanf("%s", word);
        printf("Output: %s\n", my_piglatin(word));
    }

    return 0;
}

