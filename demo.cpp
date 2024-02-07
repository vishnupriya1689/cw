#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<algorithm>
using namespace std;

void pairdemo()
{
    pair<int, int> p = {1,2};
    cout << "First element \n" << p.first ;
    cout << "Second element \n" << p.second;
    pair<int, pair<int, int>>  p1 = {1, {1,2}};
    cout << p1.first << p1.second.first << p1.second.second;
    cout << "\n";
    pair<int, int> a[] = {{1,2}, {2,5}, {6,7}};
    for(int i=0; i < 3; i++)
    {
        cout << "\n Array of pair" << i;
        cout << a[i].first << a[i].second;
    }
}
void vectordemo()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << "Vector data \n";
    cout << v[0] << v[1];

    //Pair of vectors
    vector<pair<int, int>> vec;

    vec.push_back({5,6});
    //vec.emplace_back({4,8});
   // cout << "Vector pair data" << vec[0];

    //Vector full API's
    vector<int> v1;

    //Fill data in vector
    for(int i=0; i<9; i++)
        v1.push_back(i);
    
    //Iterate over elements in vector
    cout << "\n Elements of vector";
    for(auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }

    //API's
    cout << "\n Front element" << v1.front();
    cout << "\n Last element"  << v1.back();
    cout << "\n Size of vector" << v1.size();
    cout << "\n Deleting last element of vector" << v1[v1.size() - 1];
    v1.pop_back();

    //Iterate over elements in vector after deleting last element
    cout << "Elements of vector";
    for(int k=0;  k < v1.size(); k++)
    {
        cout << v1[k] << " ";
    }

    //Inserting new element at beginning
    v1.insert(v1.begin(), 5);
    cout << "\n First element of vector now" << v1[0];
    //Deleting first element
    v1.erase(v1.begin());
    cout << "\n First element after deleting" << v1[0];

    //Copying one vector to another
    vector<int> v2(3,100);
    v1.insert(v1.begin(), v2.begin(), v2.end());


    //Iterate over elements in vector after copying another vector
    cout << "Elements of vector";
    for(int m=0;  m < v1.size(); m++)
    {
        cout << v1[m] << " ";
    }
    
    //Check if vector is empty
    if(v1.empty())
        cout << "\n Vector is empty";
    else 
        cout << "\n Vector is not empty";
    //Deleting elements of vector
    v1.clear();
    cout << "\n Size of vector after clearing" << v1.size();
    
}
void listdemo()
{
    list<int> ls;
    ls.push_back(5);
    ls.emplace_back(2);
    ls.push_front(3);
    ls.emplace_front(8);
    cout << "\n List elements";
    for(auto it1=ls.begin(); it1!=ls.end(); it1++)
    {
        cout << *it1;
    }
}
void dqdemo()
{
    deque<int> dq;
    dq.push_back(8);
    dq.emplace_back(6);
    dq.push_front(5);
    dq.emplace_front(7);
    cout << "\n DQ";
    for(auto it=dq.begin(); it!=dq.end(); it++)
    {
        cout << *it;
    }
    dq.pop_back();
    cout << "\n DQ after pop back";
    for(auto it=dq.begin(); it!=dq.end(); it++)
    {
        cout << *it;
    }
}

int main()
{
    int x;
    cin >> x;
    cout << "Hey" << x;
    pairdemo();
    vectordemo();
    listdemo();
    dqdemo();
}