//shahad almuhizi
//436201525
#include <stdio.h>
//functions prototypes
void avg(int, int, int,int);
int findLowest(int ,int ,int ,int);
//main
int main(){
int s1,s2,s3,s4;
printf("Enter the scores: ");
scanf("%d",&s1);
scanf("%d",&s2);
scanf("%d",&s3);
scanf("%d",&s4);
if ((s1>0 && s1<100) &&(s2>0 && s2<100) && (s3>0 && s3<100) && (s4>0 && s4<100))
avg(s1,s2,s3,s4);
else
printf("Invalid score!");}
//func avg
void avg(int s1,int s2,int s3,int s4){
int lowest;
double avrg=0.0;
lowest=findLowest(s1,s2,s3,s4);
if ( lowest == s1)
avrg=(s2+s3+s4)/3;
else if ( lowest == s2)
avrg=(s1+s3+s4)/3;
else if ( lowest == s3)
avrg=(s1+s2+s4)/3;
else 
avrg=(s1+s2+s3)/3;
printf("The average of the three highest scores is= %.2lf\n",avrg);}
//func findLowest
int findLowest(int s1,int s2,int s3,int s4){
if (s1<s2 && s1<s3 && s1<s4)
return s1;
if (s2<s1 && s2<s3 && s2<s4)
return s2;
if (s3<s1 && s3<s2 && s3<s4)
return s3;
if (s4<s1 && s4<s2 && s4<s3)
return s4;}

