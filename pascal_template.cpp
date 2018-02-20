// this i/o template was just a bit of fun
// it changes the c++ syntax to look a bit
// more like the pascal syntax

#include <iostream>
using namespace std;

#define then
#define do
#define begin {
#define end }
#define function void
#define write(x) cout<<(x);
#define writeln(x) cout<<(x)<<'\n';
#define inc(x) ++(x);
#define mod %
#define div /

int main() begin
    ios::sync_with_stdio(0);
    cin.tie(0);
    ;
    return 0;
end
