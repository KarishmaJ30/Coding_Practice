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

// Functions

#include<stdio.h>

float area_circle(int r){
  float a = 3.142*r*r ;
  return a ;
}
int main(){
  int r ;
  printf("Enter radius: ") ;
  scanf("%d",&r) ;

  float a = area_circle(r) ;
  printf("%f",a) ;

  return 0 ;
  
}


#include<stdio.h>

int fact_num(int a){
  int fact = 1;
  for(int i=1;i<=a;i++){
    fact = fact*i ;
  }
  return fact ;  
}
int main(){
  int a ;
  printf("Enter a num: ") ;
  scanf("%d",&a) ;

  int fact = fact_num(a) ;
  printf("fatorial = %d",fact) ;
  
  return 0 ;
}

















