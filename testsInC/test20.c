#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int ar1(int intar[])
;
int ar2(int intar[2])
;

void caller(int (*function)());
int main(void){
int a[10]={1,2,3,4,5,6,7,8,9,10};//a=array of 10 ints

int aa[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

int (*p)[10];
int y=29,i;
int ababa[]={1,2,3};
int sayHello();
int (*fp)();
const int d=22;printf("%f",d);
printf("\nsizeof(int)=%d\n",sizeof(int));
printf("\naa=%d,*aa=%d, &aa[0]=%d\n",(unsigned int)aa-(unsigned int)aa,(unsigned int)*aa-(unsigned int)aa,(unsigned int)&aa[0]-(unsigned int)aa);
printf("aa[2]=%d,*(aa+2)=%d, &aa[2]=%d\n",(unsigned int)aa[2]-(unsigned int)aa,(unsigned int)*(aa+2)-(unsigned int)aa,(unsigned int)&aa[2]-(unsigned int)aa);
printf("aa[6]=%d,*(aa+6)=%d, &aa[6]=%d\n",(unsigned int)aa[6]-(unsigned int)aa,(unsigned int)*(aa+6)-(unsigned int)aa,(unsigned int)&aa[6]-(unsigned int)aa);
printf("aa+1=%d,&aa+1=%d,*aa+1=%d\n",(unsigned int)(aa+1)-(unsigned int)aa,(unsigned int)(&aa+1)-(unsigned int)aa,(unsigned int)*(aa+1)-(unsigned int)aa);
printf("\n\n&aa=%d,&aa[0]=%d,&aa[0][0]=%d,aa[0]=%d,*aa[0]=%d\n",
(unsigned int)&aa-(unsigned int)aa,(unsigned int)(&aa[0])-(unsigned int)aa,(unsigned int)(&aa[0][0])-(unsigned int)aa,(unsigned int)aa[0]-(unsigned int)aa,(unsigned int)*aa[0]-(unsigned int)aa);
fp=sayHello;
p=&a;
printf("\nababa=%d,%d,%d\n",ababa[0],ababa[1],ababa[2]);
p = (int(*)[10])malloc(10*sizeof(*p));
p=&a;
&a;&p;
(*p)[0]=33;(*p)[1]=342;
printf("right (*p) gives: %d\n",(*p)[1]);
for(i=0;i<10;i++)
printf("\np[%d]=%d\n",i,(*p)[i]);
caller(fp);
printf("\nsizeof(a)=%d\n",sizeof(a));
ar1(a);ar2(a);
printf("ar1 %d, ar2 %d\n",a[9],a[9]);
	return 0;
}

void caller(int (*function)())
{
  (*function)();
 printf("f()=%d f=%d *f=%d, (*f)()=%d",function(), function,*function,(*function)());
}
int sayHello(){
printf("\nHello from sayHello!\n");
return 0;
}

int ar1(int intar[])
{intar[9]=98;}
int ar2(int intar[2])
{intar[9]=99;}
