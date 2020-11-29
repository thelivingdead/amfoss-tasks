//
//  main.cpp
//  mario pyramid
//
//  Created by Divya Bisht on 28/11/20.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int height;
        int c = 0;
        do
        {
        std::   cout<<"insert height" ;
           std::  cin>>height ;

        }while(height < 0 || height > 23);

        for(int a = height; a > 0; a--)
        {
            for(int b = 0; b < a - 1; b++)
            {
                std :: cout<<" ";

            }
            std :: cout<<"#";
            c++;
            for (int d = 0; d < c; d++)
            {
               std:: cout<< "#";
            }
            std:: cout<<"\n" ;
        }
    return 0;
}
