#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> add(vector<int>a,vector<int>b){
    if(a.size()<b.size()){
        return add(b,a);
    }
    vector<int> c;
    int t = 0;
    for(int i = 0; i<a.size(); i++){
        t += a[i];
        if(i<b.size()){
            t += b[i];
        }
        c.push_back(t%10);
        t /= 10;
    }
    if(t != 0){
        c.push_back(t);
    }
    return c;
}

vector<int> mul(vector<int> a,vector<int> b){
    vector<int> c (a.size()+b.size());
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < b.size(); j++){
            c[i+j] += a[i]*b[j];
            c[i+j+1] += c[i+j]/10;
            c[i+j] %= 10;
        }
    }
    while (c.size() > 1 && c.back() == 0){
        c.pop_back();
    }
    return c;
}

vector<int> fact(int n){
    vector<int> a = {1};
    vector<int> b = {1};
    for(int i = 1; i <=n ;i++){
        b = mul(a,b);
        a = add(a,{1});
    }
    return b;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ans = {0};
    for(int i = 1; i<=n; i++){
        ans = add(ans,fact(i));
    }
    // cout << ans.size() << endl;
    for(int i = ans.size()-1;i>=0;i--){
        cout<<ans[i];
    }
}
