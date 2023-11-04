#include <iostream>
#include <string>
using namespace std;

class ClassA
{
public:
    string name1;
    string name2;

    ClassA()
    {
    cout<<"...........Welcome to a CRICKET SCORE BOARD ........."<<endl;
    cout<<endl;
    }

    void country_names()
    {
    cout<<"Enter Country name 1 : ";
    cin>>name1;
    cout<<endl;

    cout<<"Enter Country name 2 : ";
    cin>>name2;
    cout<<endl;
    }
};

class ClassB :public ClassA
{
public:
     int country1Score,country2Score,country1wicket,country2wicket,wonBy;

     float country1over,country2over;

     void Final_scores()
     {
      cout<<"Enter final Score of "<<name1<<" : ";
      cin>>country1Score;
      cout<<endl;

      cout<<"Enter final Score of "<<name2<<" : ";
      cin>>country2Score;
      cout<<endl;
     }

    void Wickets()
     {
      cout<<"Enter total Wickets " <<name1 <<" : ";
      cin>>country1wicket;
      cout<<endl;

      cout<<"Enter total Wickets " <<name2 <<" : ";
      cin>>country2wicket;
      cout<<endl;
     }

    void overs()
     {
      cout<<"Enter " <<name1<< " Over : ";
      cin>>country1over;
      cout<<endl;

      cout<<"Enter " <<name2<< " Over : ";
      cin>>country2over;
      cout<<endl;
     }

     void display()
      {
      if(country1wicket == 10)
     {
      cout<<name1<<" all out at"<<" "<<country1Score;
     }
    else{

     }
      cout<<endl;

     if(country2wicket == 10)
     {
      cout<<name2<<" all out at"<<" "<<country2Score;
     }
    else{

     }
     cout<<endl;

     cout<<endl;

     cout<<name1 <<" : "<<country1Score<<" / "<<country1wicket<<"  over : "<<country1over;
      cout<<endl;

      cout<<name2 <<" : "<<country2Score<<" / "<<country2wicket<<"  over : "<<country2over;
      cout<<endl;


     if( country2Score < country1Score )
        {
        wonBy = country1Score-country2Score;
        cout<<endl;
        cout<<"Congratulations "<<name1<<" Won by "<<wonBy<<" runs"<<"  ";
       }
    else if( country2Score > country1Score)
        {
        wonBy = country2Score-country1Score;
        cout<<endl;
        cout<<"Congratulations "<<name2<<" Won by "<<wonBy<<" runs"<<"  ";
        }
    else if(country2Score == country1Score)
        {
        cout<<"Match has been drawn";
        }
        cout<<endl;
        }
};


int main()
{
    ClassB ob;
    ob.country_names();
    ob.Final_scores();
    ob.Wickets();
    ob.overs();
    ob.display();
    return 0;
}
