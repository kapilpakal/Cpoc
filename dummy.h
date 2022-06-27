using namespace std;
string f1,f2;
void copy(){
		cout<< "enter source filename and Destination filename:"<<endl;
		 
		 cin>>f1;//taking input for source file 
		 cin>>f2;//taking input for destination file
	     
	     std::ifstream  src(f1, std::ios::binary);
	     std::ofstream  dst(f2,   std::ios::binary);
	     dst << src.rdbuf();
	     cout<<"File copied Succesfully";
	     
	    
	 }