//Jaena Louise L. Moyano
//2AM

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

using namespace std;

// Function prototypes
int getTotal(int [], int);
int posOfLargest(int [], int);
int posOfSmallest(int [], int);
int newFunctioning(int [], string [], int, int); //print them best sellers or least. ill explain how it works below

int main()
{
 	//Variable declarations
   const int NUM_TYPES = 5;   
   int sales[NUM_TYPES];
   string name[NUM_TYPES] = {"Lemon and Herb", "Mild", "Medium", "Hot", "Extra Hot"};
   int totalPeriPeriSauceSold,BestSellerProduct,LeastSellerProduct; 
   bool valid;
   char ans;
   
   ans='Y';
    while(ans=='Y'||ans=='y')
    {
	    cout << "This program will ask for the number of Peri Peri Sauce"<<endl;
		cout << "sold for the month for each flavor. Then, compute for the total sales"<<endl;
		cout << "of the month and give the bestseller and least seller products."<<endl<<endl;
		cout << "           Nandos's Peri Peri Sauce Sales Report       "<<endl<<endl;
	for (int type = 0; type < NUM_TYPES; type++)
	{
		START:
		cout << "Peri Peri Sauce sold for the month flavored " << name[type] << ": ";   
      	cin  >> sales[type];                  // Input the number of Peri Peri Sauce sold
      
		while (sales[type] < 0)
		{	cout << "Peri Peri Sauce sold must be 0 or more.  Please re-enter: ";
		   cin  >> sales[type];
		}
		while(cin.fail())			//error trap for Peri Peri Sauce sold for the month
             {
                              cin.clear();
                              cin.ignore();
                              cout<<"Error! Please enter an integer."<<endl;
                              valid = false;
                              goto START;
                              cin>> sales[type];
                              }  
	}


   // Call functions to get the total sales, bestseller and leastseller products
   totalPeriPeriSauceSold  = getTotal(sales, NUM_TYPES);
   LeastSellerProduct = posOfSmallest(sales, NUM_TYPES);
   BestSellerProduct = posOfLargest(sales, NUM_TYPES);
   
   cout << endl << endl;
   cout << "                  Sales Report \n\n";     // Peri Peri Sales Report Table
   cout << "Name                     Peri Peri Sauce Sold \n";
   cout << "_____________________________________________\n";
 
   
	   cout << name[0] <<setfill(' ') << setw (19)<< sales[0] << "\n";
       cout << name[1] <<setfill(' ') << setw (29)<< sales[1] << "\n";
	   cout << name[2] <<setfill(' ') << setw (27) <<sales[2] << "\n";
	   cout << name[3] <<setfill(' ') << setw (30)<< sales[3] << "\n";
	   cout << name[4] <<setfill(' ') << setw (24)<< sales[4] << "\n";  
   
   cout << "\nTotal Sales:" << setw(21) << totalPeriPeriSauceSold << endl<< endl;
   cout <<"Bestseller: ";
   newFunctioning(sales, name, NUM_TYPES, sales[BestSellerProduct]); //print all best sellers ^^
   cout << endl;
   cout << "Leastseller: ";
   newFunctioning(sales, name, NUM_TYPES, sales[LeastSellerProduct]); //print all least sellers ^^
   cout<<endl<<endl;
   
    ERRORTRAP:                  //Error trap for repeating the program
    cout << "Do you want to try again (Y/N)?  ";
    cin >> ans;
    if(ans!='Y' &ans!='y' &ans!='N' &ans!='n')
    goto ERRORTRAP;
    system("CLS");
     }
     
     if (ans=='n'||ans=='N')
     cout << "Thank you so much for using the program!" << endl;
     
     cout<<endl<<endl;
    
   return 0;
}

//Calculates and returns the total of the values stored in the array passed to the function
int getTotal (int array[], int numElts)
{
	int total = 0;

	for (int type = 0; type < numElts; type++)
		total += array[type];
	return total;
}

/*Finds and returns the subscript of the array position holding the largest value 
in the array passed to the function*/
int posOfLargest(int array[], int numElts)
{
	int indexOfLargest = 0;
	
	for (int pos = 1; pos < numElts; pos++)
	{
		if (array[pos] > array[indexOfLargest])
			indexOfLargest = pos;
	}
	return indexOfLargest;
}

/*Finds and returns the subscript of the array position holding the smallest value 
in the array passed to the function*/    
int posOfSmallest(int array[], int numElts)
{
	int indexOfSmallest = 0;
	
	for (int pos = 1; pos < numElts; pos++)
	{
		if (array[pos] < array[indexOfSmallest])
			indexOfSmallest = pos;
	}		
	return indexOfSmallest;
}

int newFunctioning(int array[], string arraying[], int numElts, int value) // new function
{
    int i=0;//checker ko kung first print ba siya. Basta para sa comma para di pangit tignan ^^
    for (int pos = 0; pos < numElts; pos++)   //what we are trying to do is find all the shiz with the similar values :)) 
    {                                         //then print it in a fashionable manner
        if (array[pos]==value)
        {
           if (i==0)  //para kung first print sya, walang camma bago print
           {
                  cout<<arraying[pos];
                  i=1;
                  }
              else   //para ", <value>" diba angas.
              {
                  cout << ", "<<arraying[pos]; 
                  }            
                  }
        
    }
}
