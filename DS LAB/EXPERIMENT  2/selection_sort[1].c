#include <stdio.h>

void selectionsort(int a[], int n);
int main(){
int i,a[20],n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    printf("Enter the elements in array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    selectionsort(a,n);
    printf("Elements after sorting:\t");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}
    
void selectionsort(int a[],int n){
        int i,j,t,min;
          for(i=0;i<n-1;i++){
              min = i;
              for(j=i+1;j<n;j++){
                  if(a[j] < a[min]){
                     min = j;
                  }           
              }
              t = a[i];
              a[i] = a[min];
              a[min] = t;
          }
}
