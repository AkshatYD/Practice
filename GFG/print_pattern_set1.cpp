#include <bits/stdc++.h>
using namespace std;

void printPat(int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
    printPat(n);
    cout<<endl;
	}
}

void printPat(int n)
{
    int i=n;
    for (i = n; i >= 1; i--) {
        for (int j = n; j < i|| j==i; j--) {
            for (int k = 1; k <= i; k++) {
                cout << j << " ";
            }
        }
        cout << "$";
    }
}
