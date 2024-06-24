#include<bits/stdc++.h>
using namespace std;

bool binary_search(vector<int>& a,int k){
    int i = 0 , n = a.size() , j = n - 1 ;
    sort(a.begin(),a.end());
    while( i <= j ) {
        int mid = (i+j)/2 ;
        if( a[mid] == k ){
            return true;
        } else if ( a[mid] < k ) {
            i = mid + 1 ;
        } else {
            j = mid - 1 ;
        }
    }
    return false ;
}

int main() {
    // code 
    vector<int> a = {1,2,4,8,10};
    cout<<binary_search(a,8);
    return 0;
}