/*Problem Statement: 
Given an array arr[] of size N which contains elements from 0 to N-1, you need to
find all the elements occurring more than once in the given array.
Input:
Array Size =5
Element 1=2
Element 2=3
Element 3=1
Element 4=2
Element 5=3
Output:
Number 2 and 3 in array occur more than once.
Note: You cannot utilize nested loops.
*/

#include<stdio.h>
int main(){
    int a,i,z;
    printf("Enter the number of terms: ");
    scanf("%d",&a);
    int arr[a];
    int arr2[1000000]={0};
    for(i=0;i<a;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++){
        z=arr[i];
        arr2[z]++;
    }
    for(i=0;i<1000000;i++){
      if(arr2[i]>1){
        printf("%d, ",i);
      }
    }
    printf("occur in array more than once");
    return 0;
}