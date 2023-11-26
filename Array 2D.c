#include <stdio.h>
main()
{
    int i,j;
    int A[3][3], B[3][3];
    // Element A
    printf("Enter element for A matrix.\n");
    // A matrix input
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf ("A[%d][%d] = ", i, j);
            scanf ("%d", & A[i][j]);
        }
        printf ("\n");
    }
    // A matrix output
    printf ("A = \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf ("%d\t",A[i][j]);
        }
        printf ("\n");
    }
    // Element B
    printf("Enter element for B matrix.\n");
    // B matrix input
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf ("B[%d][%d] = ", i, j);
            scanf ("%d", & B[i][j]);
        }
        printf ("\n");
    }
    // B matrix output
    printf ("B = \n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf ("%d\t", B[i][j]);
        }
        printf ("\n");
    }
}

