#include<stdio.h>
#include<math.h>

 double fac(int n)
 {
 if (n==0)
return 1;
return n*fac(n-1);
}

float fun1(int a)
 {
 return sqrt(a);
 }
 float fun2(int a)
 {
  return log(a);
 }
 float fun3(int a)
 {
 return log(log(a));
 }
 float fun4(int a)
 {
 return pow(sqrt(2),log(a));
 }
 float fun5(int a)
 {
 return a;
 }
 float fun6(int a)
 {
 return 2*a+3;;
 }
 float fun7(int a)
 {
 return pow(log(a),2);
 }
 float fun8(int a)
 {
 return log(fac(a));
 }
 float fun9(int a)
 {
 return sqrt(log(a));
 }
 float fun10(int a)
 {
 return pow(2,log(a));
}

int main()
{

for ( int i=0;i<=100;i=i+10)
 {
 
printf(" value of %d in function 1 is %0.2f\n",i, fun1(i)); //
printf(" value of %d in function 2 is %0.2f\n",i, fun2(i));
printf(" value of %d in function 3 is %0.3f\n",i, fun3(i));
printf(" value of %d in function 4 is %0.2f\n",i, fun4(i));
printf(" value of %d in function 5 is %0.2f\n",i, fun5(i));
printf(" value of %d in function 6 is %0.2f\n",i, fun6(i));
printf(" value of %d in function 7 is %0.2f\n",i, fun7(i));
printf(" value of %d in function 8 is %0.2f\n",i, fun8(i));
printf(" value of %d in function 9 is %0.2f\n",i, fun9(i));
printf(" value of %d in function 10 is %0.2f\n",i, fun10(i));
printf(" value of %d factorial is %0.2f\n",i, fac(i));
printf("\n");
 }
 }

 }
 
}

