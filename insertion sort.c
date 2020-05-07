#include<stdio.h>
int main(){
 int i, j, count, tem, num[30];
 printf("Enter how many numbers you want: ");
 scanf("%d",&count);
 printf("Enter %d elements: ", count);
 // This loop would store the input numbers in array
 for(i=0;i<count;i++)
 scanf("%d",&num[i]);
 // Implementation of insertion sort algorithm
 for(i=1;i<count;i++){
 tem=num[i];
 j=i-1;
 while((tem<num[j])&&(j>=0)){
 num[j+1]=num[j];
 j=j-1;
 }
 num[j+1]=tem;
 }
 printf("Order of Sorted elements: ");
 for(i=0;i<count;i++)
 printf(" %d",num[i]);
 return 0;
}