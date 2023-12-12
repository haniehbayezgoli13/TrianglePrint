#include <iostream>

using namespace std;

int main()
{ int number ,i,s,j,k;
cout <<"enter your num:"<<endl;
cin>>number;
 for(i=number,s=1;i>=1;i--,s+=2){
    for(j=1;j<=i;j++){
        cout<<" ";
    }
    for(k=0;k<s;k++){
        cout<<"*";
    } cout<<endl;
}
    return 0;
}
