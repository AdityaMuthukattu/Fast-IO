#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

#define BLOCKSZ (1<<16)
#ifdef putchar
#undef putchar
#endif
#define putchar(x) (*_pout++=(x), (_pout==_eout?(fwrite(_pout=_out, 1, BLOCKSZ, stdout)):0))
#define flush() fwrite(_out, 1, _pout-_out, stdout)
char _out[BLOCKSZ+1], *_eout=_out+BLOCKSZ, *_pout=_out;
#define print(x) do{if(!x)putchar('0');else{for(;x;x/=10)*_p++='0'+x%10;do putchar(*--_p);while(_p!=_buf);}}while(0)
char _buf[16], *_p=_buf;
#define getchar() (*_pinp?*_pinp++:(_inp[fread(_pinp=_inp, 1, BLOCKSZ, stdin)]='\0', *_pinp++))
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _inp[BLOCKSZ+1], *_pinp=_inp, _;

int main()
{

    flush();
    return 0;
}
