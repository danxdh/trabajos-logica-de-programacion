#include <iostream>
using namespace std;
int main(){
    int y=4;
    int x=4;
    y=++x;
    x=x++ + ++y;
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
    

}