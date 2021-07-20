#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    //     string st = "ajfhgakfj";

    //     for (int i = 0; i < st.length(); i++)
    //     {
    //         if (st[i] >= 'a' && st[i] < +'z')
    //         {

    //             st[i] = st[i] - 32;
    //         }
    //     }

    //     cout << st << endl;

    //     for (int i = 0; i < st.length(); i++)
    //     {
    //         if (st[i] >= 'A' && st[i] < +'Z')
    //         {

    //             st[i] += 32;
    //         }
    //     }

    // cout<<st<<endl;

    // transform(st.begin(),st.end(),st.begin(),::toupper);

    // ==========================================================

    // string no="9028109222";

    // sort(no.begin(),no.end(),greater<int>());

    // cout<<no<<endl;

    // =========================================================

    string strr = "rgreaogjiareerrrrrb";

    int arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < strr.size(); i++)
    {

        // int x = strr[i] - 'a' + 1;
        // arr[x] += 1;
        arr[strr[i]-'a']++;
    }
    int m = 0;
    char ch='a';

    for (int i = 0; i < 26; i++)
    {

        if (arr[i] > m)
        {
            m = arr[i];
             ch=i+'a';
        }
    }
    
   

    cout << m <<" "<<ch<< endl;

    return 0;
}