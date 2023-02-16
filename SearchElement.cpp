//
//  SearchElement.cpp
//  FirstMissingNumbwer
//
//  Created by Pavankumar Arepu on 16/02/23.
//

#include <stdio.h>

#include<bits/stdc++.h>
using namespace std;

int main(){
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int T;

    // Taking input as number of TestCases
    cin>>T;
    
    // Do the operation for all testcases
    for(int i=0;i<T;i++) {
        int size;

        //Taking map for o(1) access speed to find element in map.
        std::map<int, int> m;
        cin>>size;

        for(int i=0;i<size;i++) {
            int val;
            cin>>val;
            m[val]++;
        }

        // Taking input as 'element' to find in given array
        int s1;
        cin>>s1;

        if(m.find(s1)!=m.end()) {
            //if the element is found before the end of the map
            cout<<"1"<<endl;
           //if the element is present then you can access it using the index
        } else {
            cout<<"0"<<endl;
        }
    }
  
    return 0;
}
