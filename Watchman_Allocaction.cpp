#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int NumOfJun;
	int count=1 , count2, counter3=0;
	int flag; 

   
	cout<<"Number of Junctions?(n):";
	cin>>NumOfJun;
	
	int row=NumOfJun ,columns= sqrt(NumOfJun);
    int Watchman[columns]; //array to allocate the watchmen
	
	for(int i=1; i<=columns ;i++)
	{
			for(int j=1; j<=columns ;j++)
	{
		
		//Allocating the watchmen in their spots
		if (i==j)
				{
					Watchman[counter3]=count;
					counter3++;
				}
		
		 	cout<<"Number of Junctions connected to junction "<<count<<endl;
		 	count2=count+4;
		 	
		 	
		 //displaying the junctions' numbers
		 		while(count2<=row)
			 {
			 		
			 		cout<<"J"<<count2<<" ";
			 		count2= count2+4;
			 	
		     }
		     
		     //backward
		     	count2=count-4;
		 
		 		while(count2>0)
			 {
			 		
			 		cout<<"J"<<count2<<" ";
			 		count2= count2-4;
			 		
		     }
		     
		     flag=j+1;
		     
		     
		     	count2=count+1;
		     	
		     	
		     		while(count2<=NumOfJun&& flag <=4)
				 {
				 
			 		cout<<"J"<<count2<<" ";
			 		count2= count2+1;
			 			flag++;
		  		 }
		  		  
		       flag=j-1;
		  		 // backward
		  		 	count2=count-1;
		     	
		     	
		     		while(count2>0 && flag <4 && flag>0 )
				 {
				 
			 		cout<<"J"<<count2<<" ";
			 		count2= count2-1;
			 		flag--;
			 		
		  		 }
		  		
		     
		  		 cout<<"\n";
		  		 count++;
		  		 
			
	} // end of j loop
	}//end of i loop
	
	//Showing where the watchmen are located
	cout<<"the watchmans are located at junctions:";
		for (int i=0;i<columns;i++)
		{
			cout<<Watchman[i]<<", ";
		}
		return 0;
}
