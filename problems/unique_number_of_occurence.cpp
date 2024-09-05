/**
* @file unique_number_of_occurence.cpp
*
* Created on 2024-08-24 at 12:11:32
* @author GabrielCampelo
*/

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


bool solve(vector<int> &arr){
    unordered_map<int, int> map;

    for(int i = 0; i < arr.size(); i++){
        map[arr[i]]++;
    }
    unordered_set<int> s;
    for(auto m : map){
        
        if(s.find(m.first) != s.end()){
            return false;
        }

        s.insert(m.first);
    }
    return true;
}
int main() { _
    vector<int> a = {1, 2, 2, 1, 1, 3};
    bool test = solve(a);

    cout << test << endl;
    return 0;
};