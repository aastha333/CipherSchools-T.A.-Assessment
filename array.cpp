#include <bits/stdc++.h>
using namespace std;

void array(int N)
{
    for (int i = 1; i <= N / 2; i++) {
        cout << i << ", " << -i << ", ";
    }
    if (N % 2 == 1)
        cout << 0;
}
int main()
{
    int N;
    cin>>N;
    array(N);
}