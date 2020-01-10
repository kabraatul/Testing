#inclulde<Stdio.h>

void main()
{
  int f=1,n;
  
  printf("\nEnter number ");
  scanf("%d",&n);
  
  while(n>=1)
  f=f*n--;
  
  printf("\nFact=%d",f);
  }
  
