/*Problem Statement:  
Write a C program to generate the following pattern:
1
1 2
1 2 3
1 2 3 4
*/

#include<stdio.h>
int main(){
    int n,i,j; 
    printf("Enter the Ending Number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%d ",j+1);
        }
        printf("\n");
    }
    return 0;
}