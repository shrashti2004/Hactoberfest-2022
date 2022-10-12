include<stdio.h>
int main()
{
int arr[100],i,size,pos,value;
printf("enter number of elements ");
scanf("%d", &size);
printf("no of elements are %d\n ",size);
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("enter position");
scanf("%d",&pos);
printf("enter value");
scanf("%d",&value);
for(i=size-1;i=pos-1;i--)
{
arr[i+1]=arr[i];


arr[pos-1]=value;

printf("final array after inserting");
}for(i=0;i<size;i++)
{
printf("%d",arr[i]);
}
}
