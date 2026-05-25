#include <iostream>
using namespace std;


int reverse(int num){

    int rev = 0;

    while(num>0){

        int rem = num%10;

        rev = rev*10 + rem;

        num = num/10;
    }
    return rev;
}

int count(int num){

    int counter = 0;

    while(num>0){
        counter++;
        num = num/10;
    }
    return counter;
}


int main()
{
    int a ;
    cin>>a;
    cout<<reverse(a)<<endl;
    return 0;
}

