#include <stdio.h> 
  
void main() 
{ 
    int heap[10], a, i, j, c, root, tem; 
  
    printf("\n Enter number of elements :"); 
    scanf("%d", &a); 
    printf("\n Enter the numbers : "); 
    for (i = 0; i < a; i++) 
       scanf("%d", &heap[i]); 
    for (i = 1; i < a; i++) 
    { 
        c = i; 
        do 
        { 
            root = (c - 1) / 2;              
            if (heap[root] < heap[c])    
            { 
                tem = heap[root]; 
                heap[root] = heap[c]; 
                heap[c] = tem; 
            } 
            c = root; 
        } while (c != 0); 
    } 
  
    printf("Heap array : "); 
    for (i = 0; i < a; i++) 
        printf("%d\t ", heap[i]); 
    for (j = h - 1; j >= 0; j--) 
    { 
        tem = heap[0]; 
        heap[0] = heap[j];     
        heap[j] = tem; 
        root = 0; 
        do  
        { 
            c = 2 * root + 1;    /* left node of root element */ 
            if ((heap[c] < heap[c + 1]) && c < j-1) 
                c++; 
            if (heap[root]<heap[c] && c<j)    
            { 
                tem = heap[root]; 
                heap[root] = heap[c]; 
                heap[c] = tem; 
            } 
            root = c; 
        } while (c < j); 
    ;} 
    printf("\n The sorted array is : "); 
    for (i = 0; i < a; i++) 
       printf("\t %d", heap[i]); 