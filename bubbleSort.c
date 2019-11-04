#include"bubbleSort.h"



void swap(float *a,float *b){
    float temp_data;
    temp_data = *a;
    *a = *b;
    *b = temp_data;

    return ;
}

void sort_max(float subarr[],int len_subarr){
    int i;
    for(i=0;i<len_subarr-1;i++){
        if(subarr[i]>subarr[i+1]){
            swap(&(subarr[i]),&(subarr[i+1]));
        }
    }

    return ;
}


void bubble_sort(float arr[],int len_arr){
    int i;
    for(i=len_arr;i>1;i--){
        sort_max(arr,i);
    }

    return ;
}