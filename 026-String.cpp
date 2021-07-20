#include <iostream>
#include <algorithm> 
#include <string>
using namespace std;

int main()
{

    // String declaring method *************************************

    // string str;
    // //  cin>>str;
    // getline(cin, str);

    // string str1(5, 'C');
    // string str2 = "My name is shakti chaudhary ";

    // cout << str << endl;
    // cout << str1 << endl;
    // cout << str2 << endl;

    // String Methods ============================================>>>>

    // string s1 = "fam";
    // string s2 = "ily";

    // // s1.append(s2);
    // // cout << s1 << endl;

    // cout << s1 + s2 << endl;
    // cout << s1[2] << endl;

    // string s1 = "abc";
    // string s2 = "abc";

    // if ( !s2.compare(s1))
    // {
    //     cout<<"Strings are equal "<<endl;
    // }
    // cout << s2.compare(s1) << endl; /*  Error..  */

    string s1 = "Xyrec";
    string s2 = "abcww";
    // s1.clear();
    // cout << "S1 clear function is called s1 + s2 : " << s1 + s2 << endl;

    // if (s1.empty())
    // {
    //     cout<<"S1 string is empty using empty function "<<endl;
    // }

    // cout << s1.size() << endl;
    cout << s1.length() << endl;

    s1.erase(2, 2);
    s1.insert(2, "<=hey=>");
    cout << s1 << endl;

    for (int i = 0; i < s1.length(); i++)
    {
        cout << s1[i] << " ";
    }

    cout << endl;
    string s = "ejrfjsoieenek";
    string sb = s.substr(3, 4);
    cout << sb << endl;

    string si="6789";
    int x=stoi(si);
    cout<<x<<endl; 
    cout<<to_string(x)+"100"<<endl;

    sort(s.begin(),s.end());
    cout<<s<<endl;  

    return 0;
}