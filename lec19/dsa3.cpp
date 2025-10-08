//sliding window
# include <iostream>
using namespace std;

int main(){
    int arr[5]={1,-4,6,7,3};
    int k=3;
    int wSum=0;
    for(int i=0;i<k;i++){
        wSum+=arr[i];
    }
    int maxSum=wSum;
    for(int i=k;i<5;i++){
        wSum+=arr[i]-arr[i-k];
        if(wSum>maxSum){
            maxSum=wSum;
        }
    }
    cout<< maxSum;
}