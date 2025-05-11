#include<stdio.h>
int main(){
int i;
int sum=0;
int n;
scanf("%d",&n);
printf("Given Number is : ");
for (i=1;i<=n;i++){
    sum+=i;
}
printf("%d",sum);
return 0;

}
