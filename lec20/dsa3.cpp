// palindrome
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char name[] = "sir";
    int len = strlen(name);
    int i = 0;
    // int j=len-1;
    while (i < len / 2)
    {
        if (name[i] != name[len - 1 - i])
        {
            cout << "not a palindrome";
            return 0;
        }
        else
        {
            i++;
        }
    }
    cout << "palindrome";
    return 0;
}