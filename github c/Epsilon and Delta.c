//Epsilion-Delta definition
#include<stdio.h>
#include<math.h>
float func(float c,float m,float n)
{ float b;
  b=c*(pow(m,n));
  return b;
}
main()
{ float x,d,E,E1,E2,E3,E4,x1,x2,n,c,m,i,j,Ef;
  int p,q,r,s;
  p=q=r=s=0;
  printf("Enter the number where you wanna find the limit");
  scanf("%f",&x);
  do
  { printf("Enter the Delta distance");
    scanf("%f",&d);
  }while(d<0);
  printf("Enter the Epsiliion value");
  scanf("%f",&E);
  printf("THIS IS FOR FUNCTION VALUES\n");
  printf("Enter the power raised:");
  scanf("%f",&n);
  printf("Enter the co-efficient of equation:");
  scanf("%f",&c);
  x1=x-d;
  x2=x+d;
  Ef=func(c,x,n);
  E1=func(c,x1,n);
  E2=func(c,x2,n);
  for (i=x1;i<x;i=i+0.1)
  { E3=func(c,i,n);
    p++;
    if (E3>=E1 && E3<=E2)
    { q++;
	}
  }
  for (j=x2;j>x;j=j-0.1)
  { E4=func(c,j,n);
    r++;
    if (E4>=E1 && E4<=E2)
    { s++;
	}
  }
  if (p!=q || r!=s || E!=Ef )
  { printf("Limit Doesn't Exists");
  }
  else
  { printf("Limit Exists:%f",E);
  }
}
