#include<stdio.h>

int main()
{
    int i,k,n,c,sum=0;
    float j,result=0;

    //Getting the number of subject
    printf("Enter the number of subjects: ");
    scanf("%d",&n);

    int sub[n];
    int cre[n];

    //Getting subject number
    printf("Enter the score of those subjects: ");
    for(i=1; i<=n; i++)
    {
        scanf("%d",&sub[i]);
    }

    //Getting credit for subjects
    printf("Enter the credit of those subjects sequentially: ");
    for(k=1; k<=n; k++)
    {
        scanf("%d",&cre[k]);
    }

    //Adding credits
    for(k=1; k<=n; k++)
    {
        sum =sum+cre[k];
    }
    printf("Total credit: %d\n",sum);



    //checking the grade according to number and multiplying it with the credit.
    //Then adding the total grade.
    for(i=1; i<=n; i++)
    {
        if(sub[i]>=80 && sub[i]<=100)
        {
            j=4.00;
            printf("s%d = %.2f\n",i,j);
            j= (j*cre[i]);
        }
        else if(sub[i]>=75 && sub[i]<80)
        {
            j=3.75;
            printf("s%d = %.2f\n",i,j);
            j= (j*cre[i]);
        }
        else if(sub[i]>=70 && sub[i]<75)
        {
            j=3.50;
            printf("s%d = %.2f\n",i,j);
            j= (j*cre[i]);
        }
        else if(sub[i]>=65 && sub[i]<70)
        {
            j=3.25;
            printf("s%d = %.2f\n",i,j);
            j= (j*cre[i]);
        }
        else if(sub[i]>=60 && sub[i]<65)
        {
            j=3.00;
            printf("s%d = %.2f\n",i,j);
            j= (j*cre[i]);
        }
        else if(sub[i]>=55 && sub[i]<60)
        {
            j=2.75;
            printf("s%d = %.2f\n",i,j);
            j= (j*cre[i]);
        }
        else if(sub[i]>=50 && sub[i]<55)
        {
            j=2.50;
            printf("s%d = %.2f\n",i,j);
            j= (j*cre[i]);
        }
        else if(sub[i]>=45 && sub[i]<50)
        {
            j=2.25;
            printf("s%d = %.2f\n",i,j);
            j= (j*cre[i]);
        }
        else if(sub[i]>=40 && sub[i]<45)
        {
            j=2.00;
            printf("s%d = %.2f\n",i,j);
            j= (j*cre[i]);
        }
        else
        {
            j=0.00;
            printf("s%d = %f\n",i,j);
            j= (j*cre[i]);
        }

        result = result+j; //adding the final grade
    }
    printf("The GPA is : %.2f\n",(result/sum)); //Dividing the total grade by total credit and getting the GPA.
}
