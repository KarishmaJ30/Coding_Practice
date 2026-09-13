
// C++ basic code

// average of three num
#include<iostream>
using namespace std ;

int main(){
  int a , b , c ;
  cout<<"Enter three number: " ;
  cin>>a>>b>>c ;

  avg = (a+b+c)/3 ;
  cout<<"average = "<<avg<<endl ;

  return  0;
}


// swapping of 2 int variables without using 3rd 

#include<iostream>
using namespace std ;

int main(){
  int a , b ;
  cout<<"Enter two number: " ;
  cin>>a>>b ;

  a = a+b ;
  b = a-b ;
  a = a+b ;

  cout<<"After swapping: "<<a<<" ,"<<b<<endl ;
  return 0 ;
}


// sum of all 10 element in array

#include<iostream>
using namespace std ;

int main(){
  int arr[10] , sum = 0 ;
  
  cout<<"Enter element: " ;
  for(int i=0 ; i<=10 ; i++){
    cin>>arr[i] ;
    sum += arr[i] ;
  }  
  cout<<"sum = "<<sum ;

  return 0 ;
}
