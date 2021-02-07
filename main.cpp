//program to sort even and odd  numbers
#include<iostream>
using namespace std;

int main(){
    int choice;
    int upper_limit;
    
    //asking the user whether he wants to sort out even numbers or odd numbers
    cout<<"\nTo sort even number press 1 and to sort odd number press 2:";
    cin>>choice;
    
    if(choice==1){
    //taking the upper limit from the user
    cout<<"\nEnter the upper limit:";
    cin>>upper_limit;
    
    
    //for loop to filter even numbers;
    cout<<"\nThe even numbers smaller than "<<upper_limit<<" are:"<<endl;
    for(int i{1};i<upper_limit;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
   }
        
}
    
    else if(choice==2){
    //taking the upper limit from the user
    cout<<"\nEnter the upper limit:";
    cin>>upper_limit;
    
    //for loop to sort out odd numbers
    cout<<"\nThe odd numbers smaller than "<<upper_limit<<" are:"<<endl;
    for(int i{1};i<upper_limit;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    
    }
    
        
}
    
    else{
        cout<<"\nInvalid Choice";
    }
    
    
   return 0; 
    
}

