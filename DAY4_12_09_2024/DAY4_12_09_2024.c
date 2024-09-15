/*
Problem : Merge Two Sorted Arrays
You are given two sorted arrays arr1 of size m and arr2 of size n.
 Your task is to merge these two arrays into a single sorted array without using any extra space (i.e., in-place merging). 
 The elements in arr1 should be merged first, followed by the elements of arr2, resulting in both arrays being
 sorted after the merge.

Input :
Two sorted integer arrays arr1 of size m and arr2 of size n.
Example : 
arr1 = [1, 3, 5, 7]
arr2 = [2, 4, 6, 8]

Output :
Both arr1 and arr2 should be sorted after the merge. Since you cannot use extra space, the final result will be reflected in arr1 and arr2.
Example:
arr1 = [1, 2, 3, 4]
arr2 = [5, 6, 7, 8]

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

void merge(int arr1[],int arr2[],int m,int n){
    while(arr1[n-1]>arr2[0]){
        int temp=arr2[0];
        arr2[0]=arr1[n-1];
        arr1[n-1]=temp;
        sort(m,arr1);
        sort(n,arr2);
    }
}

int main(){
    int arr1[]={1, 3, 5, 7};
    int arr2[]={2, 4, 6, 8};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    merge(arr1,arr2,m,n);
    printf("Sorted array 1 : \n[");
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    printf("]");
    printf("\n");
    printf("Sorted array 2 : \n[");
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    printf("]");
}