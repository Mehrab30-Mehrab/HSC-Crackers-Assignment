#include<stdio.h>
int sum(int arr[],int size){
int total=0;
for(int i=0;i<size;i++){
    total+=arr[i];
}
return total;
}
int main(){
    int arr[5]={1,2,3,4,5};
    arr[0]=10;
int sum_of_array=sum(arr,5);
printf("The sum of the array will be :%d\n",sum_of_array);
}
