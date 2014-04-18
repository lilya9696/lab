#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b;
_asm
{
mov eax, a
mov ebx,b
add eax, ebx
mov c, eax
}
cout<<c;
return 0;
}
