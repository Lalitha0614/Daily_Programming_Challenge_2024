/*

Problem : Find the Leaders in an Array
You are given an integer array arr of size n. An element is considered a leader if it is greater than all the elements to its right. Your task is to find all such leader elements in the array.

Input :
An integer array arr of size n.
Example : 
arr = [16, 17, 4, 3, 5, 2]

Output :
Return an array containing all the leader elements in the order in which they appear in the original array.
Example:
Leaders: [17, 5, 2]

*/

#include <stdio.h>
int leader(int arr[], int n){
   printf("[");
   for(int i=0; i<n; i++){
      int count=0;
      for(int j=i+1; j<n; j++){
         if(arr[j]<arr[i]){
            count++;
         } 
      }
      if(count == (n-(i+1))&& i!=n-1){
         printf("%d,",arr[i]);
      }
      else if (i==n-1){
         printf("%d]",arr[i]);
      }

   }
}
void main(){
   int arr[] ={16,17,4,3,5,2};
   int n = sizeof(arr)/sizeof(arr[0]);
   leader(arr,n);
}