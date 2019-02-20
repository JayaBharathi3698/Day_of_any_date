#include<stdio.h>
int main() {
int dd,mm,yy;
printf("Hint:The year you entered should be between 1700 to 3000.\n");
printf("Enter the date,month,year in the format [date month year] :\n ");
scanf("%d%d%d",&dd,&mm,&yy);
//to get yearcode
int yearcode,i;
int l=(yy%10);
int k=(yy/10)%10;
int a=(k*10)+l;
yearcode=(a/4)+dd;
//to find monthcode
int monthcode;
if(mm==1)
monthcode=1;
else if(mm==2)
monthcode=4;
else if(mm==3)
monthcode=4;
else if(mm==4)
monthcode=0;
else if(mm==5)
monthcode=2;
else if(mm==6)
monthcode=5;
else if(mm==7)
monthcode=0;
else if(mm==8)
monthcode=3;
else if(mm==9)
monthcode=6;
else if(mm==10)
monthcode=1;
else if(mm==11)
monthcode=4;
else 
monthcode=6;
//to find century code
int centurycode;
if(yy>1699&&yy<=1799)
centurycode=0;
else if(yy>1799&&yy<=1899)
centurycode=2;
else if(yy>1899&&yy<=1999)
centurycode=0;
else if(yy>1999&&yy<=2999)
centurycode=6;
int sum=0;
//to check if it is leap year or not
if(yy%4==0){
    if(yy%100==0){
        if(yy%400==0)
        sum=(yearcode+monthcode+centurycode+a)-1;
        else
        sum=(yearcode+monthcode+centurycode+a);
    }
    else
    sum=(yearcode+monthcode+centurycode+a)-1;
}
else
sum=(yearcode+monthcode+centurycode+a);
printf("The date %d:%d:%d which you entered is : ",dd,mm,yy);
//to calculate day;
int rem=(sum%7);
if(rem==0)
printf("Saturday ");
else if(rem==1)
printf("Sunday");
else if(rem==2)
printf("Monday");
else if(rem==3)
printf("Tuesday");
else if(rem==4)
printf("Wednesday");
else if(rem==5)
printf("Thursday ");
else if(rem==6)
printf("Friday");
}


