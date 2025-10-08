// copy a string
# include <iostream>
using namespace std;
int main(){
    char name[]="Akshay";
    char data[10];
    int i=0;
    while(name[i]!='\0'){
        data[i]=name[i];
        i++;
    }

    data[i]='\0';
    cout<<"Real : "<<name<<endl;
    cout<<"Copy : "<<data;
    return 0;
}