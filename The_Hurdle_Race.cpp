#include<bits/stdc++.h>
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int max = 0;
    int arr[n];
    int i;
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(max < arr[i])
        max = arr[i];
    }
    int p = max - k;
    if(p < 0)
    {
        cout << "0";
    }
    else {
    cout << p ;
    }
        
   return 0;
    
}
