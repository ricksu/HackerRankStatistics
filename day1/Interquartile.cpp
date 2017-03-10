#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double median(vector<int> a) {
    int n = a.size();
    
    double m = (double)a[n / 2];
    
    if (! (n & 1)) {
        m += a[n / 2 - 1];
        m /= 2;
    }
    
    return m;
}

void inputVector(vector<int>& v){
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
}

double Q1(vector<int>& a) {
    int n = a.size();
    vector<int> l;
    if (n & 1) {
        for (int i = 0; i < (n / 2); i++) {
            l.push_back(a[i]);
        }
        

    } else {
        for (int i = 0; i < (n / 2); i++) {
            l.push_back(a[i]);
        }
    }
    return median(l);
}

double Q3(vector<int> &a) {
    int n = a.size();
    vector<int> u;
    if (n & 1) {
       
        for (int i = (n / 2) + 1; i < n; i++) {
            u.push_back(a[i]);
        }
    } else {
       
        for (int i = (n / 2); i < n; i++) {
            u.push_back(a[i]);
        }
    }
    return median(u);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    cin >> N;
    vector<int> d(N);
    vector<int> F(N);
    vector<int> S;
    
    inputVector(d);
    inputVector(F);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < F[i]; j++) {
            S.push_back(d[i]);
        }
    }
    sort(S.begin(), S.end());
    double q1 = Q1(S);
    double q3 = Q3(S);
    cout << std::setprecision(1)<<fixed<<(q3 - q1)<<endl;

    return 0;
}

