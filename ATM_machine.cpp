#include<iostream>
using namespace std;
void ShowMenu(){
    cout<<"****************MENU******************"<<endl;
    cout<<"1. Check Balance "<<endl;
    cout<<"2. Deposite "<<endl;
    cout<<"3. Withdraw "<<endl;
    cout<<"4. Transfer "<<endl;
    cout<<"5. Exit "<<endl;
    return;
}

int main(){
    // Menu,Deposite, CheckBalance,withdraw, transfer
    int option;
    double Balance=1000;
    double User1=5000, User2=2700;
    double Amount;
    while(true){
    system("cls");
    ShowMenu();
    cout<<"Options::";
    cin>>option;
    switch(option){
    case 1:
        cout<<"Your Bank Balance is :"<<Balance<<" $ "<<endl;
        break;
    case 2:
        cout<<"How Much Amount You want to Deposite: ";
        cin>>Amount;
        if(Amount>=200)
        {
            Balance+=Amount;
            cout<<"Amount Successfully Deposited!"<<endl;}
        else{
            cout<<"Amount is too Small"<<endl;
            cout<<"Deposite More than 200 "<<endl;
        }
        break;
    case 3:
        cout<<"How much amount do you want to withdraw: ";
        cin>>Amount;
        if(Amount<100){
            cout<<"Amount is too low to witdraw! "<<endl;
        }
        else if(Amount<=Balance){
            Balance-=Amount;
            cout<<"Withdrawal successful: "<<endl;
        }
        else
            cout<<"Not enough Amount to withdraw! "<<endl;
        break;
    case 4:
        //double Amount;
        double AccountNo1,AccountNo2;
       // cout<<"Enter Account No. of Sender : ";
        //cin>>AccountNo1;
       // cout<<"Enter Account NO. of Reciever : ";
        //cin>>AccountNo2;
        cout<<"Enter the Amount you want to transfer: ";
        cin>>Amount;
        if(User1>=Amount){
            User1-=Amount;
            User2+=Amount;
            cout<<"Successfully Transferd! "<<endl;
            cout<<"Now the Bank Balance of First User(sender) is: "<<User1<<endl;
            cout<<"And that of Second User(Reciever) is: "<<User2<<endl;
        }
        else
            cout<<"Something is wrong! ";
        break;
    case 5:
        cout<<"Thanks for Coming "<<endl;
        cout<<"Welcome Again ";
        return 0;
    default:
        cout<<"Something went Wrong! ";
        break;
    }
    system("pause>0");
    }
}
