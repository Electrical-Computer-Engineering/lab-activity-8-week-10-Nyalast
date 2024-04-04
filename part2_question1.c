#include <stdio.h>
#include <string.h>

#define MAX 10

char* my_strcpy (char str1[], char str2[]){
    int i = 0;

    for (i = 0; str2[i] != '\0'; i++){
        str1[i] = str2[i];
    }

    return str1;
}

int my_strcmp(char str1[], char str2[]){ // compares 2 strings and returns 0 if they are equal, otherwise 1
	int i;
	
	for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++){ // run the loop until one of the string ends
		if (str1[i] > str2[i] || str1[i] < str2[i]){
			return 1;
		}
	}
	
	if (str1[i] == '\0' && str2[i] == '\0'){
		return 0;
	}
    else{
        return 1;
    }
}

char my_strncmp(char str1[], char str2[]){ // compares first n characters of 2 strings and returns 0 if equal, otherwise 1
    int i, n;

    for (i = 0; str1[i] == '\0' && str2[i] == '\0' && i < n-1; i++){
        if (str1[i] > str2[i] || str1[i] < str2[i]){
			return 1;
		}
    }
}

void _strcat(char t[], char s[]){ //appends second string at the end of the first string. returns starting address of first string
    int t_len = 0;

    while (t[t_len] != '\0'){
        t_len++;
    }

    int i = 0;
    while (s[i] != '\0'){
        t[t_len++] = s[i++];
    }

    t[t_len] = '\0';
}

char my_reverse(char str1[], char str2[]){ //stores reversed second string into first string. returns starting address of first string

}

char MyStrCmp (char str1[], char str2[]){
	int i;
	
	for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++){ // run the loop until one of the string ends
		if (str1[i] > str2[i]){
			return 1;
		}
		else if (str1[i] < str2[i]){
			return -1;
		}
	}
	
	if (str1[i] == '\0' && str2[i] == '\0'){
		return 0;
	}
	else if (str1[i] == '\0'){
		return -1;
	}
}

int main(){
    int i;
    char str1[MAX], str2[MAX];

    printf ("--Copying the second string into the first string and printing result--\n");
    printf ("Enter first string: "); scanf ("%s", &str1); getchar();
    printf ("Enter second string: "); scanf ("%s", &str2); getchar();
    printf ("%s\n", my_strcpy(str1, str2));
    
    printf ("--compares 2 strings and returns 0 if they are equal, otherwise 1--\n");
    printf ("Enter first string: "); scanf ("%s", &str1); getchar();
    printf ("Enter second string: "); scanf ("%s", &str2); getchar();
    printf ("%d\n", my_strcmp(str1, str2));

    // printf ("--compares 2 strings and returns 0 if they are equal, otherwise 1--")
    // printf ("Enter first string: "); scanf ("%s", &str1); getchar();
    // printf ("Enter second string: "); scanf ("%s", &str2); getchar();
    // printf ("%s\n", my_strcmp(str1, str2));

}
