#  include <iostream>
using namespace std;
int main(){
    int n;
    cout << "enter size of array :";
    cin >> n;
    int arr[n];
    cout << "enter elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k=3;
    int wsum=0;
    for(int i=0;i<k;i++){
         wsum+=arr[i];
    }
    int maxsum=wsum;
    for(int i=k;i<n;i++){
        wsum=wsum+arr[i]+arr[i-k];
        if(wsum>maxsum){
            maxsum=wsum;
        }
    }
    cout << "maxsum== " << maxsum << endl;
}