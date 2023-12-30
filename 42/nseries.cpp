//Printing
#include <iostream>

using namespace std;

int main(){

    int n , p = 0 , q = 0 ;
    float sum = 1;
    char opr = '+';

    cout<<"Number you want series till : \n";
    cin>>n;

    while(n>0)
    {
        for(int i = 1 ; i <= n ; i++)
        {
            if(i == 1)
            {
                cout<<"\n\n1 - ";
            }
            else
            {
                p = 1;
                if(i % 2 == 0)
                {
                    opr = '+';
                }
                else 
                {
                    opr = '-';
                }
                q = i;

                if(i == n)
                {
                    if(opr == '-'){
                        cout<<p<<"/"<<q<<" = "<<sum+(float(p)/float(q))<<"\n\n";
                        return 0;
                    }
                    else{
                        cout<<p<<"/"<<q<<" = "<<sum-(float(p)/float(q))<<"\n\n";
                        return 0;
                    }
                    
                }
                else
                {
                    cout<<p<<"/"<<q<<" "<<opr<<" ";
                }
                if(opr == '-')
                {
                    sum += float(p)/float(q);
                }
                else
                {
                    sum -= float(p)/float(q);
                }
            }
        }
    }

    cout<<"Invalid input please put positive number greater than zero ..Thank you\n\n";

    return 0;
}