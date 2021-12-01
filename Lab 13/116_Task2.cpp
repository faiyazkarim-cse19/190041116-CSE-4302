#include <bits/stdc++.h>
using namespace std;

namespace my_namespace
{
    float x = 10.2;
}

namespace my_namespace1
{
    double x = 20.22222;
}

int main()
{
    int x = 5;
    cout<<x<<endl;
    cout<<my_namespace::x<<endl;
    cout<<my_namespace1::x<<endl;
}
