#include <stdio.h>  
#include<conio.h>  
int main()
{  
    char character;
    /* 
     * Take a character as input from user 
     */
    printf("Enter a Character\n");  
    scanf("%c", &character);  
       
    if((character >= 'a' && character <= 'z')||(character >= 'A' && character <= 'Z')){
        printf("%c is an Alphabet\n", character);  
    } else {  
        printf("%c is Not an Alphabet\n", character);  
    }
   
    getch();  
}
