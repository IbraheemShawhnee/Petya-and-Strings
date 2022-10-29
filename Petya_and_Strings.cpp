#include<string>
#include<vector>
#include<cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  string str1;
  string str2;
//int sumString1=0;
//int sumString2=0;
  cin>>str1;
  cin>>str2;
  if (str1.length()==str2.length()){
    for(int i=0; i<str1.length(); i++){
        if(isupper(str1[i]))
        {
            str1[i]=str1[i]+32;
        }
        //sumString1+=str1[i];
    }
    for(int i=0; i<str2.length(); i++){
        if(isupper(str2[i]))
        {
            str2[i]=str2[i]+32;
        }
       // sumString2+=str2[i];
  }
  if(string(str1)==string(str2)){
    cout<<"0"<<endl;
  }else if(string(str1)<string(str2)){
    cout<<"-1"<<endl;
  }else if(string(str1)>string(str2)){
    cout<<"1"<<endl;
  }
}
  return 0;
}
//IbraMAINeem
