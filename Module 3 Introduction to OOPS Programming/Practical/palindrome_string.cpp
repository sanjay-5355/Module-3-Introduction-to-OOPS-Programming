
#include <iostream>
#include <string.h>  
using namespace std;

int main()
{
    char str[50];

    cout<<"Enter a string: \n";
    cin>>str;

    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - i - 1]) 
        {
            printf("The string is not a palindrome.\n");
            return 0;
        }
    }
        printf("The string is a palindrome.\n");

}
