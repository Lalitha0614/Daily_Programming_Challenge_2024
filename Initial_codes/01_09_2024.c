/*

DATE : 01_09_2024

You are given an unsorted array of integers and a positive integer K. 
Your task is to find the Kth largest element in the array. 
The Kth largest element is the element that would appear in the Kth position if the array were sorted in descending order.

You need to implement a function that returns this Kth largest element without explicitly sorting the entire array.

Example
arr = [3, 2, 1, 5, 6, 4]
k = 2
Output: 5
*/

#include<stdio.h>

int kth_largest_Term(int n,int arr[n],int k){
    int count=0;

    while(count!=k){
        int max=arr[0];
        for(int i=0;i<n;i++){
        //finding max
            if(arr[i]>max){
                max=arr[i];
            }
        }
       
        count++;
        for (int i = 0; i<n; i++){
            if(arr[i] == max){
            arr[i] = 0;
            }
        }
        if (count==k){
            printf("The kth largest term of the array is: %d",max);
            return max;
            break;
        }      
    }
}

int main(){
    int n;
    printf("Enter the number of terms in your array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the terms of your array\n");
    for(int i = 0; i<n; i++){
        int temp;
        scanf("%d",&temp);
        arr[i]=temp;
    }
    int k;
    printf("Enter the value of k, the kth largest term you want\n");
    scanf("%d",&k);
    //int arr[]={3,2,1,5,6,4};
    kth_largest_Term(n,arr,k);
  
}