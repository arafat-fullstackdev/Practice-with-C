#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int arr[x];

    for(int i =0; i<x; i++) cin>>arr[i];
 
        int gcd;
        gcd = arr[0];
        for(int i =0; i<x; i++){
            int temp;
            temp =1;
            for(int j =1; j<=min(gcd,arr[i]); j++){
                if(arr[i]%j ==0 && arr[i]%j==0){
                    temp=j;
                }
            }

            gcd=temp;
        }
    cout<<"GCD RES:"<<gcd<<endl;

    return 0;
}