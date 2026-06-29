#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>> a>> b;
        long long reminder;
        reminder= a%b;
        if (reminder==0)
            cout<< 0 <<endl;
            else
            cout<< b-reminder<<endl;
        
    }
    return 0;
}