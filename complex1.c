#include <stdio.h>
#include <stdlib.h>

struct complex1{ 
  float a;
  float b;
} x,y,z;

struct complex1 summ(struct complex1 x, struct complex1 y){
  struct complex1 z;
  z.a = x.a + y.a;
  z.b = x.b + y.b;
  return z;
}

struct complex1 sub(struct complex1 x, struct complex1 y){
  struct complex1 z;
  z.a = x.a - y.a;
  z.b = x.b - y.b;
  return z;
}

struct complex1 mult(struct complex1 x, struct complex1 y){
  struct complex1 z;
  z.a = x.a * y.a -x.b * y.b;
  z.b = x.b * y.a +x.a * y.b;
  return z;
}

struct complex1 div1(struct complex1 x, struct complex1 y){
  struct complex1 z;
  z.a = (x.a * y.a + x.b * y.b)/(y.a * y.a + y.b * y.b);
  z.b = (x.b * y.a - x.a * y.b)/(y.a * y.a + y.b * y.b);
  return z;
}

int main(){

  printf("Введите первое число (a b):");
  scanf("%f %f",&x.a,&x.b);
  printf("Введите второе число:");
  scanf("%f %f",&y.a,&y.b);

  z = summ(x,y);
  printf("Cумма : %.2f%+.2f *i\n",z.a,z.b);

  z = sub(x,y);
  printf("Разница : %.2f%+.2f *i\n",z.a,z.b);

  z = mult(x,y);
  printf("Произведение : %.2f%+.2f *i\n",z.a,z.b);

  z = div1(x,y);
  printf("Деление : %.2f%+.2f *i\n",z.a,z.b);
  return 0;
}
