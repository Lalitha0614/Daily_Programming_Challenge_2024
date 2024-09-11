/*
Problem: Find the duplicate number
You are given an array arr containing n+1 integers, where each integer is in the range [1, n] inclusive. 
There is exactly one duplicate number in the array, but it may appear more than once. 
Your task is to find the duplicate number without modifying the array and using constant extra space.
Input :
An integer array arr of size n+1, where each element is an integer in the range [1, n].
Example : arr = [3, 1, 3, 4, 2]

Output :
Return the duplicate integer present in the array.
Example: Duplicate Number : 3

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    //initialising array of size n+1
    int arr[n-1],calculated_sum=0,actual_sum,duplicate_number;
    printf("Enter the n+1 integers to be in the array [with one number repeated]: \n");
    for(int i=0;i<n+1;i++){
        scanf("%d",&arr[i]);
        calculated_sum=calculated_sum+arr[i];
    }

    //actual expected sum
    actual_sum=(n*(n+1))/2;
    duplicate_number=calculated_sum-actual_sum;
    printf("The Duplicate Number is : %d",duplicate_number);

}