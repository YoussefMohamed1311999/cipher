#include <iostream>

using namespace std;

float sqroot(float s)
{
    int pSq = 0;
    int N = 0;

    for (int i = static_cast<int>(s); i > 0; i--)
    {
        for (int j = 1; j < i; j++)
        {
            if (j*j == i)
            {
                pSq = i;
                N = j;
                break;
            }
        }
        if (pSq > 0)
            break;
    }

    float d = s - pSq;
    float P = d/(2.0*N);
    float A = N+P;
    float sqrt_of_s = A-((P*P)/(2.0*A));
    return sqrt_of_s;
}
int main()
{
    float num ;
    cout<<" enter a number : \n";
    cin>>num;
    if (num < 0){
        cout<<"square root of "<<num<<" is non-existent \n";
        cin>>num;
    }
    if (num==1 ){
        cout<<" square root of 1 is = "<<1<<endl;
    }
    if (num==0){
        cout<<" square root of 0 is = "<<1<<endl;
    }
    else {
    float sqroot_of_num = sqroot(num);
    std::cout << "Square root of  "<<num<<" = "<<sqroot_of_num;
    }
    return 0;
}
