#include<stdio.h>
int main(){
int n;
printf("Enter the number of elements to put in array : ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("Enter element %d :",i+1);
    scanf("%d",&arr[i]);
}
int max;
max=arr[0];
for(int i=0;i<n;i++){
    if(max<arr[i]){
        max=arr[i];
    }
}
printf("The maximum element in the array is : %d",max);
return 0;
}
