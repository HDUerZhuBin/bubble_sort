#include<stdio.h>
#include"bubbleSort.h"

int main(){
    float test_arr[] = {5,8,7,4,3,4,92,4,3};
    printf("before sorting:\n");
    int len_arr = sizeof(test_arr)/sizeof(test_arr[0]);

    int i;
    for(i=0;i<len_arr;i++){
        printf("%f;",test_arr[i]);
    }
    
    printf("\n********this is just a split line**********\n");

    bubble_sort(test_arr,len_arr);
    printf("after sorting:\n");
        for(i=0;i<len_arr;i++){
        printf("%f;",test_arr[i]);
    }

    return 0;

}