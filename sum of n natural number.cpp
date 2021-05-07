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

// int sumofnaturalnumber(int n)            //Directly by formula and it will take least time means more efficient one
// {
//     return n * (n+1)/2;
// }


int main()
{
    int n;
    cout<<"Enter N "<<endl;
    cin>>n;
    
    int sum = sumofnaturalnumber(n);
    cout<<"Sum of N natural number : "<<sum;
    return 0;
}
