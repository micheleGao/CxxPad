#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

bool has0(vector<int> vec)
{
    vector<int>::iterator b;
    b= find(vec.begin(), vec.end(), 0);
    if(b != vec.end())
    {
        return false;
    }
    else
    {
        return true;
    }
};

int main()
{

    vector<int> vec;
    vec.push_back(9);
    vec.push_back(-1);
    vec.push_back(-8);
    vec.push_back(0);
    vec.insert(vec.begin() + 3, 100);

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }

    sort(vec.begin(), vec.end());
    vector<int>::iterator iter = vec.begin();
    while (iter != vec.end())
    {
        cout << *iter << "" << endl;
        ++iter;
    }

    vector<int>::iterator it;
    it = find(vec.begin(), vec.end(), 0);
    if (it != vec.end())
        cout <<"true" << endl;
    else 
        cout << "false" << endl;

    vector<int>::iterator it2;
    it2 = find(vec.begin(), vec.end(), -50);
    if (it2 != vec.end())
        cout <<"true" << endl;
    else 
        cout << "false" << endl;

    random_shuffle(vec.begin(), vec.end());
     for(int val : vec)
        cout << val << "" <<endl;

    return 0;

    cout <<binary_search(vec.begin(), vec.end(), -50) <<endl;
    cout <<binary_search(vec.begin(), vec.end(), 0) <<endl;


    cout << has0(vec) << endl;
}