/*

Problem : Find All Subarrays with Zero Sum
You are given an integer array arr of size n. 
Your task is to find all the subarrays whose elements sum up to zero. 
A subarray is defined as a contiguous part of the array, and you must return the starting and ending indices of each subarray.

Input :
An integer array arr of size n where n represents the number of elements in the array.
Example : 
Input: [1, 2, -3, 3, -1, 2]

Output :
- Return a list of tuples, where each tuple contains two integers. The starting index (0-based) of the subarray.
   The ending index (0-based) of the subarray.
- The output should list all subarrays that sum to zero. If no such subarrays are found, return an empty list.
Example
Output: [(0, 2), (1, 3)]

*/
#include<stdio.h>

typedef struct{
    int start_index;
    int end_index;
}tuple;

int main(){
    int arr[]={1,2,-3,3,-1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    tuple index[100];
    int tuple_counter=0;
    for (int i=0;i<n;i++){
        int sum=arr[i];
        for(int j=i+1;j<n;j++){
            sum=sum+arr[j];
            if(sum==0){
                index[tuple_counter].start_index=i;
                index[tuple_counter].end_index=j;
                tuple_counter++;
            }
        }
    }
    printf("[");
    for(int i=0;i<tuple_counter;i++){
        if(i>0){
            printf(", ");
        }
        printf("(%d, %d)",index[i].start_index,index[i].end_index);
    }
    printf("]");
    if(tuple_counter==0){
        printf("[ ]");
    }
}