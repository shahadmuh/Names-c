//Shahad almuhizi
//436201525
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
int i,j;
char names[15][15],temp[15];

puts("Enter Names one by one: ");
for(i=0;i<=10;i++)
scanf("%s",names[i]);


for(i=0;i<=10;i++)
for(j=i+1;j<=10;j++){
if(strcmp(names[i],names[j])>0){
strcpy(temp,names[i]);
strcpy(names[i],names[j]);
strcpy(names[j],temp);}}
printf("Names in alphabatic order:\n");
for(i=0;i<=10;i++)
puts(names[i]);
return 0;}