//
//  main.c
//  SS16 Bai3
//
//  Created by Little Chick on 30/03/2022.
//

#include <stdio.h>
void reverse(int arr[], int size)
{
    int i;
    printf("Array alements are:\n");
    for(i=0;i<size;i++)
    {
        printf("Number %d: %d\n",i+1,arr[i]);
    }
    printf("Reverse Array are:\n");
    for(i=size-1;i>=0;i--)
    {
        printf("Number %d: %d\n",i+1,arr[i]);
    }
}

int main(int argc, const char * argv[]) {
    int arr[5],i;
    
    for(i=0;i<5;i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr, 5);
    return 0;
}
