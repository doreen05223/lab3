#include<vector>
#include<iomanip>
#include<iostream>
#include<fstream>
using namespace std ;
int main()
{
    ifstream in("file.in",ios::in) ;
    int array[9999], i;
    in >> array[0] ;
    vector<int> v(array[0]) ;
    for( i=1 ; i<=array[0] ; ++i ){
         in >> array[i] ;
         v.push_back(i);
    }
    for( i=1 ; i<=array[0] ; ++i ){
         v.at(i)=array[i] ;
         /*cout << setw(4) << v.at(i) ;*/
    }

    int insert, moveItem, next ;
    for( next=2 ; next<=array[0] ; ++next ){
         insert = v.at(next) ;
         moveItem = next ;
         while((moveItem>1) && (v.at(moveItem-1)>insert)){
               v.at(moveItem) = v.at(moveItem-1) ;
               --moveItem ;
         }
         v.at(moveItem) = insert ;
         /*for( i=1 ; i<=array[0] ; ++i ){
              cout << setw(4) << v.at(i) ;
         }
         cout << endl ;*/
    }
    
    int add5=0 ;
    for( i=8 ; i>3 ; --i ){
         add5 += v.at(i) ;       
    }
    cout << add5 << endl ;
    return 0 ;
}
