#include<iostream>

using namespace std;
string catAndMouse(int x, int y, int z) {
    
    int a=abs(z-x);
    int b=abs(z-y);
    if(a > b){
        cout<<"Cat B";
    }
    else if(b > a){
        cout<<"Cat A";
    }
    else{
        cout<<"Mouse C";
    }
    return 0;

}
int main(){
    int n;
    int x,y,z;
    cout<<"enter";
    cin>>n;
    
    for(int i=0;i<n;i++){
        cout<<"enter";
        cin>>x>>y>>z;
        catAndMouse(x,y,z);
    }
    return 0;
}