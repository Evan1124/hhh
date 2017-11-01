#include<stdio.h>
#include<stdlib.h>
int main()
{ printf("这是一个计算数的阶乘的程序\n请输入任一整数，然后按回车键\n");
  double x;
  scanf("%lf",&x);
  double a=1;
  double i=1;
  while(i<=x)
  { a=a * i;
    i++;
  }
  printf("%f!=%f\n",x,a);
  system("pause");
  return 0;
}
