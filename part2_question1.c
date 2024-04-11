//Nyala Smith-Thompson 115895393

#include <stdio.h>
#include <string.h>

#define MAX 10

int my_strcmp(char str1[], char str2[]){ // compares 2 strings and returns 0 if they are equal, otherwise 1
    int i;
    
    for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++){
        if(str1[i] > str2[i] || str1[i] < str2[i])
            return 1;
    }

    if(str1[i] == '\0' && str2[i] == '\0'){
        return 0; 
    }
    else if(str1[i] == '\0'){
        return 1;
    }
    else{
        return 1;
    }
}

char* my_strcpy (char str1[], char str2[]){
    int i = 0;

    for (i = 0; str2[i] != '\0'; i++){
        str1[i] = str2[i];
    }

    return str1;
}

int my_strncmp(char str1[], char str2[]){ // compares first n characters of 2 strings and returns 0 if equal, otherwise 1
    int i, n;

    for (i = 0; str1[i] != '\0' && str2[i] != '\0' && i < n-1; i++){
        if (str1[i] > str2[i] || str1[i] < str2[i]){
			return 1;
		}
    }

    if(str1[i] == str2[i]){
        return 0;
    }
    else if(str1[i] == '\0'){
        return 1;
    }
    else{
        return 1;
    }
}

char* my_strcat(char t[], char s[]){ //appends second string at the end of the first string. returns starting address of first string
    int t_len = 0;

    while (t[t_len] != '\0'){
        t_len++;
    }

    int i = 0;
    while (s[i] != '\0'){
        t[t_len++] = s[i++];
    }

    t[t_len] = '\0';

    return t;
}

char* my_reverse(char str1[], char str2[]){ //stores reversed second string into first string. returns starting address of first string
    int t_len = 0;
    char temp; 

    while(str2[t_len] != '\0'){
        t_len++;
    }

    int start = 0;
    int end = t_len-1;

    while (start < end){
        temp = str2[start];
        str2[start] = str2[end];
        str2[end] = temp;
        start++;
        end--;
    }

    return my_strcpy(str1, str2);
}

int main(){
    int i;
    char str1[MAX], str2[MAX];
    
    printf ("--compares 2 strings and returns 0 if they are equal, otherwise 1--\n");
    printf ("\n---attempt 1---\n");
    printf ("Enter first string: "); scanf ("%s", &str1); getchar();
    printf ("Enter second string: "); scanf ("%s", &str2); getchar();
    printf ("%d\n", my_strcmp(str1, str2));
    printf ("\n---attempt 2---\n");
    printf ("Enter first string: "); scanf ("%s", &str1); getchar();
    printf ("Enter second string: "); scanf ("%s", &str2); getchar();
    printf ("%d\n", my_strcmp(str1, str2));

    printf ("--compares first n characters of 2 strings and returns 0 if equal, otherwise 1--");
    printf ("\n---attempt 1---\n");
    printf ("Enter first string: "); scanf ("%s", &str1); getchar();
    printf ("Enter second string: "); scanf ("%s", &str2); getchar();
    printf ("%d\n", my_strncmp(str1, str2));
    printf ("\n---attempt 2---\n");
    printf ("Enter first string: "); scanf ("%s", &str1); getchar();
    printf ("Enter second string: "); scanf ("%s", &str2); getchar();
    printf ("%d\n", my_strncmp(str1, str2));

    printf ("--Copying the second string into the first string and printing result--\n");
    printf ("\n---attempt 1---\n");
    printf ("Enter first string: "); scanf ("%s", &str1); getchar();
    printf ("Enter second string: "); scanf ("%s", &str2); getchar();
    printf ("%s\n", my_strcpy(str1, str2));
    printf ("\n---attempt 2---\n");
    printf ("Enter first string: "); scanf ("%s", &str1); getchar();
    printf ("Enter second string: "); scanf ("%s", &str2); getchar();
    printf ("%s\n", my_strcpy(str1, str2));

    printf ("--appends second string at the end of the first string. returns starting address of first string--");
    printf ("\n---attempt 1---\n");
    printf ("Enter first string: "); scanf ("%s", &str1); getchar();
    printf ("Enter second string: "); scanf ("%s", &str2); getchar();
    printf ("%s\n", my_strcat(str1, str2));
    printf ("\n---attempt 2---\n");
    printf ("Enter first string: "); scanf ("%s", &str1); getchar();
    printf ("Enter second string: "); scanf ("%s", &str2); getchar();
    printf ("%s\n", my_strcat(str1, str2));

    printf ("--stores reversed second string into first string. returns starting address of first string--");
    printf ("\n---attempt 1---\n");
    printf ("Enter first string: "); scanf ("%s", &str1); getchar();
    printf ("Enter second string: "); scanf ("%s", &str2); getchar();
    printf ("%s\n", my_reverse(str1, str2));
    printf ("\n---attempt 2---\n");
    printf ("Enter first string: "); scanf ("%s", &str1); getchar();
    printf ("Enter second string: "); scanf ("%s", &str2); getchar();
    printf ("%s\n", my_reverse(str1, str2));

    return 0;
}
