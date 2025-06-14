 #include<stdio.h>
 int main(){
 int arr[5]={1,2,3,4,5};
 int brr[5];
 for(int i=4,j=0;i>=0,j<5;i--,j++){
    brr[j]=arr[i];
 }
 for (int i=0;i<5;i++){
    printf("The %dth element is %d\n",i+1,brr[i]);
 }
 return 0;
 }
