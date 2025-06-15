#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int max;
max=arr[0];
for (int i=0;i<5;i++){
    if(max<arr[i]){
        max=arr[i];
    }
}
printf("The maximum element in the array is %d\n",max);
return 0;
}
