#include<stdio.h>
int main(){
  int a,b,c;
  printf("enter three integer");
  scanf("%d %d %d",&a,&b,&c);
  if(a>b){
    if(a>c){
      printf(" the largest number is: %d\n",a);
    }else{
    printf("the largest number is: %d",c);
  }
}else{
    if(b>c){
     printf("the largest number is:%d",b);
    }else{
      printf("the largest number is:%d",c);
    }
  }
    return 0;
}

