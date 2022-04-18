#include<stdio.h>
int main(){
    int a1 , a2 ;
    printf("Enter the Size of array 1st : ");
    scanf("%d" , &a1);
    printf("Enter the Size of array 2nd : ");
    scanf("%d" , &a2);
    int ar1[a1] , ar2[a2] , ar3[a1+a2] , i ;
    for( i=0 ; i<a1 ; i++){
        printf("Enter num %d in array 1 : " , i+1);
        scanf("%d" , &ar1[i]);
    }
    for( i=0 ; i<a2 ; i++){
        printf("Enter num %d in array 2 : " , i+1);
        scanf("%d" , &ar2[i]);
    }
    for ( i=0; i<(a1+a2); i++){
        if(i<a1){
            ar3[i] = ar1[i];
        }
        else{
            ar3[i] = ar2[i-a1];
        }
    }
    for(i=0 ; i<a1+a2 ; i++){
        printf("num in array[%d] =%d\n", i,ar3[i]);
    }
    return 0 ;
}
