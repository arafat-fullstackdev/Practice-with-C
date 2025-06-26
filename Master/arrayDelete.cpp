#include <iostream>


int main() {
    
    int x;
    std:: cin>>x;
    int arr[x], ans[x];
    int j =0;

    for(int i =0; i<x; i++) std:: cin>>arr[i];

    int num;
    std:: cin>>num;

    for(int i =0; i<x; i++){
        if(arr[i]!=num){
            ans[j] =arr[i];
            j++;
        }
    }

    // Prints the elements of the 'ans' array
    // The loop iterates up to 'j', which is the actual number of elements
    // in the 'ans' array after deletion.
    for (int i = 0; i < j; i++) {
        std::cout << ans[i] << " ";
    }
    std::cout << std::endl; // For a new line at the end
    return 0;
};