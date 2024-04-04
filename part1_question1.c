// Nyala Smith-Thompson 115895393

#include <stdio.h>

int my_isalpha (char c){
    return c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z';
}

int my_isdigit (char c){
    return c >= '0' && c <= '9';
}

int  my_isupper (char c){
    return c >= 'A' && c <= 'Z';
}

char my_toupper (char c){
    if (c >= 'a' && c <= 'z'){
        return c - 'a' + 'A';
    }
    else {
        return c;
    }
}

char my_tolower (char c){
    if (c >= 'A' && c <= 'Z'){
        return c - 'A' + 'a';
    }
    else {
        return c;
    }
}

int main (){
    char c;

    printf ("test 1.1 --- is_mydigit:  "); scanf ("%c", &c); getchar();
    printf ("%d\n", my_isdigit(c));
    printf ("test 1.2 --- is_mydigit:  "); scanf ("%c", &c); getchar();
    printf ("%d\n", my_isdigit(c));

    printf ("test 2.1 --- is_myalpha:  "); scanf ("%c", &c); getchar();
    printf ("%d\n", my_isalpha(c));
    printf ("test 2.2 --- is_myalpha:  "); scanf ("%c", &c); getchar();
    printf ("%d\n", my_isalpha(c));

    printf ("test 3.1 --- my_isupper: "); scanf ("%c", &c); getchar();
    printf ("%d\n", my_isupper(c));
    printf ("test 3.2 --- my_isupper: "); scanf ("%c", &c); getchar();
    printf ("%d\n", my_isupper(c));
    
    printf ("test 4.1 --- my_toupper: "); scanf ("%c", &c); getchar();
    printf ("%c\n", my_toupper(c));
    printf ("test 4.2 --- my_toupper: "); scanf ("%c", &c); getchar();
    printf ("%c\n", my_toupper(c));

    printf ("test 5.1 --- my_tolower: "); scanf ("%c", &c); getchar();
    printf ("%c\n", my_tolower(c));
    printf ("test 5.2 --- my_tolower: "); scanf ("%c", &c); getchar();
    printf ("%c\n", my_tolower(c));
}

