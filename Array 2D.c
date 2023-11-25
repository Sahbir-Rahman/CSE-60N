#include <stdio.h>
main()
{
    int i,j;
    int A[3][4], B[3][4];
    // Element A
    printf("Enter element for A matrix.\n");
    // A matrix input
    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            printf ("A[%d][%d] = ", i, j);
            scanf ("%d", & A[i][j]);
        }
        printf ("\n");
    }
    // A matrix output
    printf ("A = ");
    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            printf ("%d", & A[i][j]);
        }
        printf ("\n");
    }
    // Element B
    printf("Enter element for B matrix.\n");
    // B matrix input
    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            printf ("B[%d][%d] = ", i, j);
            scanf ("%d", & B[i][j]);
        }
        printf ("\n");
    }
    // B matrix output
    printf ("B = ");
    for (i=0; i<3; i++)
    {
        for (j=0; j<4; j++)
        {
            printf ("%d", & B[i][j]);
        }
        printf ("\n");
    }
}
