#include <stdio.h>
#include <math.h>
float f(float x)
{ return x;
}
{
	float rectangledroite(float (*f)(float),float a,float b, int n)
	{
		float h=(b-a)/n;
		float sum=0;
		for(int i=1,i<=n,i++)
			sum+=(*f)(a+i*h)*h;
		return sum;
	}

	float rectanglegauche(float (*f)(float),float a,float b,int n)
	{
		float h=(b-a)/n;
		float sum=0;
		for(int i=0,i<n,i++)
			sum+=(*f)(a+i*h)*h;
		return sum;
	}
	float trapez(float (f)(float),float a,float b, int n)
	{
		float h=(b-a)/n;
		float sum=0;
		for(int i=0,i<n,i++)
			sum+=f(h*i);
	}
	sum+=(f(a)+f(b))/2;
	return sum;
	float simpson(float(*f)(float),float a,float b,int n)
	{
		float h=(b-a)/n;
		float x=a+h;
		float z=a+h/2;
		float I1=0;
		float I2=f(z);
		for(int i=1,i<n,i++)
			z+=h;
		I1+=f(x);
		I2+=f(z);
		x+=h;
	}
	return (h/6)*(f(a)+f(b)+2*I1+4*I2);
}
int main()
{
	float droite = rectangledroite(f,0,1,10);
	printf("rectangledroite=%f/n",droite);
	float gauche= rectanglegauche(f,0,1,10);
	printf("rectanglegauche=%f/n",gauche);
	float trpzmethod = trapez(f,0,1,10);
	printf("trapez=%f/n",trpzmethod);
	float simpmethod = simpson(f,0,1,10);
	printf("simpson=%f/n",simpmethod);
	return 0;
}



