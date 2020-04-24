#include <iostream> //for std::endl, std::cout, std::cin
#include <string>  //for std::string::substr
#include <vector> //for std::vector
#include <algorithm> //for std::string::find
#include <fstream>  //for std::ofstream & std::ifstream
#include <conio.h> //for std::getche, std::system
using namespace std; //defining std in namespace
class NumberSearch //declared class
{
	private:
		string UserNumber;
		string SearchingNumber;
		char ch;
		fstream fp;
		ofstream ofp;
		string line;
	public: 
		void GetNum();
		void Algorithm();
		void Process();
		void CreateMenu();
		void WriteNumber();
		void PrintNumber(); 
		void AboutMe();
		 vector <string> Ncell
{
	"9779800","9779801","9779802","9779803","9779804",
	"9779805","9779806","9779807","9779808","9779809",
	"9779810","9779811","9779812","9779813","9779814",
	"9779815","9779816","9779817","9779818","9779819",
	"9779820","9779821","9779822","9779823","9779824",
	"9779825","9779826","9779827","9779829"
};

		vector <string> Landline
{
	"0097714","0097710","0097711","0097719","0097721",
	"0097723","0097724","0097725","0097726","0097727",
	"0097729","0097731","0097733","0097735","0097736",
	"0097737","0097738","0097741","0097744","0097746",
	"0097747","0097748","0097749","0097751","0097753",
	"0097755","0097756","0097757","0097761","0097763",
	"0097764","0097765","0097766","0097767","0097768",
	"0097769","0097771","0097775","0097776","0097777",
	"0097778","0097779","0097781","0097782","0097783",
	"0097784","0097786","0097787","0097788","0097789",
	"0097791","0097792","0097793","0097794","0097795",
	"0097796","0097797","0097799"
};

		vector <string> Namaste
{
	"9779840","9779841","9779842","9779843","9779844",
	"9779845","9779846","9779847","9779848","9779849",
	"9779850","9779851","9779852","9779853","9779854",
	"9779855","9779856","9779857","9779858","9779859",
	"9779860","9779861","9779862","9779863","9779864",
	"9779865","9779866","9779867","9779868","9779869"
};

		vector <string> SmartCell
{
	"9779610"," 9779611","9779612","9779613","9779614",
	"9779615","9779616","9779617","9779618","9779619",
	"9779880","9779881","9779882","9779883","9779884",
	"9779885","9779886","9779887","9779888","9779889"
};

		vector <string> UTL
{
	"9779720","9779721","9779722","9779723","9779724",
	"9779725","9779726","9779727","9779728","9779729"
};

		vector <string> HelloNepal
{
	"9779630","9779631","9779632","9779633","9779634",
	"9779635","9779636","9779637","9779638","9779639"
};
};

int main(int argc, char const *argv[])
{
NumberSearch find; 
//Declared find as an Object
find.CreateMenu();
find.GetNum();
find.WriteNumber();
find.Process();
find.Algorithm();
find.PrintNumber();
find.AboutMe();
//Calling these all functions under public class of NumberSearch.
return 0;		
}

void NumberSearch :: GetNum()
{	
	cout<<"\n\n\n\tEnter the number you want to search:" << " + " ;
	//Along with tabs and break lines ask the questions under the menu no.1
	cin>>UserNumber;
	//Get an input from user!
}

void NumberSearch :: Algorithm()
{
		// Algorithm that finds in if, else if and else loops
		// It uses std::find from <algorithm> to compare the value between
		// two ranges of a same <vector> type.
	if(find(Ncell.begin(), Ncell.end(), SearchingNumber) != Ncell.end())
		cout << "\n\n\n\t+" << UserNumber <<" is a Ncell number!\n\n\n\t"<<endl;
	else if(find(Landline.begin(), Landline.end(), SearchingNumber) != Landline.end())
   		cout << UserNumber << "\n\n\n\t is a Landline Number!\n\n\n\t" << endl;
	else if(find(Namaste.begin(), Namaste.end(), SearchingNumber) != Namaste.end())
   		cout << "\n\n\n\t+" << UserNumber << " is a Namaste Number!\n\n\n\t" << endl;
	else if(find(SmartCell.begin(), SmartCell.end(), SearchingNumber) != SmartCell.end())
   		cout << "\n\n\n\t+" << UserNumber << " is a SmartCell Number!\n\n\n\t" ;
	else if(find(UTL.begin(), UTL.end(), SearchingNumber) != UTL.end())
   		cout << "\n\n\n\t+" << UserNumber << " is a UTL Number!\n\n\n\t" ;
	else if(find(HelloNepal.begin(), HelloNepal.end(), SearchingNumber) != HelloNepal.end())
   		cout << "\n\n\n\t+" << UserNumber << " is a HelloNepal Number!\n\n\n\t" ;
	else
 		cout<<"\n\n\n\tSorry, we don't have this number in our database!\n\n\n\t"<< endl;
}
void NumberSearch :: Process()
{
	SearchingNumber = UserNumber.substr(0,7); 
	//get the number and cut the numbers so that it could match with vectors elements
}
void NumberSearch :: CreateMenu()
{
	//Creates a do while loop inside a switch i.e. nested switch 
	do
    {
        system("cls");
        cout << "\n\n\n\tMAIN MENU";
        cout << "\n\n\t01. Search a number";
        cout << "\n\n\t02. List Searched Numbers";
        cout << "\n\n\t03. About Me";
        cout << "\n\n\t04. Exit";
        cout << "\n\n\tSelect Your Option Between 1 to 3: ";
        ch=getche();
        //now it switches characters gotten from ch
        
        switch(ch)
        {
       case '1':
       		system("cls");
            		GetNum();
		WriteNumber();	
		Process();
		Algorithm();
		system("pause");
            		break;
       case '2':
                	PrintNumber();
                	system("pause");
                 	break;
        case '3':
                	AboutMe();
                	system("pause");
                 	break;
       default :
            		exit(0);
        }
    }
      while(ch!='4');
  }

void NumberSearch :: WriteNumber()
  {
        ofp.open("./NumberSheet.txt");  //opens file for writing
        system("cls"); //clears the system
       ofp.write((char*)&(UserNumber),sizeof(UserNumber)); //specify what to write and what of length 
       ofp.flush(); //it will later flush all the stream
       ofp.close(); //it closes the writing stream
}
void NumberSearch :: PrintNumber() 
{
    system("cls"); //it clears the screen
    fp.open("./NumberSheet.txt",ios::in); //It opens the file specified in the following
    if(!fp) 
    	{
        		cout << "\n\n\n\t ERROR!!! File couldn't be opened! \n\n\n\t"<< endl; //Error specified
   	 }
    else
    	{
    while (getline(fp,line)) //it gets the line by line from fp stream
    		{
    		cout << "\n\n\n\t" << line << endl; //tab and break line along with the data got from UserNum	
    		}
   	}
	fp.close(); //closes the file
}
void NumberSearch :: AboutMe()
{
	//Prints about me 
	cout << "\n\n\n\t Program: NumberChecker 1.2 \n\t Developer: Siddharth Belbase \n\t siddharthbelbase@gmail.com"<< "\n\n\t";
}
//THANKYOU FOR APPROVING THIS PROGRAM, MADE WITH LOVE IN NEPAL, COPYRIGHT SIDBELBASE, ALL RIGHTS RESERVED!!!
//THANKYOU FOR APPROVING THIS PROGRAM, MADE WITH LOVE IN NEPAL, COPYRIGHT SIDBELBASE, ALL RIGHTS RESERVED!!!