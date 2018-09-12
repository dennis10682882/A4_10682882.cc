
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;

    cout << " UNIVERSITY OF GHANA GRADING SYSTEM" << endl;

    cout << " Enter ID Number: " <<endl;
    cin >> a;

    cout << " Enter Your Raw Score: " <<endl;
    cin >> b;

    if( b>=80 && b<=100){
        cout << " CONGATULATION, you had A " <<endl;
    }
    else if( b>=75 && b<=79){
        cout << " CONGRATULATION, you had B+ " <<endl;
    }
    else if( b>=70 && b<=74){
        cout << " CONGRATULATION, you had B " <<endl;
    }
    else if( b>=65 && b<=69){
        cout << " CONGRATULATION, you had C+ " <<endl;
    }
    else if( b>=60 && b<=64){
        cout << " CONGRATULATION, you had C " <<endl;
    }
    else if( b>=55 && b<=59){
        cout << " CONGRATULATION, you had D+ " <<endl;
    }
    else if( b>=50 && b<=54){
        cout << " CONGRATULATION, you had D " <<endl;
    }
    else if( b>=45 && b<=49){
        cout << " SHAME, you had E " <<endl;
    }
    else if( b>=0 && b<=44 ){
        cout << " PITY, you had F " <<endl;
    }
    return 0;
}
