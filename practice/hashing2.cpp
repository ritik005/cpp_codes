#include<iostream>
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main() {
    unordered_map <string, int> mymap;
    mymap["mango"]=100;
    mymap["grapes"]=101;
    mymap["orange"]=102;
    mymap["apple"]=103;

    for(auto node:mymap)
    {
        cout << node.first << "," << node.second;
    }
    return 0;
}