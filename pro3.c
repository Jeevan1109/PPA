#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i=0,j=0,iCnt=0;
    char ch='\0';
  for(i=1;i<=iRow;i++)
  {
      
    for(j=1;j<=iCol;j++)
    {
        
        if(i%2!=0)
        {
            printf("%c\t",ch);
        }
        else if(i%2==0)
        {
            printf("%d\t",j);
        }
           
       
    }
        printf("\n");

  }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("enter row and columnn : ");
    scanf("%d%d",&iValue1,&iValue2);

    Display(iValue1,iValue2);

    return 0;
}