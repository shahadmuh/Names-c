#include<stdio.h>
#include<stdlib.h>
#include<string.h>

enum PubType{Magazine,book};
enum coverType{Hardcover, Paperback};

union addInfo{
int isbn;
struct magInfo {
int issn,volume,issue;}MI;

};


struct Publication{
enum PubType pt;
char* title;
int num;
enum coverType ct;
double price;
union addInfo AD; 
};

 struct PubList{
 int num;
struct Publication* list;};

 
 struct Publication readpub(){
  char title[100];
 struct Publication temp;
  puts("enter price");
scanf("%lf",&(temp.price));
 puts("enter title");
scanf("%s",title);
strcpy(temp.title,title);
  puts("enter 0 for hardcover or 1 for paperback");
  scanf("%d",&temp.ct);
  puts("enter 0 for magizine or 1 for book");
  scanf("%d",&temp.pt);
     puts("enter number of pages");
scanf("%d",&temp.num);

  if(temp.pt==0){
  puts("enter issn");
    scanf("%d",&temp.AD.MI.issn);
  puts("enter volume");
    scanf("%d",&temp.AD.MI.volume); 
     puts("enter isuue");
    scanf("%d",&temp.AD.MI.issue);
  }
  else   if(temp.pt==1){
  puts("enter isbn");
    scanf("%d",&temp.AD.isbn);}


return temp;
 }
 
 
 
 int findpub(struct Publication* Pp, struct PubList PL){
int i=0;
for(i=0;i<PL.num;i++){
if(PL.list[i].pt==Pp->pt)
if(PL.list[i].title==Pp->title)
if(PL.list[i].num==Pp->num)
if(PL.list[i].ct==Pp->ct)
if(PL.list[i].price==Pp->price)

if(PL.list[i].pt==0)
if(PL.list[i].AD.MI.issn==Pp->AD.MI.issn)
if(PL.list[i].AD.MI.volume==Pp->AD.MI.volume)
if(PL.list[i].AD.MI.issue==Pp->AD.MI.issue)
return i;

else 
if(PL.list[i].pt==1)
if(PL.list[i].AD.isbn==Pp->AD.isbn)
return i;
 
 
 
 }return -1;
 }
 
 
 
 
 struct PubList getallbooks(struct PubList PL){
 int i=0;
 int counter=0;
 struct PubList temp;
for(i=0;i<PL.num;i++){
if(PL.list[i].pt==1)
 counter++;
 }
 int j=0;
 temp.list=(struct Publication *) malloc(counter*sizeof(struct Publication));
for(i=0;i<PL.num;i++){
if(PL.list[i].pt==1)
temp.list[j++]=PL.list[i];}
 
 return temp;
 }
int main ()
{
 struct PubList pl;
 int sum = 0;
 printf("How many publications?\n");
 scanf("%d", &(pl.num));
 pl.list = (struct Publication *) calloc(pl.num,sizeof(struct Publication));
 
 for (int i = 0; i < pl.num; i++)
 {
 struct Publication p = readpub();
if (findpub(&p, pl) == -1)
 pl.list[i] = p;
 else
 {
 printf("This publication was entered previously! Enter again\n ");
i--;
 }
 } int i;
 for(i=0;i<pl.num;i++)
 printf("%lf",pl.list[i].price);
 puts("hhjhjjdsjvhjdslwl");

 
 struct PubList plBooks = getallbooks(pl);
 for (int i = 0; i < plBooks.num; i++)
 sum = sum + plBooks.list[i].price;
 printf("The sum of the books' prices is %d", sum);
 printf("The num of the books'  is %d", plBooks.num);}

