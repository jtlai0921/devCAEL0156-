#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 	int a[5]={0};		/* �ŧidata�}�C�A�}�C������a[0]~a[4], ��l�ȬҬ�0 */
		int i=0, min;		/* min����ܼƥN���̤p�� */
		printf("-----�M��̤p��-----\n");
		printf("�гs���J���Ӽƭ�-\n");
		for(i=0;i<5;i++)		/* �s���J5�Ӿ�ƨæs���a[0]~a[4] */
		{
		   printf("�п�J�� %d �Ӹ�ơG", i+1 );
		   scanf("%d", &a[i]);
		}
		min=a[0];			/* ���]a[0]���̤p�� */
		for(i=0;i<5;i++)		/* �ϥΰj��v�@��Xa[0]~a[4]���̤p�� */
		{
		  if (min>a[i])	
		  {
			  min=a[i];
		  }
		}
		printf("�̤p�ȡG%d\n\n",min); 
 		system("PAUSE");	

	return 0;
}