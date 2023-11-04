#include<iostream>
#include<cstring>
using namespace std;

void choose(int n ,int n1 ,int n2,int n3)
{

    switch (n){

        case  1:

        cout<<"Juice"<<endl;
        cout << "Good for health"<<endl;
        break;

        case 2:

        cout<<"Coffee"<<endl;
        cout<<"Bad for health"<<endl;
        break;
        default :
        cout<<"wrong input"<<endl;

    }
    switch (n1){

        case 3:

        cout<<"Fast food"<<endl;
        cout<<"Bad for health"<<endl;
        break ;

        case 4:

        cout<<"Homemade food"<<endl;
        cout<<"Good for health"<<endl;
        break ;
        default:
        cout << "wrong input"<<endl ;


}
    switch(n2){

        case 5:

        cout<<"Walking up early in the morning"<<endl;
        cout<<"Good for health"<<endl;
        break;

       case 6:

        cout<<"Waking up late in the morning"<<endl;
        cout<<"Bad for health"<<endl;
        break;
        default :
        cout<<"wrong input"<<endl;
}
   switch(n3){

       case 7:

       cout<<"Doing physical exercise"<<endl;
       cout<<"Good for health"<<endl;
       break;

       case 8:

       cout<<"Not doing physical exercise"<<endl;
       cout<<"Bad for health"<<endl;
       break;
       default:
       cout<<"wrong input"<<endl;
   }

}

int main()
{
      int n,n1,n2,n3;
     cout << "A certain person's liking which are good or bad for health?"<< endl ;
     cout<<"1) Juice"<<" 2) Coffee"<<endl;
     cin >> n;
     cout<<"3)Fast food"<<" 4)Homemade food"<<endl;
     cin>>n1;
     cout<<"5)Walking up early in the morning"<<" 6)Walking up late in the morning"<<endl;
     cin>>n2;
     cout<<"7) Doing physical exercise"<<" 8)Not doing physical exercise"<<endl;
     cin>>n3;
    string a = "Juice" ;
    string b = "Coffee ";
    string c = "Fast food";
    string d = "Homemade food";
    string e = "Waking up early in the morning";
    string f  = "Waking up late in the morning";
    string g ="Doing physical exercise";
    string h =" Not doing physical exercise";

    choose(n,n1,n2,n3);

    return 0;

}

