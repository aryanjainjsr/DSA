#include<iostream>
using namespace std;
    int main(){
        int n,a=0;
        cout<<"enter";
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i>=j){
                    cout<<a;
                    a++;
                }
                else
                    cout<<" ";
            }
            cout<<endl;

        }
    }