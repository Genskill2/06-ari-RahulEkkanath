#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

string ari(string s)
{	int sentence=0,word=0,c=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='.' || s[i]=='?')
		{
			sentence++;
		}
		
		if(s[i]==' ')
		{
			word++;
		}
		
		if(isalnum(s[i]))
		{
			c++;
		}
	}
	
	int score = (int) ceil(4.71*(c/(float)word)+0.5*(word/(float)sentence) -21.43);
	
	if(score==1) 
	{
		return "Kindergarten";
	}
	
	else if(score==2) 
	{
		return "First/Second Grade";
	}
	
	else if(score==3) 
	{
		return "Third Grade";
	}
	
	else if(score==4) 
	{
		return "Fourth Grade";
	}
	
	else if(score==5) 
	{
		return "Fifth Grade";
	}
	
	else if(score==6) 
	{
		return "Sixth Grade";
	}
	
	else if(score==7) 
	{
		return "Seventh Grade";
	}
	
	else if(score==8) 
	{
		return "Eighth Grade";
	}
	
	else if(score==9) 
	{
		return "Nineth Grade";
	}
	
	else if(score==10) 
	{
		return "Eleventh Grade";
	}
	
	else if(score==11) 
	{
		return "Eleventh Grade";
	}
	
	else if(score==12) 
	{
		return "Twelfth grade";
	}
	
	else if(score==13) 
	{
		return "College student";
	}
	
	else 
	{
		return "Professor";
	}

}
