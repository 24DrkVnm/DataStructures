#include<stdio.h>
void main()
{
	int rw,cl,nonZ=0,k=1,i,j;
	printf("Enter the number of rows and coloumns of the sparce matrix\n");
	scanf("%d",&rw);
	scanf("%d",&cl);
	int Mat[rw][cl];
	printf("Enter the elements\n");
	for(i=0;i<rw;i++)
	{
		for(j=0;j<cl;j++)
		{
			scanf("%d",&Mat[i][j]);
			if((Mat[i][j])!=0)
			{
				nonZ++;
			}
		}
	}
	int spMat[nonZ+1][3];
	printf("The sparse marix is\n");
	spMat[0][1]=cl;
	spMat[0][0]=rw;
	spMat[0][2]=nonZ;
	printf("%d\t%d\t%d\n",spMat[0][0],spMat[0][1],spMat[0][2]);
	for(i=0;i<rw;i++)
	{
		for(j=0;j<cl;j++)
		{
			if(Mat[i][j]!=0)
			{
				spMat[k][0]=i;
				spMat[k][1]=j;
				spMat[k][2]=Mat[i][j];
				printf("%d\t",spMat[k][0]);
				printf("%d\t",spMat[k][1]);
				printf("%d\n",spMat[k][2]);
				k++;
			}
			
		}
	}
}
