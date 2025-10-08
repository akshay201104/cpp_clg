//strings traverse
//print forward and backward
# include <iostream>
# include <cstring>
using namespace std;
int main(){
    char name[]="Akshay";
    
    int len= strlen(name);
    int i=len;
    while(i>=0){
        cout<<name[i];
        i--;
    }
    // cout<<len;
    return 0;
}