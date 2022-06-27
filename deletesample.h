#include<stdio.h>
 
void Delete(){
	int status;
    char fileName[20];
    std::cout<<"Enter the Name of File: ";
    std::cin>>fileName;
    status = remove(fileName);
    if(status==0)
       std::cout<<"\nFile Deleted Successfully!";
    else
        std::cout<<"\nError Occurred!";
    std::cout<<std::endl;
   
}
 