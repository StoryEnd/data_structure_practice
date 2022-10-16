#include<stdio.h>
struct node {
int data;
struct node *next;
};
struct node *head,*temp,*cur;
void insert()
{
struct node *p1,*p2;
p1=malloc(sizeof (struct node));
p2=malloc(sizeof (struct node));
int nd,k,j=0;
printf(&quot;\nEnter New Data \n&quot;);
scanf(&quot;%d&quot;,&amp;nd);
temp=head;
do{
if(nd&gt;temp-&gt;data){
j++;
}
temp=temp-&gt;next;
}while(temp!=NULL);
if(j==0)
{
p2-&gt;data=nd;
p2-&gt;next=head;
head=p2;
}
else{
temp=head;
for(k=0;k&lt;j-1;k++)
{
temp=temp-&gt;next;
}
p2=temp-&gt;next;
p1-&gt;data=nd;
temp-&gt;next=p1;
p1-&gt;next=p2; }
temp=head;
printf(&quot;\n&quot;);

while(temp != NULL)
{
printf(&quot; %d &quot;,temp-&gt;data);
temp=temp-&gt;next;
}
char y;
printf(&quot;\nDo You Want To Insert Another Data? y/n \n&quot;);
fflush(stdin);
scanf(&quot;%c&quot;,&amp;y);
fflush(stdin);
if(y==&#39;Y&#39;||y==&#39;y&#39;){
insert();
}
}
int main()
{
int n,i;
printf(&quot;Enter Element Number \n&quot;);
scanf(&quot;%d&quot;,&amp;n);
printf(&quot;Enter sorted data \n&quot;);
temp = malloc(sizeof (struct node));
printf(&quot;Enter Data of Node No. 1 \n&quot;);
scanf(&quot;%d&quot;,&amp;temp-&gt;data);
temp-&gt;next=NULL;
head=temp;
cur=temp;
for(i=2;i&lt;=n;i++)
{
temp = malloc(sizeof (struct node));
printf(&quot;Enter Data of Node No. %d \n&quot;,i);
scanf(&quot;%d&quot;,&amp;temp-&gt;data);
temp-&gt;next=NULL;
cur-&gt;next=temp;
cur=cur-&gt;next;
}
temp=head;
printf(&quot;\n&quot;);
while(temp != NULL)
{
printf(&quot; %d &quot;,temp-&gt;data);
temp=temp-&gt;next;
}
insert();
}
