#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()

{

    float n;
    float c;
    float p;
    float f;
    float j;
    float h;
    float s;

    cout << "Enter the value for p : " << endl;
    cin >> p;
    cout << "Enter the value for n : " << endl;
    cin >> n;

    cout << "Enter the value for c :" << endl;
    cin >> c;


s= c/p;
 
    j = pow(s , 10 / 3);


    h = pow(10, 6);

    f = j / h;

    cout << "Life of rolling bearing is : " << f;

    return 0;
}