#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
 
int main()
{
    vector<int> nums (10);

    // for(int i=0; i<20; i = i + 2)
    // {
    //     nums.push_back(i);
    //     nums.push_back(i);
    // }

    for(auto i: nums)
        cout << i << " ";
    cout << endl << endl;

    // vector<int>::iterator it = find(nums.begin(), nums.end(), 10);
    // // nums.erase(remove(nums.begin(), nums.end(), 14), nums.end());

    // if(it != nums.end())
    // {
    //     // boots.erase(remove(boots.begin(), boots.end(), aux2), boots.end());
    //     nums.erase(it);
    //     // pairs++;
    // }

    // for(auto i: nums)
    //     cout << i << " ";
    // cout << endl << endl;    

    return 0;
}