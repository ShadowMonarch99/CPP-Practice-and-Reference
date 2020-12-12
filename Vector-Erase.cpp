#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    int n,number,i=1,q1,q2,q3;
    cin>>n;
    while(i<=n){
        cin>>number;
    v.push_back(number);
    i++;}
    cin>>q1;
    if(q1< v.size() )
    v.erase(v.begin()+q1-1);
    cin>>q2>>q3;
    if(q2 < q3   &&    q2 < v.size())
    v.erase(v.begin()+q2-1,v.begin()+q3-1); 
    cout << v.size() << endl;
    i=0;
    for(auto i:v)
    cout<<i<<' ';
    return 0;
}
