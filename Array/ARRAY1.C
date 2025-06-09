#include<stdio.h>
int main(){
int monthly_sales[12]={1200,1300,1250,1350,1400,1500,1600,1700,1800,2000,2100};
int total=0;
for(int i=0;i<12;i++){
    total+=monthly_sales[i];
}
printf("The Total Salary of the year is %d\n", total);
int avg=total/12;
printf("Average salary is :%d\n",avg);
return 0;
}
