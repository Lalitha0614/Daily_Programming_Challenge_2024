/*

DAY 1 : 09_09_2024

Problem: Sort an Array of 0s, 1s, and 2s
You are given an array arr consisting only of 0s, 1s, and 2s. 
The task is to sort the array in increasing order in linear time (i.e., O(n)) without using any extra space. 
This means you need to rearrange the array in-place.

Input :
An integer array arr of size n where each element is either 0, 1, or 2.
Example : arr = [0, 1, 2, 1, 0, 2, 1, 0]

Output :
The sorted array, arranged in increasing order of 0s, 1s, and 2s.
Example: [0, 0, 0, 1, 1, 1, 2, 2]

*/

#include<stdio.h>
void sort(int n,int arr[n]){
    int i,j;
    int key;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }   
}


int main(){
    int n;
    printf("Enter the number of terms in your array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the terms of your array [0s, 1s or 2s]\n");
    for(int i = 0; i<n; i++){
        int temp;
        scanf("%d",&temp);
        arr[i]=temp;
    }
    sort(n,arr);
    printf("[ ");
    for(int i = 0; i<n; i++){
        if (i==n-1){
            printf("%d",arr[i]);
        }
        else{
        printf("%d,",arr[i]);
        }
    }
    printf("] ");

}
