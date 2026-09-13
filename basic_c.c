// Even or odd in C

#include<stdio.h>
int main(){
  int a ;
  printf("Enter a number: ") ;
  scanf("%d",&a) ;

  if(a%2==0)
    printf("Even") ;
  else
    printf("odd") ;

  return 0 ;
} 

// factorial programme

#include<stdio.h>
int main(){
  int a ;
  printf("Enter a number: ") ;
  scanf("%d",&a) ;

  int fact = 1 ;

  for(int i=1;i<=a;i++)
    fact = fact*i ;
  printf("factorial = %d",fact) ;

  return 0 ;
}


// swapping

#include<stdio.h>
int main(){
  int a , b ;
  printf("Enter two number: ") ;
  scanf("%d%d",&a,&b) ;

  int temp = a ;
  a = b ;
  b = temp ;

  printf("After swapping: %d , %d",a,b) ;

  return 0 ;
}
