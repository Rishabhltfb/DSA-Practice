#include "bits.cpp"

using namespace std;

int main () {

    int x;
    cin>>x;
       

    stack<int> stk;
    stk.push(x);
    cout<<stk.top()*5;

    return 0;
}