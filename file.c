#include<stdio.h>
#include<string.h>
#define MAX 100
void reversecontent(char*x)
{
FILE*fp=fopen(x,"a+");
if(fp==NULL){
printf("unable to open file\n");
return;
}char buf[100];
int a[MAX],s= 0,c= 0,|;
fprint(fp,"\n");
rewind(fp);
while(!feof(fp)){
fgets(buf,sizeof(buf),fp);
|=strlen(buf);
a=s +=|;
}
rewind(fp);
c-=1;
while(c>=0){
