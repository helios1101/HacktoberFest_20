#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;


class Stud;
class MyException
{
 char str1[50];
 int what;

 public:
 MyException()
 {
      *str1 =0;
      what =0;
}
 MyException (const char s[], int x)
 {
    strcpy(str1,s);
    what = x;

   }
void printInfo(MyException e)
  {
    cout<<e.str1;
    cout<<e.what;

  }
//friend class Stud;
};

class Stud
{
  int rollNo;
  int Age;
  int yoj;
  public:
  void  setInfo(int x, int y, int z)
  {
    rollNo =x;
    Age    =y;
    yoj    =z;
  }
  void displayInfo()
  {
      cout<<"\t"<<rollNo;
      cout<<"\t"<<Age;
      cout<<"\t"<<yoj<<endl;
  }

};
Stud createRecord();
void displayColHead()
{
      cout<<"\t rollNo";
      cout<<"\t Age";
      cout<<"\t yoj"<<endl;

}
void menu()
{
    cout<<"1.Creation  "<<endl;
    cout<<"2.Display "<<endl;
    cout<<"3.Appending  "<<endl;


}
void createFile()
{
    Stud s;
    int opt;
    ofstream out;
    out.open("stud.dat",ios::out|ios::binary);

    while(opt)
    {
      s=createRecord();
      out.write((char*)&s,sizeof(s));
      cout<<"Any more records?(1/0)";
      cin>>opt;

    }
    out.close();

}

Stud createRecord()
{
    int a,b,c;
    int flag=0;
    Stud s;
    while(!flag)
    {
        try
        {
            flag=1;
            cout<<" enter values for roll no and age and yob: "<<endl;
            cin>>a;
            cin>>b;
            cin>>c;

            if (a<=0)
                throw MyException("Roll No cannot be negative....",a);
            if (b<15)
                throw MyException("Age cannot be less than 15::", b);

            if (c >2019)
                throw MyException("jOINING Year Cannot be greater than current year :: ",c);
        }
        catch(MyException e)
        {
            e.printInfo(e);
            flag =0;
        }
        if (flag==1){
            s.setInfo(a,b,c);
            return s;
        }
    }
}

void displayFile()
{
    Stud s;
    ifstream in;
    in.open("stud.dat",ios::in|ios::binary);

    in.read((char *)&s,sizeof(s));
    while(!in.eof())
    {
      s.displayInfo();
      in.read((char *)&s,sizeof(s));
    }
}

void appendRecord()
{
    Stud s;
    fstream out;
    out.open("stud.dat",ios::app|ios::out|ios::binary);
    s=createRecord();
    out.write((char *)&s,sizeof(s));
    out.close();
}


int main()
{

    int opt=1;
    while(opt)
    {
        menu();
        cout<<"Enter ur option...";
        cin>>opt;
        if (opt==1)
        {
            createFile();
            cout<<"File created successfully ....."<<endl;
        }
        if (opt==2)
        {
            displayFile();
            cout<<"File displayed successfully ....."<<endl;
        }
        if (opt==3)
        {
            appendRecord();
            cout<<"File appended successfully ....."<<endl;
        }
     }
}




