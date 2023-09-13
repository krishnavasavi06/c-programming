 #include <stdio.h>

int main()
{
    int arr[4][4] ,i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter (%d)(%d):",i,j);
            scanf("%d",&arr[i][j]);
        }
    }    
    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<4;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    }
    int sum=arr[0][0]+arr[1][1]+arr[2][2]+arr[3][3]+arr[4][4]+arr[5][5]+arr[6][6]+arr[7][7]+arr[8][8]+arr[9][9]+arr[10][10];
    printf("\n SUM OF THE DIAGNOL IS : %d",sum);
    return 0;
}