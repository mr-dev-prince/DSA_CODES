#include<iostream>
using namespace std;

int duplicateInArray(int arr[], int n){

    int ans =0;
    
    for(int i=0; i<n; i++){
        ans = ans^arr[i];

        cout<<ans<<endl;
    }

    for(int i = 1; i<n; i++){
        ans = ans^i;

        cout<<ans<<endl;
    }
    
    return ans;
}

int main()
{
    int arr[5] = {1,2,3,2,4};

    cout<<duplicateInArray(arr , 5);
    
    return 0;
}