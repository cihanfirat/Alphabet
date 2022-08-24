#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int number;

    printf("Choose a letter");
    scanf("%c",&ch);

    if((ch>='A')&& (ch<='Z')){
        number=(int)ch-(int)'A'+1;
    }
    else if((ch>='a')&&(ch<='z')){
        number=(int)ch-(int)'a'+1;
    }
    else{
        printf("Invalid Character\n");

    }
    printf("%c's Order is %d",ch,number);
    return 0;
}
