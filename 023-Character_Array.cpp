#include <iostream>
#include <cstring>
using namespace std;

int checkPalindrome(char arr[])
{
    int n = strlen(arr);
    cout << n << endl;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] != arr[n - 1 - i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{

    // char arr[100] = "apple is here ";
    // int i = 0;

    // int n;
    // cin>>n;
    // char arr2[n+1];

    // while (arr[i] != '\0')
    // {

    //     cout << arr[i];
    //     i++;
    // }

    // cout << endl;

    // Checking Word is palindrome or not ****************************************

    // char arr2[100];
    // cin >> arr2;

    // int ans = checkPalindrome(arr2);

    // if (ans)
    // {
    //     cout << "The word is palindrome " << endl;
    // }
    // else
    // {
    //     cout << "The word is not a palindrome " << endl;
    // }

    // Largest word in a sentence    ********************************************

    int n = 20;
    cin >> n;
    cin.ignore();
    char arr[n];
    cin.getline(arr, n);
    // cin.ignore();

    int i = 0;

    int stlen = 0;
    int maxlen = 0;
    int stp = 0;
    int ept = 0;

    cout << arr << endl;

    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (maxlen > stlen)
            {
                stlen = maxlen;
                ept = stp;
            }
            maxlen = 0;
            stp = i + 1;
        }
        else
            maxlen++;

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }
    cout << stlen << endl;

    for (int i = 0; i < stlen; i++)
    {

        cout << arr[i + ept];
    }
    cout<<endl; 

    return 0;
}