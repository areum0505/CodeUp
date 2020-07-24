#include <stdio.h>

int main(void) {
  int s1[] = {0, 0, 0};
  int s2[] = {0, 0, 0};
  int s3[] = {0, 0, 0};

  scanf("%d %d %d", &s1[0], &s1[1], &s1[2]);
  scanf("%d %d %d", &s2[0], &s2[1], &s2[2]);
  scanf("%d %d %d", &s3[0], &s3[1], &s3[2]);

  int sum1 = s1[0]+s1[1]+s1[2], sum2 = s2[0]+s2[1]+s2[2], sum3 = s3[0]+s3[1]+s3[2];
  int kor = s1[0]+s2[0]+s3[0], math = s1[1]+s2[1]+s3[1], eng = s1[2]+s2[2]+s3[2];

  printf("%d %d %d %d\n", s1[0], s1[1], s1[2], sum1);
  printf("%d %d %d %d\n", s2[0], s2[1], s2[2], sum2);
  printf("%d %d %d %d\n", s3[0], s3[1], s3[2], sum3);
  printf("%d %d %d %d\n", kor, math, eng, sum1+sum2+sum3);
}
