#include<stdio.h>
#include<string.h>
#include<math.h>
struct student
{
    char name[100];
    int roll;
    int t1,t2,t3;
    float avg;
    int high;
};
int main(){
    printf("enter the number of students: ");int n;scanf("%d",&n);
    struct student s[n];
    printf("enter the details of all the %d students:\n",n);
    for (int i = 0; i < n; i++)
    {
        printf("\nenter the %d student name: ",i+1);scanf("%s",&s[i].name);
        printf("\nenter the %d student roll num: ",i+1);scanf("%d",&s[i].roll);
        printf("\nenter the %d student marks in test1: ",i+1);scanf("%d",&s[i].t1);
        printf("\nenter the %d student marks in test2: ",i+1);scanf("%d",&s[i].t2);
        printf("\nenter the %d student marks in test3: ",i+1);scanf("%d",&s[i].t3);
        s[i].avg=(s[i].t1+s[i].t2+s[i].t3)/3;int high=0;
        if(s[i].t1>=s[i].t2){
            s[i].high=s[i].t1;
            
        }else{
            s[i].high=s[i].t2;
        }
        if(s[i].high<s[i].t3){
            s[i].high=s[i].t3;
        }
    }
printf("\n the details of all the students is as folllows:\n");
printf("Roll\t\tName\t\tAverage\t\tHighest\n");
 for (int i = 0; i < n; i++)
{
    printf("%d\t\t%s\t\t%f\t\t%d\n",s[i].roll,s[i].name,s[i].avg,s[i].high);
   }




int i;
    printf("\nenter the rol  num of student whose details u want: ");scanf("%d",&i);
    
    printf("the details of %d students is as follows:\n");
    printf("\nroll num: %d",i);
    printf("\nname: %s",s[i-1].name);
    printf("\naverage: %f",s[i-1].avg);
    printf("\nhighest: %d ",s[i-1].high);
    return 0;

}

