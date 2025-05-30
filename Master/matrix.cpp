#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];

    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int mx = -1;
    int mn = INT_MAX;

     for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
        if(mx<arr[i][j]){
            mx = arr[i][j];
        }
        if(mn>arr[i][j]){
            mn = arr[i][j];
        }
        
    }

    }

    cout<<mx<<""<<endl;
    cout<<mn<<""<<endl;

    
    return 0;
}