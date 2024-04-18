#include <iostream>
#include <string>

using namespace std;

int main(){

    string name, Name_Partner, Gender ,Answer1,Answer2,Answer3;
    int AgeOfYourself,AgeOfPartner;
    cout<<"Enter Your name "<<endl;
    cin>> name;
    cout<<"Are you male or Female "<<endl;
    cin>> Gender;
    cout<<"Enter your age"<<endl;
    cin>>AgeOfYourself;

    cout<<"Enter your Patner's name "<<endl;
    cin>>Name_Partner;
    cout<<"Enter your Patner's age "<<endl;
    cin>>AgeOfPartner;

    if(AgeOfYourself>=18 && AgeOfPartner>=18 ){

                if(Gender=="Female" || Gender == "female"){
                    cout<<"Answer with yes or no"<<endl;
                    cout<<" Do you Love your Partner ??"<<endl;
                    cin>>Answer1;
                    cout<<"Does your partner cares you ? "<<endl;
                    cin>>Answer2;
                    cout<<"DO you think your partner loves you ??"<<endl;
                    cin >> Answer3;
                                    if(Answer1 == "yes" && Answer2 == "yes" && Answer3 == "yes"){
                                    cout<< name << " You are compatable with "<<Name_Partner;
                    }
                    else{
                        cout<<name <<"You are not compatible with " << Name_Partner<<endl;
                    }

                    }
    else if(Gender=="Male" || Gender=="male"){
          cout<<"Answer with yes or no"<<endl;

          cout<<"Does your partner respect you ?"<<endl;
          cin>>Answer1 ;
          cout<<"Does your partner loves you ?"<<endl;
          cin>>Answer2 ;
          cout<<"Do you love your partner ?"<<endl;
          cin>>Answer3;

          if(Answer1 == "yes" && Answer2 == "yes" && Answer3 == "yes"){
                cout<< name << " You are compatable with "<<Name_Partner;

          }
           else{
                        cout<<name <<" You are not compatible with " << Name_Partner<<endl;
                    }

    }
    else{
        cout<<"You are to young to be dating"<<endl;
    }
    }

    return 0;
}
