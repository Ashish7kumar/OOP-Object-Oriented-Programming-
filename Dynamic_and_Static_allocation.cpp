#include <iostream>
using namespace std;
class Ash{
    public:
     char a;
};
int main()
{
    Ash a;//Static Allocation stack memory is used
    Ash *as=new Ash;//dynamic memory allocation uses heap 
    as->a;//can also be writen like (*as).a;
    return 0;
} 