 # include <iostream>
 
 using namespace std;
 
 int main() {
    cout<<"tell me your age; "<<endl;
    int age;
    cin>>age;
//*************Selection control structure : if  else -if else  ladder***********************    
//     if((age<18) &&(age>0) ){
//         cout<<"YOu can not come to my party"<<endl;
//     }
//    else if(age ==18){
//        cout<<"you are a kid and you will get a kid pass to the party"<<endl;
//     }
//     else if(age<1){
//         cout<<"you are not yet born"<<endl;
//     }
//     else{
//         cout<<"you can come to the party"<<endl;
//     }


 
 //**************Selection control structure: Switch Case statements**************
 switch(age)
 {
   
 case 18:
     
     cout<<"you are 18"<<endl;
     break;

 case 22:
     cout<< "you are 22"<<endl;
     break;

 case 2:
     cout<< "you are 2"<<endl;
     break;

  default:
    cout<<"No special case"<<endl;    
    break; 
}
 
 cout<<"Done with switch case " <<endl;

 }
