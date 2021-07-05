// Program to calculate total marks of each students and also who made the most mistakes

#include<stdio.h>

typedef struct
{
    int correct;
    int wrong;
}SCORE;

typedef struct
{
    char student_name[20];
    SCORE perfomance[3];    
}STUDENT;

int calculate(STUDENT a)
{
    SCORE total;
    int sum;
    total.correct = a.perfomance[0].correct + a.perfomance[1].correct + a.perfomance[2].correct;
    total.wrong = a.perfomance[0].wrong + a.perfomance[1].wrong + a.perfomance[2].wrong;

    sum = (4*(total.correct)) - total.wrong;

    return sum;
}

void neg_calculate(STUDENT a,STUDENT b,STUDENT c)
{
    int neg_1 = 0,neg_2 = 0,neg_3 = 0;

    for(int i=0;i<3;i++)
    {
        neg_1 += a.perfomance[i].wrong;
        neg_2 += b.perfomance[i].wrong;
        neg_3 += c.perfomance[i].wrong;
    }

    if(neg_2 > neg_1 && neg_3 < neg_2)
        printf("Most negetives is by %s; it is %d negatives",b.student_name,neg_2);
    else if(neg_3 > neg_1 && neg_3 > neg_2)
        printf("Most negetives is by %s; it is %d negatives",c.student_name,neg_3);
    else
        printf("Most negetives is by %s; it is %d negatives",a.student_name,neg_1);

}


int main()
{
    STUDENT array[3];

    for(int i=0;i<3;i++)
    {
        printf("Enter name of student %d : ",i+1);
        scanf("%s",array[i].student_name);
        for(int j=0;j<3;j++)
        {
            printf("Enter sub %d score : ",j+1);
            scanf("%d %d",&array[i].perfomance[j].correct,&array[i].perfomance[j].wrong);
        }
    }
    int choice;
    do
    {
        printf("\nChoose\n");
        printf("1 : Total score of std 1\n");
        printf("2 : Total score of std 2\n");
        printf("3 : Total score of std 3\n");
        printf("4 : Most negatives\n");
        printf("0 : Exit\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);
        
        int sum;
        switch(choice)
        {
            case 1: sum = calculate(array[0]);
                    printf("Score of std 1: %d",sum);
                    break;
            case 2: sum = calculate(array[1]);
                    printf("Score of std 2: %d",sum);
                    break;
            case 3: sum = calculate(array[2]);
                    printf("Score of std 3: %d",sum);
                    break;
            case 4: neg_calculate(array[0],array[1],array[2]);
                    break;
            default : printf("Re enter your choice properly\n"); 
                    
        }

    } while (choice != 0);
    return 0;

}