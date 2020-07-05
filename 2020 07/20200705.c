// 1562 : [기초-함수작성] 함수로 두 정수의 작은 값 리턴하기
#include <stdio.h>
 
int n, m;
int min(int p, int q)
{
  return p<=q?p:q;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", min(n, m));
}


// 1563 : [기초-함수작성] 함수로 세 정수 중 중간 값 리턴하기 
#include <stdio.h>
 
int n, m, x;

int max(int p, int q){ return p>=q?p:q;}

int min(int p, int q){ return p<q?p:q;}
int mid(int m, int n, int x) {
    if (m == max(n, m) && m == min(m, x))
		return m;
    if (n == max(x, n) && n == min(n, m))
		return n;
	if (x == max(m, x) && x == min(x, n))
		return x;
}
int main()
{
  scanf("%d%d%d", &n, &m, &x);
  printf("%d\n", mid(n, m, x));
}


// 1564 : [기초-함수작성] 함수로 최대공약수 리턴하기
#include <stdio.h>

int a, b;

int gcd(int a, int b) {
    int mod = a % b;
    while (mod > 0) {
        a = b;
        b = mod;
        mod = a % b;
    }
    return b;
}
int main()
{
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}


// 1565 : [기초-함수작성] 함수로 최소공배수 리턴하기
#include <stdio.h>

int gcd(int p, int q){ if(p==0) return q; return gcd(q%p, p);}

long long int lcm(int a, int b) {
    return (long long int)a * b / gcd(a, b);
}
int main()
{
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%lld\n", lcm(a, b));
}


// 1566 : [기초-함수작성] 함수로 거듭제곱 리턴하기 
#include <stdio.h>

int a, n;
long long int pow(int a, int n) {
    long long int r = 1;
    if (a == 1 || n == 0) return 1;
    else {
        for (int i = 1; i <= n; i++) {
            r *= a;
        }
        return r;
    }
}
int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld\n", pow(a, n));
}


// 1567 : [기초-함수작성] 함수로 배열의 부분합 리턴하기
#include <stdio.h>

int n, a, b, d[1010];
long long int subsetsum(int a, int b) {
    long long int sum = 0;
    for(int i = a; i <= b; i++) {
        sum += d[i];
    }
    return sum;
}

int main()
{
  scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d%d", &a, &b);

  printf("%lld\n", subsetsum(a, b));
}
