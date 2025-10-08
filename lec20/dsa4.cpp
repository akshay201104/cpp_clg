// print duplicate character
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char name[] = "madam";
    int len = strlen(name);
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (name[i] == name[j])
            {
                cout << name[i] << endl;
            }
        }
    }
    return 0;
}