//2D -> 1D
# include <iostream>
using namespace std;

int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr[9];
    int k=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[k]=a[i][j];
            k++;
        }
    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}