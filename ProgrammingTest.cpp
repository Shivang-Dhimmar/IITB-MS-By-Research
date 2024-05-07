/*
// Recursion and Tracing
#include <iostream>
using namespace std ;
int i = 0 ;
void hanoi ( int diskSize , char source , char dest , char spare ) {
    if ( diskSize == 0 ) {
        i ++;
        if ( i == 6 )
            cout << source ;
    }
    else {
        hanoi ( diskSize - 1 , source , spare , dest );
        i ++;
        if ( i == 6 )
            cout << source ;
        hanoi ( diskSize - 1 , spare , dest , source );
    }
}
int main () {
    hanoi ( 2 , 'A' , 'B' , 'C' );
    return 0 ;
}
*/
/*
// Recursion and Tracing
#include <iostream>
using namespace std ;
int displayStr ( char * printStr , int i ) {
    if (i == 1 )
        return 0 ;
    else {
        i--;
        if (i == 4 ) {
            for ( int j = 0 ; j < i; j++)
                cout << printStr [j];
            cout << endl;
        }
        displayStr (printStr, i);
        return 1 ;
    }
}
int main () {
    int i = 11 ;
    char printStr[]={ 'P' , 'G' , 'E' , 'n' , 't' , 'r' , 'a' , 'n' , 'c' ,'e' };
    displayStr (printStr, i);
    return 0 ;
}
*/
/*
// Basic Knowledge Of Struct and it's copy Constructor
#include <iostream>
#include <string>
using namespace std ;
struct footballer {
    string name ;
};
struct footballer player ;
struct footballer copy_struct () {
    player . name = "Mbappe" ;
    return player ;
}
int main () {
    struct footballer sportsman = copy_struct ();
    sportsman . name = "Ronaldo" ;
    cout << sportsman . name << endl ; // Output 1
    cout << player . name << endl ; // Output 2
    return 0 ;
}
*/
/*
// Division and Module Operation for int datatype
#include<iostream>
using namespace std;
int main(){
    bool flag=-3%2!=0;
    cout<< flag<<endl;
    cout<<5/-2<<endl;
    return 0;
}
*/
/*
// Basics of Recursion and Tracing
#include <iostream>
using namespace std;
void recursion ( int n ) {
    if (n < 0 )
        cout << n;
    else {
        cout<<n<<endl;
        recursion (n/ 2 );
        cout << n% 2 ;
    }
}

int main(){
    recursion(8);
    return 0;
}
*/
/*
//Tracing and Insights Got from Program Structure
#include <iostream>
using namespace std ;
int main () {
    const int N = 5 ;
    int matrix [ N ][ N ] = {
    { 1 , 2 , 3 , 4 , 5 },
    { 16 , 17 , 18 , 19 , 6 },
    { 15 , 24 , 25 , 20 , 7 },
    { 14 , 23 , 22 , 21 , 8 },
    { 13 , 12 , 11 , 10 , 9 }
    };
    int Unrolled [ N * N ];
    int idx = 0 ;
    for ( int s = 0 ; s < 2 * N - 1 ; s ++) {
        for ( int i = min ( s , N - 1 ); i >= 0 && s - i < N ; i --){
            Unrolled [ idx ] = matrix [ i ][ s - i ];
            idx ++;
        }
    }
    cout << Unrolled [ 15 ];
}
*/
