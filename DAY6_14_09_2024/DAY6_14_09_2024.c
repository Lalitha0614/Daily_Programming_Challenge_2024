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
int main(){
    int arr[]={1,2,-3,3,-1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("[");
    for (int i=0;i<n;i++){
        int sum=arr[i];
        for(int j=i+1;j<n;j++){
            sum=sum+arr[j];
            if(sum==0){
                printf("(%d , %d) ",i,j);
            }
        }
    }
    printf("]");
}