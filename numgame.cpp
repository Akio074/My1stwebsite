#include<iostream>
#include <stdlib.h>
using namespace std;


// addition function
int add(int p,int q)
{
	int g;
	cout<<"\n"<<p<<" + "<<q<<" = ";                                    
	g=p+q;
	return g;
}
// subtraction function
int sub(int p,int q)
{
	int g;
	cout<<"\n"<<p<<" - "<<q<<" = ";
	g=p-q;
	return g;
}
// multiplication function
int mul(int p,int q)
{
	int g;
	cout<<"\n"<<p<<" * "<<q<<" = ";
	g=p*q;
	return g;
}
// division function
float divi(int p,int q)
{
	float g;
	cout<<"\n"<<p<<" / "<<q<<" = ";
	g=p/q;
	return g;
}

// addition 2 function
int add2(int p,int q,int z)
{
	cout<<p<<" + "<<q<<" = ";
	int x,g=p+q;
	cin>>x;
	if(x==g)
		{cout<<"\n\nYour answer is Correct.\n"<<endl;
		z++;}
	else
		{cout<<"\nSorry but the correct answer is "<<g<<"\n"<<endl;}
	system("pause");
	return z;
	
}
// subtraction 2 function
int sub2(int p,int q,int z)
{
	cout<<p<<" - "<<q<<" = ";
	int x,g=p-q;
	cin>>x;
	if(x==g)
		{cout<<"\n\nYour answer is Correct.\n"<<endl;
		z++;}
	else
		{cout<<"\nSorry but the correct answer is "<<g<<"\n"<<endl;}
	system("pause");
	return z;
	
}
// multiplication 2 function
int mul2(int p,int q,int z)
{
	cout<<p<<" * "<<q<<" = ";
	int x,g=p*q;
	cin>>x;
	if(x==g)
		{cout<<"\n\nYour answer is Correct.\n"<<endl;
		z++;}
	else
		{cout<<"\nSorry but the correct answer is "<<g<<"\n"<<endl;}
	system("pause");
	return z;
	
}
// division 2 function
int div2(int p,int q,int z)
{
	cout<<p<<" / "<<q<<" = ";
	float x,g=p/q;
	cin>>x;
	if(x==g)
		{cout<<"\n\nYour answer is Correct.\n"<<endl;
		z++;}
		
	else
		{cout<<"\nSorry but the correct answer is "<<g<<"\n"<<endl;}
		system("pause");
		return z;
		
}





// main() function
int main()
{
    int a;
    a:a;
	system("cls");
	cout<<"\n***********************************************"<<endl;
    cout<<"Welcome to the Number Game!!!"<<endl;
	cout<<"***********************************************\n"<<endl;
    cout<<"Choose your favourite Mode:-\n1)Computer\n2)Multiplayer\n3)Calculator\n4)Quit (Press 0 or 4)\n(TYPE THE INDEX NO. FOR CHOOSING A MODE.)"<<endl;
    
    cin>>a;
    switch(a)
    {
        case 1:{
				int z=0,y=0;
				system("cls");
				cout<<"\n***********************************************"<<endl;
    			cout<<"Welcome to the Number Game!!!\nComputer Mode"<<endl;
				cout<<"***********************************************\n"<<endl;
	            cout<<"\nAre you sure you want play with Computer.\n(Yes=1,No=0)"<<endl;
	            int b;
	            cin>>b;
                if(b==0)
                   {goto a;}
                
		        system("cls");
				cout<<"\n***********************************************"<<endl;
    			cout<<"Welcome to the Number Game!!!\nComputer Mode"<<endl;
				cout<<"***********************************************\n"<<endl;
				cout<<"\nLet's take a look at the rules.\n(continue=1,skip=0)"<<endl;
		        cin>>b;
		        if(b==1)
                {
                     system("cls");
				cout<<"\n***********************************************"<<endl;
    			cout<<"Welcome to the Number Game!!!\nComputer Mode"<<endl;
				cout<<"***********************************************\n"<<endl;
				cout<<"\nLet's take a look at the rules."<<endl;
			        cout<<"1)Enter the numbers and the operation to be performed.\n(Addition=1,Subtraction=2,Multiplication=3,Division=4)";
			        cout<<"\n2)Computer will give answer to your problem and will give you a problem to solve.\n3)If you want to quit the game press 0.\n(continue=1,Quit=0)"<<endl;
			    cin>>b;
			    if(b==0)
                    {goto a;}
                }    
                int h,f,e,c;float g;
				e:e;
		        system("cls");
				cout<<"\n***********************************************"<<endl;
    			cout<<"Welcome to the Number Game!!!\nComputer Mode\nYour Score:- "<<z<<" | Total Questions:- "<<y<<endl;
				cout<<"***********************************************\n"<<endl;
		        cout<<"\nLet's start the Game.\n";
				y++;
				cout<<"Enter the Numbers:-\n(Press 0 to Quit.)"<<endl;
		        cin>>b;
		        if(b==0)
		      		{ system("cls");
						cout<<"\n***********************************************"<<endl;
    					cout<<"Welcome to the Number Game!!!\nComputer Mode"<<endl;
						cout<<"***********************************************\n"<<endl;
						cout<<"Are you sure you want to Quit.\n(Yes=1,No=0)\n(If your 1st Number is 0, it is saved untill you press 0 and Quit.)  "<<endl;
			            int m;
			            cin>>m;
			            if(m==1)
			            {
			            	goto a;
			            }
						system("cls");
						cout<<"\n***********************************************"<<endl;
    					cout<<"Welcome to the Number Game!!!\nComputer Mode\nYour Score:- "<<z<<" | Total Questions:- "<<y<<endl;
						cout<<"***********************************************\n"<<endl;
						cout<<"\nLet's start the Game.\nEnter the Numbers:-\n1st NO.:-  "<<b<<"\n2nd NO.:-  ";
					}
		    	cin>>c;
				c:c;
		    	cout<<"\nEnter the operaion to be performed:-\n(Press 0 to Quit)"<<endl;
		    	cin>>h;
		    	int p=b+35 ,q=c-15 ,r=c%2;
		    	switch(h)
		    	{
					case 0: goto a;
					default: goto c;
		     		case 1: g=add(b,c);
							cout<<g<<endl;
					         	switch(r)
									{
										case 0: z=mul2(p,q,z);
												break;
										case 1: z=sub2(p,q,z);
										        break;
									}
							goto e;
					case 2:g=sub(b,c);
							cout<<g<<endl;
					         	switch(r)
									{
										case 0: z=div2(p,q,z);
												break;
										case 1: z=mul2(p,q,z);
										        break;
									}
									goto e;
					case 3:g=mul(b,c);
							cout<<g<<endl;
					         	switch(r)
									{
										case 0: z=add2(p,q,z);
												break;
										case 1: z=div2(p,q+1,z);
										        break;	
									}
									goto e;
					case 4:float g1=divi(b,c);
							cout<<g1<<endl;
					         	switch(r)
									{
										case 0: z=sub2(p,q,z);
												break;
										case 1: z=add2(p,q,z);
										        break;
									}
							goto e;
		    	}
		}
		break;

					//End of mode 1;


		case 2 :{
				system("cls");
				cout<<"\n***********************************************"<<endl;
    			cout<<"Welcome to the Number Game!!!\nMultiplayer Mode"<<endl;
				cout<<"***********************************************\n"<<endl;
				cout<<"\nAre you sure you want play with Multiplayer.\n(Yes=1,No=0)"<<endl;
	            int b2;
	            cin>>b2;
                if(b2==0)
                   {goto a;}
                
		        system("cls");
				cout<<"\n***********************************************"<<endl;
    			cout<<"Welcome to the Number Game!!!\nMultiplayer Mode"<<endl;
				cout<<"***********************************************\n"<<endl;
				cout<<"\nLet's take a look at the rules.\n(continue=1,skip=0)"<<endl;
		        int c2,i;
		        cin>>c2;
		        if(c2==1)
                {
                    system("cls");
					cout<<"\n***********************************************"<<endl;
    				cout<<"Welcome to the Number Game!!!\nMultiplayer Mode"<<endl;
					cout<<"***********************************************\n"<<endl;
			        cout<<"\nLet's take a look at the rules.\n1)Enter the numbers and the operation to be performed.\n(Addition=1,Subtraction=2,Multiplication=3,Division=4)";
			        cout<<"\n2)Your partner will have to give answer to your problem and will give you a problem to solve\n3)If you want to quit the game press 0.\n(continue=1,Quit=0)"<<endl;  
			    	cin>>b2;
			    	if(b2==0)
                	    {goto a;}
                }    
				system("cls");
				cout<<"\n***********************************************"<<endl;
    			cout<<"Welcome to the Number Game!!!\nMultiplayer Mode"<<endl;
				cout<<"***********************************************\n"<<endl;
				cout<<"Enter the No. of Players:- ";
				int b8,y=0;
				cin>>b8;
				if(b8==0)
				 {goto a;}
				int ply[b8];
				for(i=0;i<b8;i++)
				{
					ply[i]=0;
				}	
                int h2,f2,e2;float g2;
				i=0;
				e2:e2;
				y+=1;
				if(y==b8+1)
					{y=1;}
				++i;
		        system("cls");
				cout<<"\n***********************************************"<<endl;
    			cout<<"Welcome to the Number Game!!!\nMultiplayer Mode\nScore Board:- ";
				for(i=0;i<b8;i++)
				{
					cout<<" "<<ply[i]<<" ";
				}		
				cout<<"\n***********************************************\n"<<endl;
				cout<<"\nLet's start the Game.";
				cout<<"\nEnter the Numbers:-\n(Press 0 to Quit.)"<<endl;
		        cin>>b2;
		        if(b2==0)
		      		{	system("cls");
						cout<<"\n***********************************************"<<endl;
    					cout<<"Welcome to the Number Game!!!\nMultiplayer Mode"<<endl;
						cout<<"***********************************************\n"<<endl;
						cout<<"Are you sure you want to Quit.\n(Yes=1,No=0)\n(If your 1st Number is 0, it is saved untill you press 1 and Quit.)  "<<endl;
			            int m2;
			            cin>>m2;
			            if(m2==1)
			            {
			            	goto a;
			            }
						system("cls");
						cout<<"\n***********************************************"<<endl;
    					cout<<"Welcome to the Number Game!!!\nMultiplayer Mode\nScore Board:- ";
				for(i=0;i<b8;i++)
				{
					cout<<" "<<ply[i]<<" ";
				}
						cout<<"\n***********************************************\n"<<endl;
						cout<<"\nLet's start the Game.\nEnter the Numbers:-\n1st NO.:-  "<<b2<<"\n2nd NO.:-  ";
					}
		    	
		    	cin>>c2;
				i=y-1;
				b2:b2;
		    	cout<<"\nEnter the operaion to be performed:-(Press 0 to Quit)"<<endl;
		    	cin>>h2;
		    	switch(h2)
		    	{
					case 0: goto a;
					default: goto b2;
		     		case 1: ply[i]=add2(b2,c2,ply[i]);
							goto e2;
					case 2: ply[i]=sub2(b2,c2,ply[i]);
							goto e2;
					case 3: ply[i]=mul2(b2,c2,ply[i]);
							goto e2;
					case 4: ply[i]=div2(b2,c2,ply[i]);
							goto e2;
		    	}
		}

				break;


					//End of mode 2;


		case 3 : {int b;
				b:b;
				system("cls");
				cout<<"\n***********************************************"<<endl;
    			cout<<"Welcome to the Number Game!!!Calculator Mode"<<endl;
				cout<<"***********************************************\n"<<endl;
	  			cout<<"\nEnter the Numbers:-\n(Press 0 to Quit.)"<<endl;
	  			int a,m,n;
	  			cin>>a;
	  			if(a==0) 
		   			{
						system("cls");
						cout<<"\n***********************************************"<<endl;
    				cout<<"Welcome to the Number Game!!!Calculator Mode"<<endl;
					cout<<"***********************************************\n"<<endl;
					cout<<"\nAre you sure you want to quit.\n(Yes=1,No=0.)\n(If your 1st number is 0, it is svaed untill you press 1 and Quit.)"<<endl;
		   			cin>>b;
		   			if(b==1) 
		   				{ goto a; }
					
					system("cls");
					cout<<"\n***********************************************"<<endl;
    				cout<<"Welcome to the Number Game!!!Calculator Mode"<<endl;
					cout<<"***********************************************\n"<<endl;
					cout<<"\nLet's start the Game.\nEnter the Numbers:-\n1st NO.:-  "<<a<<"\n2nd NO.:-  ";
					}	
	    		cin>>m;
				m:m;
				cout<<"\nEnter the operation to be performed:-(Press 0 to Quit)"<<endl;
				cin>>n;
    			switch(n)
	    			{
						case 0: goto a;
						default: goto m;
	     				case 1:b=add(a,m);
								cout<<b<<endl;
								system("pause");
								goto b;
	     				case 2:b=sub(a,m);
								cout<<b<<endl;
								system("pause");
								goto b;
	     				case 3:b=mul(a,m);
								cout<<b<<endl;
								system("pause");
								goto b;
	     				case 4: float b1=divi(a,m);
								cout<<b1<<endl;
								system("pause");
								goto b;
						
						
	    			}
    			break;
		}
					//End of mode 3;


		case 4: { exit(0);  }  	
		case 0: { exit(0);  }  
		default:{ goto a;   }

					//End of mode 4;

    }
	return 0;
}