#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <iostream>
#include <fstream>
using namespace std;


class student
{
private:
 int mathDegree,physicsDegree,drawingDegree,computerDegree,chemistryDegree,age;
 string code, firstName,lastName,mathGrade,physicsGrade,drawingGrade,computerGrade,chemistryGrade,gender;

 float gpa;
public:


    //setters
    void setCode(string c)
    {
        code=c;
    }
    void setFirstName(string n)
    {
        firstName=n;
    }
    void setLastName(string n)
    {
        lastName=n;
    }
    void setGender(string g)
    {
        gender=g;
    }

    void setAge(int a)
    {
        age=a;
    }
    void setgpa(float gp)
    {
        gpa=gp;
    }
    void setMathDegree(int md)
    {
        mathDegree=md;
    }
    void setPhysicsDegree(int pd)
    {
        physicsDegree=pd;
    }
    void setDrawingDegree(int dd)
    {
        drawingDegree=dd;
    }
    void setComputerDegree(int cd)
    {
        computerDegree=cd;
    }
    void setChemistryDegree(int ch_d)
    {
        chemistryDegree=ch_d;
    }
    void setMathGrade(string mg)
    {
        mathGrade=mg;
    }
    void setPhysicsGrade(string pg)
    {
        physicsGrade=pg;
    }
    void setDrawingGrade(string dg)
    {
        drawingGrade=dg;
    }
    void setComputerGrade(string cg)
    {
        computerGrade=cg;
    }
    void setChemistryGrade(string ch_g)
    {
        chemistryGrade=ch_g;
    }
    //getters
    string getCode()
    {
        return code;
    }
    string getFirstName()
    {
        return firstName;
    }
    string getLastName()
    {
        return lastName;
    }
    string getGender()
    {
        return gender;
    }
    string subjects ;
    int getAge()
    {
        return age;
    }
    float getgpa()
    {
        return gpa;
    }
    int getMathDegree()
    {
        return mathDegree;
    }
    int getPhysicsDegree()
    {
        return physicsDegree;
    }
    int getDrawingDegree()
    {
        return drawingDegree;
    }
    int getComputerDegree()
    {
        return computerDegree;
    }
    int getChemistryDegree()
    {
        return chemistryDegree;
    }
    string getMathGrade()
    {
        return mathGrade;
    }
    string getPhysicsGrade()
    {
        return physicsGrade;
    }
    string getDrawingGrade()
    {
        return drawingGrade;
    }
    string getComputerGrade()
    {
        return computerGrade;
    }
    string getChemistryGrade()
    {
        return chemistryGrade;
    }

void calcMath ()
{
  if (mathDegree < 60)
  {
      mathGrade = "F";
  }
  else if  ( mathDegree <65 && mathDegree > 60)
  {
      mathGrade = "D";
  }
  else if ( mathDegree <70 && mathDegree >= 65)
  {
      mathGrade = "D+";
  }
  else if ( mathDegree <75 && mathDegree >= 70)
  {
      mathGrade = "C";
  }
  else if ( mathDegree <80 && mathDegree >= 75)
  {
      mathGrade = "C+";
  }
  else if ( mathDegree <85 && mathDegree >= 80)
  {
      mathGrade = "B";
  }
  else if ( mathDegree <90 && mathDegree >= 85)
  {
      mathGrade = "B+";
  }
  else if ( mathDegree >= 90)
  {
      mathGrade = "A";
  }
}
void calcPhysics ()
{
  if (physicsDegree < 60)
  {
      physicsGrade = "F";
  }
  else if  ( physicsDegree <65 && physicsDegree > 60)
  {
      physicsGrade = "D";
  }
  else if ( physicsDegree <70 && physicsDegree >= 65)
  {
      physicsGrade = "D+";
  }
  else if ( physicsDegree <75 && physicsDegree >= 70)
  {
      physicsGrade = "C";
  }
  else if ( physicsDegree <80 && physicsDegree >= 75)
  {
      physicsGrade = "C+";
  }
  else if ( physicsDegree <85 && physicsDegree >= 80)
  {
      physicsGrade = "B";
  }
  else if ( physicsDegree <90 && physicsDegree >= 85)
  {
      physicsGrade = "B+";
  }
  else if ( physicsDegree >= 90)
  {
      physicsGrade = "A";
  }
}
void calcDrawing ()
{
  if (drawingDegree < 60)
  {
      drawingGrade = "F";
  }
  else if  ( drawingDegree <65 && drawingDegree > 60)
  {
      drawingGrade = "D";
  }
  else if ( drawingDegree <70 && drawingDegree >= 65)
  {
      drawingGrade = "D+";
  }
  else if ( drawingDegree <75 && drawingDegree >= 70)
  {
      drawingGrade = "C";
  }
  else if ( drawingDegree <80 && drawingDegree >= 75)
  {
      drawingGrade = "C+";
  }
  else if ( drawingDegree <85 && drawingDegree >= 80)
  {
      drawingGrade = "B";
  }
  else if ( drawingDegree <90 && drawingDegree >= 85)
  {
      drawingGrade = "B+";
  }
  else if ( drawingDegree >= 90)
  {
      drawingGrade = "A";
  }
}
void calcComputer ()
{
  if (computerDegree < 60)
  {
      computerGrade = "F";
  }
  else if  ( computerDegree <65 && computerDegree > 60)
  {
      computerGrade = "D";
  }
  else if ( computerDegree <70 && computerDegree >= 65)
  {
      computerGrade = "D+";
  }
  else if ( computerDegree <75 && computerDegree >= 70)
  {
      computerGrade = "C";
  }
  else if ( computerDegree <80 && computerDegree >= 75)
  {
      computerGrade = "C+";
  }
  else if ( computerDegree <85 && computerDegree >= 80)
  {
      computerGrade = "B";
  }
  else if ( computerDegree <90 && computerDegree >= 85)
  {
      computerGrade = "B+";
  }
  else if ( computerDegree >= 90)
  {
      computerGrade = "A";
  }
}
void calcChemistry ()
{
  if (chemistryDegree < 60)
  {
      chemistryGrade = "F";
  }
  else if  ( chemistryDegree <65 && chemistryDegree > 60)
  {
      chemistryGrade = "D";
  }
  else if ( chemistryDegree <70 && chemistryDegree >= 65)
  {
      chemistryGrade = "D+";
  }
  else if ( chemistryDegree <75 && chemistryDegree >= 70)
  {
      chemistryGrade = "C";
  }
  else if ( chemistryDegree <80 && chemistryDegree >= 75)
  {
      chemistryGrade = "C+";
  }
  else if ( chemistryDegree <85 && chemistryDegree >= 80)
  {
      chemistryGrade = "B";
  }
  else if ( chemistryDegree <90 && chemistryDegree >= 85)
  {
      chemistryGrade = "B+";
  }
  else if ( chemistryDegree >= 90)
  {
      chemistryGrade = "A";
  }
}

};


#endif // STUDENT_H_INCLUDED
