#include<stdio.h>

int getFirstDayOfTheYear(int year){
    int day = (year*365 +((year-1)/4)-((year-1)/100) + ((year-1)/400)) % 7 ;
    return day ;
}

int main(){
    char *months[]={"January", "February", "March", "April", "May", "June", "July","August","September", "October", "November","December"};
    int  daysInmonth[] ={31,28,31,30,31,30,31,31,30,31,30,31};
    int totalDays , weekDays=0,spaceCounter = 0 , year ;
    printf("Enter your Choose Year : ");
    scanf("%d",&year);
    printf("\n\n\t\t\t################ Welcome to %d ################\n\n",year);


    if((year % 4 == 0 && year  % 100 !=0) || (year % 400 == 0)){
        daysInmonth[1] = 29 ;
    }

    weekDays = getFirstDayOfTheYear(year);

        for(int i = 0; i<12; i++){
        printf("\n\n\n--------------------%s--------------------\n",months[i]);
        printf("\n   Sun   Mon   Tue   Wed   Thu   Fri   Sat\n\n");

        for(spaceCounter = 1; spaceCounter <= weekDays ; spaceCounter++){
            printf("      ");
        }
        totalDays = daysInmonth[i];

        for(int j = 1 ; j<= totalDays; j++){
            printf("%6d",j);
            weekDays++;
            if(weekDays > 6){
                weekDays = 0 ;
                printf("\n\n");
            }
        }
    }
    return 0 ;
}
