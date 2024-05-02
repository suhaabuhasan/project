#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

 unsigned long long itrrFact (unsigned long long n)
 {   unsigned long long f=1;
    for(int i=2;i<=n;i++)
        f*=i;
    return f;
}
 unsigned long long recFact(unsigned long long n)
{
    if (n==0)
    return 1;
    return n*recFact(n-1);
}

int main()
{   unsigned long long val;
    for(int i = 5; i <= 65; i+=5){


    auto start = high_resolution_clock::now();

    val = recFact(i);

    auto stop = high_resolution_clock::now();


    auto duration = duration_cast<microseconds>(stop - start);

    cout << "fact(" << i << ")= " << val << endl;
    cout << "Time is taken by rec function: "
        << duration.count() << " microseconds" << endl;

    /*-------------------------------------------------------------------------------------------*/

    start = high_resolution_clock::now();

    val = itrrFact(i);

    stop = high_resolution_clock::now();


    duration = duration_cast<microseconds>(stop - start);

    cout << "fact(" << i << ")= " << val << endl;
    cout << "Time is taken by itrr function: "
        << duration.count() << " microseconds" << endl;

         cout << "////////////////////////////////////////////" << endl;
    }

}

