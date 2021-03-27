#include <iostream>
#include <vector>
using namespace std;
int main()
{
    double previ;

    string s;
    //cin >> s;
    char c;
    
    while ((cin >> c) and c != ',');
    cin >> previ;
    
    if (previ > 0) cout << 1 << endl;
    else cout << 0 << endl;
    
    double d;
    while (cin >> c)
    {
        while ((cin >> c) and c != ',');
        cin >> d;
        
        //cout << "previ " << previ << " d " << d << endl;
        if (d > previ) cout << 1 << endl;
        else cout << 0 << endl;
        previ = d;
    }
    
    
}
