#include <stdio.h>

int main() {
    int n,i,j, temp; // temp for store value of i and j
    int arr[100];
    
    printf("Enter array size: ");
    scanf("%d",&n);

    printf("Array Elements: \n");

    for(i = 0; i<n; i++ ){

        scanf("%d", &arr[i]);
    }

    //ascending order

for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        if(arr[i] > arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

printf("Ascending Order: \n");
for(i =0; i<n; i++){
    printf("%d\n", arr[i]);
}
    

//descending ORder
for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        if(arr[i]< arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] =temp;
        }
    }
}

printf("Descending Order: \n");
for(i =0; i<n; i++){
    printf("%d\n", arr[i]);
}

    //printf("The element is: %d\n", n);
    return 0;
}