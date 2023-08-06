#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main() {  
    float a , b , c , delta;
    cin >> a >> b >> c;
    if (a==0) {
        if (b==0 && c==0) 
            cout << "VO SO NGHIEM";
        if (b==0 && c!=0) 
            cout << "VO NGHIEM";
        if (b!=0) 
            printf("%.4f",-c/b);
    }   
    else {
        delta = (b*b) - 4*a*c;
        if (delta < 0) 
            cout << "VO NGHIEM";
        if (delta == 0) 
            cout << (-b/(2*a));
        if (delta > 0)
            cout << ( ( (-b) + sqrt(delta) ) /2 *a ) << endl << ( ( (-b) - sqrt(delta) ) /2 *a ) << endl;
        }        
        return 0;
}
