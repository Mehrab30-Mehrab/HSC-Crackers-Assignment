#include<stdio.h>
int main(){
int n;
scanf("%d", &n);
int i;
int sum=0, odd=1;
for(i=1;i<=n;i++){
    sum+=odd;
    odd+=2;
}
printf("%d", sum);
}

