#include <iostream>

using namespace std;

int main()
{
    int i= rand() + 1, a;
    cin>>a;
    while(a!=i){
        if(a>i){
            cout<<"Choose lower";
        }
        else if(a<i){
            cout<<"Choose higher";
        }
        cin>>a;
    }
    cout<<"Yeh, you got it!!";
}
