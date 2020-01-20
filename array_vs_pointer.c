#include <stdio.h>



int main(){


    char stringa1[] = "ciao";
    char stringa2[] = {'c','i','a','o'};

    char *stringa2 = {'c','i','a','o'};
    
    printf("%s\n", stringa1);
    printf("%d\n", sizeof(stringa1));

    printf("%c\n", stringa2[1]);
    printf("%d\n", sizeof(stringa2));



    return 0;
}
