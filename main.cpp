#include <iostream>
using namespace  std;

int main() {
    int x;
    int digit;
    int t=0;
    cin>>x;
    while(x>0){
        digit=x%10;
        t=t*10+digit;
        x=x/10;
    }
    cout<<t<<endl;

    return 0;
}
