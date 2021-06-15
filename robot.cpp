#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count[n];
    int f=0;
    int amount_customer_have;
    cin>>amount_customer_have;
    for(int i=0;i<n;i++){
        if(arr[i]==amount_customer_have){
            count[f++]=amount_customer_have;
        }
        else if(arr[i]<amount_customer_have){
            count[f++]=arr[i];
            amount_customer_have=amount_customer_have-arr[i];
        }
    }
    for(int i=0;i<f;i++){
        cout<<count[i]<<" ";
    }
}