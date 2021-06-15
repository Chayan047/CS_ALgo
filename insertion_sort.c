#include<stdio.h>
void insertionSort(int array[], int n){

int i;
for(int j=1;j<n;j++)
{

 int key=array[j];
 i=j-1;
 printf("i = %d, j = %d, n = %d,key = %d \n",i,j,n,key);
while (i>-1  && array[i]>key)
{
    array[i+1]=array[i];
    i=i-1;
}
array[i+1]=key;

for(int k=0;k<n;k++){
printf("%d ",array[k]);
}
printf("\n");

}
//return array;
printf("Result Array: \n");
for(int k=0;k<n;k++){
printf("%d ",array[k]);
}
}

void main(){
    int array_size;
    printf("Enter array size to sort");
    scanf("%d",&array_size);
    int array[array_size];
    printf("Enter the numbers");
    for(int i=0;i<array_size;i++){
        scanf("%d",&array[i]);
    }
    insertionSort(array,array_size);
}
