#include<stdio.h>
#include<string.h>
int change(char a[],int n)
{
?? ?int i;
?? ?int first = 0;
?? ?int len = strlen(a);
?? ?int number= 1;
?? ?int sum = 0;
?? ?
?? ?if(a[0] == '-')
?? ?{
?? ??? ?first = 1;
?? ?}
?? ?
?? ?for(i=len-1;i>=first+0;i--)
?? ?{
?? ??? ?if(a[i]>='0'&&a[i]<='9')
?? ??? ?a[i] = a[i] -'0';
?? ??? ?if(a[i]>='A'&&a[i]<='Z')
?? ??? ?a[i] = a[i] -'A'+10;
?? ??? ?if(a[i]>='a'&&a[i]<='z')
?? ??? ?a[i] = a[i] -'a'+36;?
?? ??? ??? ?//将字符转为对应的十进制‘字符’?
sum = sum + int(a[i])*number;//转为int
number = number*n;?
}
if(first == 1)
return sum*(-1);
else
return sum;

}

 int main()
 {

int k;
scanf("%d",&k);
while(k--)
{
 char a[1001],c[1001];
 int b,d;
 scanf("%s %d %s %d",a,&b,c,&d);
 printf("%d\n",change(a,b)+change(c,d));?
}

}

