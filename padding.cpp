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
class pop{
char a;//1+3 padding
int b;// 4
char d;//1+7 padding
double e;//8
}; 
int main(){
    Zz a;
    Zx b;
    pop p;
    cout<<sizeof(p)<<endl;//24
    cout<<sizeof(a)<<endl;//12
    cout<<sizeof(b);//8
    return 0;
}
//to take minimum size put most size element first folowed by other or exact opposite