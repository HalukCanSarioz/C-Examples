#include <stdio.h>
#include <conio.h>
main(){
	char yazi[1000],karakter[2];
    int say,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,null=0;
    puts("Bir seyler yazin : ");
    gets(yazi);
    for(say=0;yazi[say];say++)
	{
    	switch(yazi[say])
    	{
	    	case 'a': a+=1;break;
	    	case 'b': b+=1;break;
	    	case 'c': c+=1;break;
	    	case 'd': d+=1;break;
	    	case 'e': e+=1;break;
	    	case 'f': f+=1;break;
	    	case 'g': g+=1;break;
	    	case 'h': h+=1;break;
	    	case 'i': i+=1;break;
	    	case 'j': j+=1;break;
	    	case 'k': k+=1;break;
	    	case 'l': l+=1;break;
	    	case 'm': m+=1;break;
	    	case 'n': n+=1;break;
	    	case 'o': o+=1;break;
	    	case 'p': p+=1;break;
	    	case 'q': q+=1;break;
	    	case 'r': r+=1;break;
	    	case 's': s+=1;break;
	    	case 't': t+=1;break;
	    	case 'u': u+=1;break;
	    	case 'v': v+=1;break;
	    	case 'w': w+=1;break;
	    	case 'x': x+=1;break;
	    	case 'y': v+=1;break;
	    	case 'z': z+=1;break;
	    	default: null+=1;break;
    	}
    }
    
    printf("a %d defa kullanildi.\n",a);
    printf("b %d defa kullanildi.\n",b);
    printf("c %d defa kullanildi.\n",c);
    printf("d %d defa kullanildi.\n",d);
    printf("e %d defa kullanildi.\n",e);
    printf("f %d defa kullanildi.\n",f);
    printf("g %d defa kullanildi.\n",g);
    printf("h %d defa kullanildi.\n",h);
    printf("i %d defa kullanildi.\n",i);
    printf("j %d defa kullanildi.\n",j);
    printf("k %d defa kullanildi.\n",k);
    printf("l %d defa kullanildi.\n",l);
    printf("m %d defa kullanildi.\n",m);
    printf("n %d defa kullanildi.\n",n);
    printf("o %d defa kullanildi.\n",o);
    printf("p %d defa kullanildi.\n",p);
    printf("q %d defa kullanildi.\n",q);
    printf("r %d defa kullanildi.\n",r);
    printf("s %d defa kullanildi.\n",s);
    printf("t %d defa kullanildi.\n",t);
    printf("u %d defa kullanildi.\n",u);
    printf("v %d defa kullanildi.\n",v);
    printf("w %d defa kullanildi.\n",w);
	printf("x %d defa kullanildi.\n",x); 
	printf("y %d defa kullanildi.\n",y);
	printf("z %d defa kullanildi.\n",z);
    printf("yazilan %d harflidir",say);
	return 0;
 }
