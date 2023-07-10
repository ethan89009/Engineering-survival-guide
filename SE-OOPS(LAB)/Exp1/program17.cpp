//to find the median of an array

# include<iostream>
using namespace std;
int main()
{
    int n,a[10],i;
    cout<<"Enter size of array \n";
    cin>>n;
    cout<<"Enter elements of array\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    float median;
    if (n % 2)
    {
        median = a[n / 2];
    }
    else
    {
        median = (a[(n / 2) - 1] + a[(n / 2)]) / 2.;
    }
    cout << "median: " << median;
    return 0;
}
