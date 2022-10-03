#include <iostream>
#include "subject.h"
#include "student.h"
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>

float Normalize(float *array, int i);
float findStandardDeviation(float *array, int i);
float findMean(float *array, int i);


using namespace std;


void Header();


int main()
{int mode,out=0;
int x, i,a,b,c,d;
    float MathArray[10];
    float PhArray[10];
    float DrArray[10];
    float CompArray[10];
    float ChArray[10];

string ID,math,Ph,Dr,Comp,Ch;
float numPoints;
student s0[1000];
 Header();



do{
cout<<"\n[1]Import Students data\n[2]Export student data\n[3]Normalize Saved Data\n[4]Export Grade Symbols\n[5]Show Statistics\n[6]Exit\n";
cout<<"Choice: ";cin>>mode;
    if(mode == 1){
   int no_of_students;// Nassef Import
    cout<<"please enter the number of students that you want to insert their data: ";
    cin>>no_of_students;

    for (int i=0; i<no_of_students; i++)
    {
     cout<<"Enter Full name (First&Last names) of Student Number "<<i+1<<" :";
     string firstName,lastName,id;
     int age,mathDegree,physicsDegree,drawingDegree,computerDegree,chemistryDegree;
     string gender;
     cin>>firstName;cin>>lastName;
     cout<<"enter student's Code: ";
     cin>>id;
     cout<<"enter student's age: ";
     cin>>age;
     cout<<"enter student's Gender(m or f): ";
     cin>>gender;
     ofstream studentsGrade("studentsGrade.csv",ios::app);
    cout<<"Almost Done...\n";
     cout<<"Now, please enter the student's degrees\n"<<"enter the math degree: ";
     cin>>mathDegree;
     cout<<"enter the physics degree: ";
     cin>>physicsDegree;
     cout<<"enter the drawing degree: ";
     cin>>drawingDegree;
     cout<<"enter the computer degree: ";
     cin>>computerDegree;
     cout<<"enter the chemistry degree: ";
     cin>>chemistryDegree;
     cout<<"\n\nStudent's Data have been Saved Successfully!\n\n";

     s0[i].setFirstName(firstName);s0[i].setLastName(lastName); s0[i].setCode(id);s0[i].setAge(age);s0[i].setGender(gender);
     s0[i].setMathDegree(mathDegree);s0[i].setPhysicsDegree(physicsDegree);s0[i].setDrawingDegree(drawingDegree);
     s0[i].setComputerDegree(computerDegree);s0[i].setChemistryDegree(chemistryDegree);

    }

    /*ofstream studentsData ("studentsData.csv",ios::app);
      studentsData<<"Name, ID, Age, Gender \n";
       ofstream studentsGrade("studentsGrade.csv",ios::app);
       studentsGrade<<"ID, Math Degree, Physics Degree, Drawing Degree, Computer Degree, Chemistry Drawing \n";*/

   for (int i=0; i<no_of_students; i++)
    {
ofstream studentsData ("studentsData.csv",ios::app);

     studentsData <<s0[i].getFirstName()<<" "<<s0[i].getLastName()<<","<< s0[i].getCode()<<","<<s0[i].getAge()<<","<<s0[i].getGender();
     studentsData<<"\n";
     studentsData.close();

    ofstream studentsGrade("studentsGrade.csv",ios::app);

     studentsGrade<<s0[i].getCode()<<","<<s0[i].getMathDegree()<<","<<s0[i].getPhysicsDegree()<<","<<s0[i].getDrawingDegree()<<","<<s0[i].getComputerDegree()<<","<<s0[i].getChemistryDegree();

     studentsGrade<<"\n";
     studentsGrade.close();
    }
       }






    else if (mode == 2){//Export Tarek
int age_int; //bridge tarek
student studentfromcsv[1000];
ifstream file;
file.open("studentsData.csv");
if(file.is_open()){
    while (file.good()){
                      string gmal,dlal,atayf,ltayf,ah_ya3eny;
        for(int i=0;i<1000;i++){

        getline(file,gmal,' ');
        studentfromcsv[i].setFirstName(gmal);
         getline(file,ah_ya3eny,',');
        studentfromcsv[i].setLastName(ah_ya3eny);

        getline(file,dlal,',');
        studentfromcsv[i].setCode(dlal);

        getline(file,atayf,',');
        stringstream convert (atayf);
        convert>>age_int;
        studentfromcsv[i].setAge(age_int);

        getline(file,ltayf,'\n');
        studentfromcsv[i].setGender(ltayf);}}  file.close();}
        else{cout<<"This is the First runtime \nwarning your database is empty\n";}


      int math_INT,phy_int,draw_int,comp_int,chem_int;

file.open("studentsGrade.csv");
if(file.is_open()){
    while (file.good()){
            string id,math,Physicss,drawingg,computer,chemistryy;
        for(int i=0;i<1000;i++){

        getline(file,id,',');
        studentfromcsv[i].setCode(id);

        getline(file,math,',');
         stringstream c (math);
        c>>math_INT;
        studentfromcsv[i].setMathDegree(math_INT);

        getline(file,Physicss,',');
        stringstream co (Physicss);
        co>>phy_int;
        studentfromcsv[i].setPhysicsDegree(phy_int);

        getline(file,drawingg,',');
         stringstream con (drawingg);
        con>>draw_int;
        studentfromcsv[i].setDrawingDegree(draw_int);

        getline(file,computer,',');
         stringstream conv (computer);
        conv>>comp_int;
        studentfromcsv[i].setComputerDegree(comp_int);

        getline(file,chemistryy,',');
         stringstream conve (chemistryy);
        conve>>chem_int;
        studentfromcsv[i].setChemistryDegree(chem_int);



        }}  file.close();}

        string IDSearchData;


    cout<<"Enter Student ID: ";cin>>IDSearchData;
         for(int i=0;i<100;i++)
    {
        if(studentfromcsv[i].getCode() == IDSearchData){
    cout<<"\nStudent name is: "<<studentfromcsv[i].getFirstName()<<" "<<studentfromcsv[i].getLastName()<<"\nStudent gender is: "<<studentfromcsv[i].getGender()<<"\nStudent Age is: "<<studentfromcsv[i].getAge();
     cout<<"\n\n   Loading Grades...\n";
            cout<<"Students Grades are: \n";
    cout<<"Math Degree is: "<<studentfromcsv[i].getMathDegree()<<"\nPhysics Degree is: "<<studentfromcsv[i].getPhysicsDegree()<<"\nDrawing Degree is: "<<studentfromcsv[i].getDrawingDegree()<<"\nChemistry Degree is: "<<studentfromcsv[i].getChemistryDegree()<<"\nComputer Degree is : "<<studentfromcsv[i].getComputerDegree()<<endl;
    cout <<"Student Total marks is: "<<studentfromcsv[i].getMathDegree() + studentfromcsv[i].getPhysicsDegree() + studentfromcsv[i].getDrawingDegree() + studentfromcsv[i].getChemistryDegree()+studentfromcsv[i].getComputerDegree()<<" Out of 500 !\n";

    }

          else if(s0[i].getCode() == IDSearchData){
                 cout<<"\nStudent name is: "<<s0[i].getFirstName()<<" "<<s0[i].getLastName()<<"\n Student gender is: "<<s0[i].getGender()<<"\n Student Age is: "<<s0[i].getAge();
     cout<<"\n\n   Loading Grades...\n";
            cout<<"Students Grades are: \n";
             cout<<"Math Degree is: "<<s0[i].getMathDegree()<<"\nPhysics Degree is: "<<s0[i].getPhysicsDegree()<<"\nDrawing Degree is: "<<s0[i].getDrawingDegree()<<"\nChemistry Degree is: "<<s0[i].getChemistryDegree()<<"\nComputer Degree is : "<<s0[i].getComputerDegree()<<endl;
    cout <<"Student Total marks is: "<<s0[i].getMathDegree() + s0[i].getPhysicsDegree() + s0[i].getDrawingDegree() + s0[i].getChemistryDegree()+s0[i].getComputerDegree()<<" Out of 500 !\n";}

          }
            }

    else if(mode == 3){//Normalize Salah
        ifstream myfile("studentsGrade.csv");

if (myfile.is_open())

{
    int i=0 ;
    while (myfile.good())

    {
        getline(myfile, ID,',');
        {
        getline(myfile, math,',');
        stringstream convert(math);
        convert >>MathArray[i];
        }
        {
        getline(myfile, Ph,',');
        stringstream convert(Ph);
        convert >>PhArray[i];
        }
        {
        getline(myfile, Dr,',');
        stringstream convert(Dr);
        convert >>DrArray[i];
        }
        {
        getline(myfile, Comp,',');
        stringstream convert(Comp);
        convert >>CompArray[i];
        }
        getline(myfile, Ch,'\n');
        stringstream convert(Ch);
        convert >>ChArray[i];
        i++;



    }


    myfile.close();

    numPoints = i-1;

    cout << " to Normalize Math press 1 " <<endl << " to Normalize Physics press 2 " <<endl
         <<" to Normalize Drawing press 3 " <<endl <<" to Normalize Computing press 4 " <<endl
         <<" to Normalize Chemistry press 5 " << endl ;
    cin >> x ;

    if (x==1)
    {
    cout << "Mean for Math = " << findMean(MathArray, numPoints)<<endl;
    cout << "Standard Deviation for Math = " << findStandardDeviation(MathArray, numPoints)<<endl;
    cout << "Normalized data for Math = " << Normalize(MathArray, numPoints)<<endl;
    }
    else if (x==2)
    {
    cout << "Mean for Physics  = " << findMean(PhArray, numPoints)<<endl;
    cout << "Standard Deviation for Physics = " << findStandardDeviation(PhArray, numPoints)<<endl;
    cout << "Normalized data for Physics = " << Normalize(PhArray, numPoints)<<endl;
    }
    else if (x==3)
    {
    cout << "Mean for Drawing  = " << findMean(DrArray, numPoints)<<endl;
    cout << "Standard Deviation for Drawing = " << findStandardDeviation(DrArray, numPoints)<<endl;
    cout << "Normalized data for Drawing = " << Normalize(DrArray, numPoints)<<endl;
    }
    else if (x==4)
    {
    cout << "Mean for Computing = " << findMean(CompArray, numPoints)<<endl;
    cout << "Standard Deviation for Computing = " << findStandardDeviation(CompArray, numPoints)<<endl;
    cout << "Normalized data for Computing  = " << Normalize(CompArray, numPoints)<<endl;
    }
    else if (x==5)
    {
    cout << "Mean for Chemistry  = " << findMean(ChArray, numPoints)<<endl;
    cout << "Standard Deviation for Chemistry = " << findStandardDeviation(ChArray, numPoints)<<endl;
    cout << "Normalized data for Chemistry = " << Normalize(ChArray, numPoints)<<endl;
    }
}
else{ cout<< "Error loading file" <<endl;

}

    }


else if (mode == 4){



ifstream importingfile ;
importingfile.open("studentsGrade.csv");

    string file_name ;
    ofstream file ;
    file.open("studentsGradeSymbol.csv");

    if ( file.is_open())
    {
        file << "Code"<< ','<<"Math" << ',' << "Physics" << ',' << "Drawing" << ',' << "Computer" << ','<< "Chemistry"<<endl;


       string id,math,Physicss,drawingg,computer,chemistryy;
        student lol ;
        getline(importingfile, id ) ;

   while (importingfile.good())
{
       int math_INT,phy_int,draw_int,comp_int,chem_int;

       getline(importingfile , id , ',') ;
        if (id.empty())
        break;

       lol.setCode(id) ;


        getline(importingfile,math,',');
         stringstream c (math);
        c>>math_INT;
       lol.setMathDegree(math_INT);

        getline(importingfile,Physicss,',');
        stringstream co (Physicss);
        co>>phy_int;
       lol.setPhysicsDegree(phy_int);

        getline(importingfile,drawingg,',');
         stringstream con (drawingg);
        con>>draw_int;
       lol.setDrawingDegree(draw_int);

        getline(importingfile,computer,',');
         stringstream conv (computer);
        conv>>comp_int;
       lol.setComputerDegree(comp_int);

        getline(importingfile,chemistryy);


         stringstream conve (chemistryy);
        conve>>chem_int;

       lol.setChemistryDegree(chem_int);


            file << lol.getCode() << ',' ;

            lol.calcMath();
            file << lol.getMathGrade() << ',' ;

            lol.calcPhysics();
            file << lol.getPhysicsGrade() << ',' ;

            lol.calcDrawing();
            file << lol.getDrawingGrade() << ',' ;


            lol.calcComputer();
            file << lol.getComputerGrade() << ',' ;

            lol.calcChemistry();
            file << lol.getChemistryGrade() << ',' ;



            file << endl ;
}
 importingfile.close();

    }
    file.close();
    cout << endl ;
    cout << "Grades have been added";
}




else if (mode == 5){

     ifstream importingfile ;

     importingfile.open("studentsGradeSymbol.csv");

     float num_of_students= 0 ;

     string Grade;

     Subject s1[6] ;


    getline(importingfile, Grade   ) ;

    while (importingfile.good())
{
    getline(importingfile , Grade , ',');

      for (int i = 0 ; i < 6 ; i++)
{
        if (i==5 )
          {

           getline(importingfile,Grade);


          }
          else
          {

           getline(importingfile,Grade , ',' );


          }

        if(!Grade.empty())
        num_of_students++   ;

        if(Grade == "A")
        s1[i].A_counter++   ;

        if(Grade== "B+")
        s1[i].B_p_counter++ ;

        if(Grade== "B" )
        s1[i].B_counter++   ;

        if(Grade== "C+")
        s1[i].C_p_counter++ ;

        if(Grade== "C" )
        s1[i].C_counter++   ;

        if(Grade== "D+")
        s1[i].D_p_counter++ ;

        if(Grade== "D" )
        s1[i].D_counter++   ;

        if(Grade== "F" )
        s1[i].F_counter++   ;


}


   }

     num_of_students/=5 ;

   for(int i=0 ; i< 6 ; i++)
   {

    s1[i].A_percentage   =  s1[i].A_counter   / num_of_students ;
    s1[i].B_p_percentage =  s1[i].B_p_counter / num_of_students ;
    s1[i].B_percentage   =  s1[i].B_counter   / num_of_students ;
    s1[i].C_p_percentage =  s1[i].C_p_counter / num_of_students ;
    s1[i].C_percentage   =  s1[i].C_counter   / num_of_students ;
    s1[i].D_p_percentage =  s1[i].D_p_counter / num_of_students ;
    s1[i].D_percentage   =  s1[i].D_counter   / num_of_students ;
    s1[i].F_percentage   =  s1[i].F_counter   / num_of_students ;

    cout << endl ;
    if (i == 0 )
       cout<<    "for subject :math"  <<endl;
       if (i == 1 )
       cout<<  "for subject physics" <<endl;
       if (i == 2 )
       cout<<  "for subject drawing" <<endl;
       if (i == 3 )
       cout<< "for subject computer" <<endl;
       if (i == 4 )
       cout<<"for subject chemistry" <<endl;
       if (i==5 )
        break ;


    cout << s1[i].A_percentage   * 100 << "% of students got A  " << endl ;
    cout << s1[i].B_p_percentage * 100 << "% of students got B+ " << endl ;
    cout << s1[i].B_percentage   * 100 << "% of students got B  " << endl ;
    cout << s1[i].C_p_percentage * 100 << "% of students got C+ " << endl ;
    cout << s1[i].C_percentage   * 100 << "% of students got C  " << endl ;
    cout << s1[i].D_p_percentage * 100 << "% of students got D+ " << endl ;
    cout << s1[i].D_percentage   * 100 << "% of students got D  " << endl ;
    cout << s1[i].F_percentage   * 100 << "% of students got F  " << endl ;
    cout << endl ;

}


 importingfile.close();



    cout << endl ;


}

    else if(mode == 6){
            cout<<"Good Bye!\nProgram Exit....\n";
        out =1; //loop exit
    }


}while(out == 0);



    return 0;
}
void Header(){
   cout<<"\t\t\t\t\t ***********************\n";
    cout<<"\t\t\t\t\t **Welcome to your LMS**\n";
    cout<<"\t\t\t\t\t ***********************\n";
    cout<<"\n\t\t\t\t Please choose the required operating mode\n\n";}

float findMean(float *array, int i){
    float sum = 0.0, sDeviation = 0.0, mean;
    int x;

    for(x = 0; x < i; x++) {
        sum += array[x];

    }
    // Calculating mean
    mean = sum/i;
return mean;
}

// Function to find standard deviation
float findStandardDeviation(float *array, int i) {
    float sum = 0.0, sDeviation = 0.0, mean;
    int x;

    for(x = 0; x < i; x++) {
        sum += array[x];
    }
    // Calculating mean
    mean = sum/i;
    for(x = 0; x < i; ++x) {
        sDeviation += pow(array[x] - mean, 2);
    }
    return sqrt(sDeviation/i);

}
// Function to find Normalize
float Normalize(float *array, int i)
 {
    float sum = 0.0, sDeviation = 0.0, mean, Standard,Norm;
     int x;

    for(x = 0; x < i; x++) {
        sum += array[x];

    }
    // Calculating mean
    mean = sum/i;
    for(x = 0; x < i; x++) {
        sDeviation += pow(array[x] - mean, 2);
        Standard = sqrt(sDeviation/i);
    }
    for(x = 0; x < i ; x++){
Norm = (array[x]-mean) / Standard;
    cout<<Norm<<"\t";
    }
 }
