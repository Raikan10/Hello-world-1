//
//  midterm.cpp
//  CS 2311 Labs
//
//  Created by Ajay Rajnikanth on 16/10/18.
//  Copyright © 2018 Raikan 10. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,flg1=0,flg2=0,flg3=0,comp;
    cin>>n;
    for(int i=2;i<n/2;i++)
    {
          flg1=0;flg2=0;
        for(int j=1;j<=i;j++)
        {
          
            if((i%j)==0)
            {
                flg1++;
            }
        }
        if(flg1==2)
        {
            comp=n-i;
                for(int j=1;j<=comp;j++)
                {
                    if((comp%j)==0)
                    {
                        flg2++;
                    }
                }
            if(flg2==2)
            {
                cout<<n<<"="<<i<<"+"<<comp<<endl;
                flg3 = 1;
            }
        }
    }
    if(flg3==0)
    {
        cout<<"Cannot be expressed as sum of 2 primes";
    }
}
