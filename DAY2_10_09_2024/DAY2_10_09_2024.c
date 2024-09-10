/*

DAY2_ 10_09_2024

Problem: Find the missing number
You are given an array arr containing n-1 distinct integers. 
The array consists of integers taken from the range 1 to n, 
meaning one integer is missing from this sequence. 
Your task is to find the missing integer.

Input :
An integer array arr of size n-1 where the elements are distinct and taken from the range 1 to n.
Example : arr = [1, 2, 4, 5]

Output :
Return the missing integer from the array.
Example: Missing Number : 3
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    //initialising array of size n-1
    int arr[n-1];
    printf("Enter the n-1 integers to be in the array: \n");
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
   
    printf("Finding the missing integer --------------\n");
    for(int i=1;i<n+1;i++){
        int count=0;
        for(int j=0;j<n-1;j++){
            if (i==arr[j]){
                count++;
            }
        }
        if(count==0){
            printf("The missing integer in the array is %d", i);
        }
    }

}


