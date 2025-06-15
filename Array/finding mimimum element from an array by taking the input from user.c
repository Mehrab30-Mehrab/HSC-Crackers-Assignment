#include<stdio.h>
int main(){
int n;
printf("Enter the number of elements to put in array :");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("Enter elements %d :",i+1);
        scanf("%d",&arr[i]);
}
int min;
min=arr[0];
for(int i=0;i<n;i++){
    if(min>arr[i]){
        min=arr[i];
    }
}
printf("The minimun element in the array is : %d",min);
return 0;
}
