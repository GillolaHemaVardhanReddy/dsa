#include<bits/stdc++.h>
using namespace std;

bool binary_search_loop(vector<int>& a,int k){
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

// iterative is better than recursive dues to sc

bool binary_search_recursion(vector<int>& a,int k, int i , int j){
    int mid = (i+j)/2;
    if(i>j) return false;
    if(a[mid]==k){
        return true;
    } else if ( a[mid] > k ) {
        binary_search_recursion(a,k,i,mid-1);
    } else {
        binary_search_recursion(a,k,mid+1,j);
    }
}

int main() {
    // code 
    vector<int> a = {1,2,4,8,10};
    cout<<binary_search_loop(a,8);
    cout<<binary_search_recursion(a,3,0,a.size()-1);
    return 0;
}