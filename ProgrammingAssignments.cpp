// IIT Bombay PG Entrance Test: 7 May 2023
//Programming Asignments

/*
//Q-1) Simple
#include<iostream>

using namespace std;

int main(){
    int n;
    cout<< "Enter the number:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long sum=arr[0],totalSum=0;
    for(int i=1;i<n;i++){
        totalSum=totalSum+sum*arr[i];
        sum=sum+arr[i];
    }
    cout<<"Result is: "<<totalSum<<endl;
    return 0;
}
*/
/*
//Q-2) Some Difficult
#include<iostream>
#include<bitset>

using namespace std;

string bitRepresentation(int num){
    string bits="";
    int temp=1;
    for(int i=sizeof(int)*8-1;i>=0;i--)
    {
        if((temp<<i)&num){
            bits+='1';
        }
        else{
            bits+='0';
        }
    }
    return bits;
}

int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    string bits=bitRepresentation(n);
    short maxRun=1,tempRun=1;
    int i=0;
    // While loop for ignoring leading 0's
    while(bits[i]=='0'){
        i++;
    }
    i++;
    for(;i<32;i++){
        if(bits[i]!=bits[i-1]){
            tempRun++;
        }else{
            if(tempRun>maxRun){
                maxRun=tempRun;
            }
            tempRun=1;
        }
    }
    if(tempRun>maxRun){
            maxRun=tempRun;
    }

    cout<<"Max Run:"<<maxRun<<endl;
    return 0;
}
*/

/*
//Q-3)
// Basic Recursion
#include <iostream>
using namespace std;
int price(int years, int current_price) {
    int drop;
    if(years==1){
        drop=(current_price-12000)*(current_price-12000)/20000;
        return current_price-drop;
    }
    current_price=price(years-1,current_price);
    drop=(current_price-12000) * (current_price-12000)/20000;
    return current_price-drop;
}
int main() {
    int years, current_price;
    cin >> years >> current_price;
    cout << price(years, current_price) << endl;
    return 0;
}
*/
/*
//Q-4) Array Manipulation
#include<iostream>
using namespace std;
int main(){
    int m,n,k;
    cin>>m>>n>>k;
    int arr[m][n];
    int temp[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int t=0;t<k;t++){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(j==0){
                    if(i==0){
                       temp[0][0]=(arr[0][1]+arr[1][0])/2;
                    }
                    else if(i==(m-1)){
                        temp[m-1][0]=(arr[m-1][1]+arr[m-2][0])/2;
                    }
                    else{
                        temp[i][0]=(arr[i][1]+arr[i-1][0]+arr[i+1][0])/3;
                    }
                }
                else if(j==(n-1)){
                    if(i==0){
                       temp[0][n-1]=(arr[0][n-2]+arr[1][n-1])/2;
                    }
                    else if(i==(m-1)){
                        temp[m-1][n-1]=(arr[m-1][n-2]+arr[m-2][n-1])/2;
                    }
                    else{
                        temp[i][n-1]=(arr[i][n-2]+arr[i-1][n-1]+arr[i+1][n-1])/3;
                    }
                }
                else if(i==0){
                    temp[0][j]=(arr[0][j-1]+arr[0][j+1]+arr[1][j])/3;
                }
                else if(i==m-1){
                    temp[m-1][j]=(arr[m-1][j-1]+arr[m-1][j+1]+arr[m-2][j])/3;
                }
                else{
                    temp[i][j]=(arr[i-1][j]+arr[i+1][j]+arr[i][j-1]+arr[i][j+1])/4;
                }
            }
        }
        for(int i2=0;i2<m;i2++){
            for(int j2=0;j2<n;j2++){
                arr[i2][j2]=temp[i2][j2];
            }
        }
    }


    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}
*/
/*
//Q-5) BAasics of Loops and conversion of logic into programms
#include<iostream>
using namespace std;
int main(){
    int a[9][9]={0};
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>a[i][j];
        }
    }
    int flag[10]={0},flag2[10]={0};
    bool isValid=true,isValid2=true;
    int count=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            flag[a[i][j]-0]++;
        }
        for(int j=1;j<10;j++){
            if(flag[j]!=1){
                isValid=false;
            }
            flag[j]=0;
        }
        if(isValid)
            count++;
        isValid=true;
        for(int j=0;j<9;j++){
            flag2[a[j][i]-0]++;
        }
        for(int j=1;j<10;j++){
            if(flag2[j]!=1){
                isValid2=false;
            }
            flag2[j]=0;
        }
        if(isValid2)
            count++;
        isValid2=true;
    }
    for(int m=0;m<9;m=m+3){
        for(int k=0;k<9;k=k+3){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    flag[a[i+m][j+k]-0]++;
                }
            }
            for(int j=1;j<10;j++){
                if(flag[j]!=1){
                    isValid=false;
                }
                flag[j]=0;
            }
            if(isValid)
                count++;
            isValid=true;
        }
    }


    cout<<count<<endl;
    return 0;
}
*/
/*
//Q-6) Hard: Subset Sum Problem
#include<iostream>
using namespace std;
bool isSubsetExists(int a[],int n,int sum){
    if(sum==0)
        return true;
    if(n==0)
        return false;
    if(a[n-1]>sum){
        return isSubsetExists(a,n-1,sum);
    }
    else{
        return isSubsetExists(a,n-1,sum-a[n-1]) || isSubsetExists(a,n-1,sum);
    }
}
int main(){
    int n;
    cin>>n;
    int sum[n];
    int sets[n][100],size[n];
    int j=0,temp;
    for(int i=0;i<n;i++){
        cin>>sum[i];
        cin>>temp;
        while(temp!=-1){
            sets[i][j]=temp;
            cin>>temp;
            j++;
        }
        size[i]=j;
        j=0;
    }
    for(int i=0;i<n;i++){
        cout<<isSubsetExists(sets[i],size[i],sum[i])<<endl;
    }

    return 0;
}
*/
