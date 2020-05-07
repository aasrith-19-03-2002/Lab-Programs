#include<stdio.h>
int main(){
 int i, j, count, tem, num[30];
 printf("Enter how many numbers you want: ");
 scanf("%d",&count);
 printf("Enter %d elements: ", count);
 // Loop to get the elements stored in array
 for(i=0;i<count;i++)
 scanf("%d",&num[i]);
 // Logic of selection sort algorithm
 for(i=0;i<count;i++){
 for(j=i+1;j<count;j++){
 if(num[i]>num[j]){
 tem=num[i];
 num[i]=num[j];
 num[j]=tem;
 }
 }
 }
 printf("Sorted elements: ");
 for(i=0;i<count;i++)
 printf(" %d",num[i]);
 return 0;
}