/*
You are given an unsorted array of integers. 
Your task is to find the median of the array. 
The median is the middle value in an ordered list of numbers. 
If the list has an even number of elements, the median is the average of the two middle numbers.

Implement a function that returns the median of the array without explicitly sorting the entire array.

Example 1:
arr=[3,2,1,4,5]
Output:3

Example 2:
arr=[7,10,4,3,20,15]
Output:8.5

*/

#include<stdio.h>
int count=0;
int kth_Term(int n,int arr[n],int k){
    
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
    if (count != k){
      kth_Term(n,arr,k);
   }
   else {
      return max;  // If we've reached the k-th largest element, return it
   }
}


int main(){
    int n;
    float Median;
    printf("Enter the number of terms in your array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the terms of your array\n");
    for(int i = 0; i<n; i++){
        int temp;
        scanf("%d",&temp);
        arr[i]=temp;
    }
    if (n%2!=0){
        //odd
        Median=kth_Term(n,arr,(n+1)/2);
        printf("Median of the array is :%0.1f", Median);
    }
    else {
        //even
        int n1,n2;
        n1= kth_Term(n,arr,n/2);
        n2=kth_Term(n,arr,((n/2)+1));
        Median=(n1+n2) /2.0 ;
        printf("Median of the array is :%0.2f", Median);
        
    }
     
}