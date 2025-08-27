#include<iostream>
using namespace std;
class Zz{
char a;
int b;
char c;
};
class Zx{
    char a;
    char b;
    int c;
};
int main(){
    Zz a;
    Zx b;
    cout<<sizeof(a)<<endl;//12
    cout<<sizeof(b);//8
    return 0;
}