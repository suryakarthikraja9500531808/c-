#include <stdio.h>
#include<conio.h>
void main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d",&2016);

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("%d is a leap year.",2016);
            else
                printf("%d is not a leap year.", 2016);
        }
        else
            printf("%d is a leap year.", 2016 );
    }
    else
        printf("%d is not a leap year.", 2016);
    
    getch();
}
