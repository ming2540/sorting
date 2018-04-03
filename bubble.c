#include<stdio.h>

void bubble_sort(int data[], int data_number){
    int i,j,temp;

    for(i=0 ; i < data_number ; i++){//until done sorting

        for(j=0; j < data_number-1 ; j++){ // for one time
            if(data[j]  > data[j+1]){
                //swap data
                temp = data[j];
                data[j] = data[j+1];
                data[j] = temp;
            }
        }
    }

}


int main(){
    int data[6] = {5,3,4,6,2,7};
    int i,j;

    printf("Unsorted data : ");
    for(i=0 ; i < 6 ; i++){
        printf("%d ",data[i]);
    }
    printf("\n");

    bubble_sort(data , 6);

    printf("Sorted data : ");
    for(i=0 ; i < 6 ; i++){
        printf("%d ",data[i]);
    }
    printf("\n");

    return 0;
}