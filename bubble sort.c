#include <stdio.h> 
 
int main() 
{ 
  int array[100], a, b, c, tem; 
 
  printf("Enter number of elements\n"); 
  scanf("%d", &a); 
 
  printf("Enter %d integers\n", a); 
 
  for (b = 0; b < a; b++) 
    scanf("%d", &array[b]); 
 
  for (b = 0 ; b < a - 1; b++) 
  { 
    for (c = 0 ; c < a - b - 1; c++) 
    { 
      if (array[c] > array[c+1])  
      { 
        tem       = array[c]; 
        array[c]   = array[c+1]; 
        array[c+1] = tem; 
      } 
    } 
  } 
 
  printf("Sorted list in ascending order:\n"); 
 
  for (b= 0; b < a; b++) 
     printf("%d\n", array[b]); 
 
  return 0; 
} 
 
 