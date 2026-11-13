#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,k,i=0,taim=0;
    cin>>n>>k;
    int c=k-240;
    if(c<0){
        c*=-1;
    }
    while(taim<=c){
        i++;
        taim+=(5*i);

    }

    if(i==n||i<n){
      cout<<i-1;
    }
    else{
        cout<<n;
    }

    return 0;
}
