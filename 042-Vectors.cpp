#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int com(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{
    //     vector<int> vc;

    //     vc.push_back(1);
    //     vc.push_back(21);
    //     vc.push_back(42);
    //     vc.push_back(17);

    //     for (int i = 0; i < vc.size(); i++)
    //     {

    //         cout << vc[i] << " ";
    //     }
    //     cout << endl;

    //     sort(vc.begin(),vc.end());

    //     vector<int>::iterator it;

    //     for (it = vc.begin(); it < vc.end(); it++)
    //     {

    //         cout << *it << " ";
    //     }
    //     cout << endl;

    //     vector<int> vc2(5, 4);
    //     for (auto ele : vc2)
    //     {
    //         cout << ele << " . ";
    //     }
    //     cout << endl;

    //     vc.pop_back();

    //     for (auto element : vc)
    //     {
    //         cout << element << " ";
    //     }
    //     cout << endl;

    // swap(vc[1],vc2[2]);

    // for(auto ele:vc){
    //     cout<<ele<<" ";
    // }

    // for(auto ele:vc2){
    //     cout<<ele<<" ";
    // }

    // ======================================================================================================================

    /*  Pair   */

    // pair<int, char> pr;

    // pr.first = 32;
    // pr.second = 'H';

    // cout << pr.first << " " << pr.second << endl;

    // =====================================================================================================

    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};

    vector<pair<int, int>> vc;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        vc.push_back(make_pair(arr[i], i));
    }

    sort(vc.begin(), vc.end(), com);

    for (int i = 0; i < vc.size(); i++)
    {
        arr[vc[i].second] = i;
    }

    for (int i = 0; i < vc.size(); i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}