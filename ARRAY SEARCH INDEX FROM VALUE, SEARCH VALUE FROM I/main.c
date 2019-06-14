
#include <stdio.h>
#include <stdlib.h>
// DICKY IBROHIM
/*
Input How Many Student          =...
        Input mark of Student 1 = ...
        Input mark of Student 2 = ...
        Input mark of Student 3 = ...

        Output mark of student 1 = ...
        Output mark of student 2 = ...
        Output mark of student 3 = ...
*/
//ARRAY 2 DIMENTION
int main()
{
    int myarray [100];
    int input, i, min=100, max=0, search, searchindex, loop1;
    float sum=0;
    printf ("Input how many student by DICKY= ");
    scanf ("%d",&input);
    for (i=1;i<=input;i++)
    {
        printf ("Input mark of student %d= ",i);
        scanf ("%d",&myarray[i-1]);
        sum+=myarray[i-1];
        if (min>myarray[i-1]){min=myarray[i-1];}
        if (max<myarray[i-1]){max=myarray[i-1];}
    }

    /*
      for (i=1;i<=input;i++)
    {
        printf ("Value Student to- %d= %d\n",i,myarray[i-1]);


    }
    */
    printf ("\tSum of mark student: %.2f\n", sum);
    printf ("\taverage of mark student: %.2f\n", sum/input);
    printf ("\tMin of mark student: %d\n", min);
    printf ("\tMax: %d\n\n\n", max);

//SEARCH VALUE
printf ("Input Number of Student: "); scanf ("%d",&search);
printf("Result of Value: %d\n",myarray[search-1]);

    //SEARCH INDEX
    printf ("Search Index from Value= "); scanf ("%d",&searchindex);
    for (loop1=1;loop1<=searchindex;loop1++)
    {
        if(myarray[loop1-1]==searchindex)
        {
            printf ("Index: %d \n",loop1);
        }
    }


    return 0;
}
