/*
More Optimal Solution:
time complexity :O(n)
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    //initialising array of size n-1
    int arr[n-1],sum=0,actual_sum,missing_number;
    printf("Enter the n-1 integers to be in the array: \n");
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    //actual expected sum
    actual_sum=(n*(n+1))/2;
    missing_number=actual_sum-sum;
    printf("The missing Number is : %d",missing_number);

}