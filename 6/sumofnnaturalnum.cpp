#include <iostream>

using namespace std;

int main(){
    int a , sum = 0;
    cout<<"Enter the num until you want to add : ";
    cin>>a;

    for (int i = 1 ; i <= a ; sum += i++);

    cout<<sum;


    return 0;
}