#include<cstdio>
#include<cstring>
#define MAXN 100005
#define MAXL 1299710
int prime[MAXN];
int check[MAXL];
int tot = 0;
memset(check, 0, sizeof(check));
for (int i = 2; i < MAXL; ++i)
{
    if(!check[i])prime[tot++] = i;
    for (int j = 0; j < tot; ++j)
    {
        if (i * prime[j] > MAXL)break;
        check[i*prime[j]] = 1;
        if (i % prime[j] == 0)break;
    }
}

