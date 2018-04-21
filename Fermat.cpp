    /* 
     * C++ Program to Implement Fermat Primality Test
     */
    #include <cstring>
    #include <iostream>
    #include <cstdlib>
#include <stdio.h>
    #define ll long long
    using namespace std;
    /* 
     * modular exponentiation
     */
    ll modulo(ll base, ll exponent, ll mod)
    {
        ll Aux = 1;
        while (exponent > 0){
            if (exponent % 2 == 1)
                Aux = (Aux * base) % mod;
                printf("Aux=%lld\n", Aux);

            base = (base * base) % mod;
            printf("Base= %lld\n",base );
            exponent = exponent / 2;
            printf("Esponente %lld\n",exponent );
        }
        return Aux % mod;
    }

    /* 
     * Fermat's test for checking primality 
     */
    bool Fermat(ll PrimeNum, int iterations)
    {
        if (PrimeNum == 1)
            return false;
        
        for (int i = 0; i < iterations; i++)
        {
            ll a = rand() % (PrimeNum - 1) + 1; 

            printf("Modulo de base= %lld exponente=%lld Mod=%lld ===%lld\n",a,PrimeNum-1,PrimeNum,modulo(a, PrimeNum-1, PrimeNum));

            if (modulo(a, PrimeNum - 1, PrimeNum) != 1)
                return false;
        }
        return true;
    }
    /* 
     * Main
     */
    int main()
    {
        int iteration = 2;
        ll num;
        cout<<"Enter integer to test primality: ";
        cin>>num;

        if (Fermat(num, iteration))
            cout<<num<<" is prime"<<endl;
        else
            cout<<num<<" is not prime"<<endl;

        return 0;
    }