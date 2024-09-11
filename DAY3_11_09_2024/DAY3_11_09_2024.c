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
    int arr[n+1],duplicate_number;

     //initialising frequency array
    int frequency[n];
    for(int i=0;i<n;i++){
        frequency[i]=0;
    }

    //creating array
    printf("Enter the n+1 integers to be in the array [with one number repeated]: \n");
    for(int i=0;i<n+1;i++){
        scanf("%d",&arr[i]);
        frequency[arr[i]-1]++;
    }

    for(int i=0;i<n;i++){
        if(frequency[i]>1){
            duplicate_number=i+1;
            printf("The Duplicate Number is : %d",duplicate_number);
        }
    }
}