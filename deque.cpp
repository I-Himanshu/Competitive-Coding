#include <iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> d;
    d.push_back(8);
    d.push_back(45);
    d.push_front(4);
    cout<<d.at(1)<<endl;
    cout<<d.empty()<<endl;
    cout<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<d.size()<<endl;
    for(int i:d)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}