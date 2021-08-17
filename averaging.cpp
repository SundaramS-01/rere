#include<simplecpp>

main_program{
    float sum=0 ,nextmark;
    int count=0; cin>>nextmark;
    while(nextmark>=0){
        sum=sum+nextmark;
        count=count+1;
        cin>>nextmark;
        }
        cout<<sum/count;
        }
