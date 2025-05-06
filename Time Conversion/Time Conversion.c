#include<stdio.h>
int main(){
int total_days;
scanf("%d",&total_days);
int years,months,days;
years=total_days/365;
int remaining_days;
remaining_days=total_days-(years*365);
months=remaining_days/30;
printf ("%d years %d months %d remaining_days", years,months,remaining_days);
return 0;
}
