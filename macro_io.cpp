#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define and &&
#define or ||
#define bitand &
#define bitor |
#define shiftr <<
#define shiftl >>
#define xor ^
#define mod %

struct point_2d
{
    int x, y;
};

struct point_3d
{
    int x, y, z;
};

#define newln <<'\n'
#define space <<' '<<
#define put(x) cout<<x;
#define putln(x) cout<<x<<'\n';
#define putarr(grid,c) for(int i=0;i<(c);i++)put(grid[c]<<' ');
#define put2darr(grid,r,c) for(int y=0;y<(r);y++){for(int x=0;x<(c);x++){put(grid[y][x]<<' ');}cout newln;}
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

const int pi = acos(1.0);
const int inf = 0x3f3f3f3f;
const int int_max = 2147483647;

int main()
{

    return 0;
}
