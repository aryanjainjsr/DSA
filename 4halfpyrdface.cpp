#include<iostream>
using namespace std;
    int main()
    {
        int n;
        cout<<"enter";
        cin>>n;
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n;j++){
                if(j<i){
                    cout<<" ";
                }
                else
                    cout<<"*";
            }
            cout<<endl;
        }

    }