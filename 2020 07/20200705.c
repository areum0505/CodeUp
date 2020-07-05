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
