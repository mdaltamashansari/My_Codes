#include <stdio.h>
int main()
{
char name[20],name1[20];
int rollno,rollno1;
float eng,hindi,phy,math,chem;
float total, percentage;
printf("~~~~~~~~~~~~~~~User Data of %s~~~~~~~~~~~~~~\n",name);
printf("Enter Name here:");
scanf("%s",&name);
printf("Enter Roll no here:");
scanf("%d",&rollno);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("Enter marks of english: ");
scanf("%f",&eng);
printf("Enter marks of hindi: ");
scanf("%f",&hindi);
printf("Enter marks of math: ");
scanf("%f",&math);
printf("Enter marks of physics: ");
scanf("%f",&phy);
printf("Enter marks of chem: ");
scanf("%f",&chem);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
total = eng+hindi+math+phy+chem;
percentage = (total/500)*100;
 printf("~~~~~~~~~~~~~~~Result of %s~~~~~~~~~~~~~~,\n",name);
printf("the marks of all subjects is        :%.2f\n",total);
printf("the percentage of all subjects is   :%.2f\n",percentage);
      printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
if (total>300)
{
    printf("~~~~~~~~Congration roll no %d , %s is passed the exam~~~~~~~\n",rollno,name);
                     printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
else
{
    printf("~~~~~~~~roll no %d , %s is failed~~~~~~~\n",rollno,name);
          printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
printf("~~~~~~~~~~~~~~~User Data of %s~~~~~~~~~~~~~~\n",name);
printf("Enter Name here:");
scanf("%s",&name1);
printf("Enter Roll no here:");
scanf("%d",&rollno1);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("Enter marks of english: ");
scanf("%f",&eng);
printf("Enter marks of hindi: ");
scanf("%f",&hindi);
printf("Enter marks of math: ");
scanf("%f",&math);
printf("Enter marks of physics: ");
scanf("%f",&phy);
printf("Enter marks of chem: ");
scanf("%f",&chem);
printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
total = eng+hindi+math+phy+chem;
percentage = (total/500)*100;
printf("~~~~~~~~~~~~~~~Result of %s~~~~~~~~~~~~~~,\n",name);
printf("the marks of all subjects is        :%.2f\n",total);
printf("the percentage of all subjects is   :%.2f\n",percentage);
      printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
if (total>300)
{
    printf("~~~~~~~~Congration roll no %d , %s is passed the exam~~~~~~~\n",rollno,name);
                     printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
else
{
    printf("~~~~~~~~roll no %d , %s is failed~~~~~~~\n",rollno,name);
          printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
 printf("~~~~~~~~~~~~~~~Result of %s~~~~~~~~~~~~~~,\n",name);
printf("the marks of all subjects is        :%.2f\n",total);
printf("the percentage of all subjects is   :%.2f\n",percentage);
      printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
if (total>300)
{
    printf("~~~~~~~~Congration roll no %d , %s is top the exam~~~~~~~\n",rollno,name);
                     printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
else
{
    printf("~~~~~~~~roll no %d , %s is failed~~~~~~~\n",rollno,name);
          printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
return 0;
}       