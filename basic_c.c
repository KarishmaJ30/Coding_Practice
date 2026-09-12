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
}
