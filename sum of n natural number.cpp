#include <iostream>

using namespace std;

int sumofnaturalnumber(int n)
{
    int sum = 0;
    for(int i = 0; i <= n; i++)
    {
        sum += i;
    }
    
    return sum;
}

int main()
{
    int n;
    cout<<"Enter N "<<endl;
    cin>>n;
    
    int sum = sumofnaturalnumber(n);
    cout<<"Sum of N natural number : "<<sum;
    return 0;
}
