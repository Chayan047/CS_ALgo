#include<stdio.h>
void bubble_sort(int array[], int array_size){


for (int i=0;i<array_size;i++){
    int temp=0;
    for (int j=0; j<array_size-i-1;j++){
        if(array[j+1]<array[j])
        {
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
        }

    for(int k=0;k<array_size;k++){
        printf("%d ",array[k]);
            }
        printf("\n");
        }
    printf("\n \n");
    }
}

int main(){
    int n;
    
    printf("Enter number of elements to Sort.\n");
    scanf("%d", &n);
    
    int array[n];
    printf("Enter elements\n");
    for(int k=0;k<n;k++){
        scanf("%d",&array[k]);
    }
    printf("\n");
    bubble_sort(array, n);
    return 0;
}