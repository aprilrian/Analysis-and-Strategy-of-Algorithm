#include<bits/stdc++.h>
using namespace std;

string Vegapunk(string a, string b)
{
    int panA = a.size();
    int panB = b.size();
    
    if (panA == 0 || panB == 0)
        return "0";
    
    vector<int> hasil(panA + panB, 0);
    int q = 0;
    int r = 0;
    
    for (int i = panA -1; i >= 0; i--)
    {
        int simpan = 0;
        int nA = a[i] - '0';
        r = 0;
        
        for (int j = panB - 1; j >= 0; j--)
        {
            int nB = b[j] - '0';
            int sum = nA * nB + hasil[q + r] + simpan;
            simpan = sum/10;
            hasil[q + r] = sum % 10;
            r++;
        }
        
        if (simpan > 0)
            hasil[q + r] += simpan;
        q++;
    }
    
    int g = hasil.size() - 1;
    while (g >= 0 && hasil[g] == 0)
        g--;
    
    if (g == -1)
        return "0";
    
    string Vegapunk = "";
    while (g >= 0)
        Vegapunk += to_string(hasil[g--]);
    return Vegapunk;
}

int main()
{
    string a;
    string b;
    getline(cin, a);
    getline(cin, b);
    
    if((a.at(0) == '-' || b.at(0) == '-') && (a.at(0) != '-' || b.at(0) != '-' ))
        cout << "-";
    
    if(a.at(0) == '-')
        a = a.substr(1);
    
    if(b.at(0) == '-')
        b = b.substr(1);
    
    cout << Vegapunk(a, b);
    return 0;
}
