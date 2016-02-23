#include <stdio.h>
#include <stdlib.h>

int main(){
  int x = 547584;
  struct b2{
    short a12;
    short a34;
  }__attribute__((packed));
  struct b2 *ptr = &x;
  printf("Инт в 2 шорта%d %d\n",ptr->a12,ptr->a34);

  struct a1{
    int a;
    char b;
    int c;
    char d;
} b1;
  struct a2{
     int a;
     int b;
     char c;
     char d;
}b2;
  struct a3{
    int a;
    char b;
    int c;
    char d;
}__attribute__((packed));
  struct a3 b3;
  printf("\nРазмеры структур :%d %d %d\n",sizeof(b1),sizeof(b2),sizeof(b3));

  return 0;
}
