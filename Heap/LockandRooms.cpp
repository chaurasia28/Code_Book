#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nok;
    int keys;
    vector<bool>b(n,false);
    b[0]=true;
    int flag = 1; // Initialize flag to 0
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> nok;
        for (int j = 0; j < nok; j++) {
            cin >> keys;
            v[i].push_back(keys);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "Vector " << i << ": ";
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            int p = v[i][j];
            b[p] = true;
        }
    }
       for (int k = 0; k < b.size(); k++) {
            if (b[k]==false) {
                flag=0;
                break;
            }
        }
        
    
    if (flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}