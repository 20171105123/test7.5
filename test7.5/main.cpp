//
//  main.cpp
//  test7.5
//
//  Created by 鲁祥 on 2018/7/5.
//  Copyright © 2018年 鲁祥. All rights reserved.
//
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include<cstdlib>
#include "algorithm"
using namespace std;
int main()
{
    FILE *a;
    FILE *b;
    b=fopen("/Users/S20171105130/Desktop/STUDENT5.0.csv","a");
    string s1[200];
    string s2[200];
    string s3[200];
    string s4[200];
    string s5[200];
    string s6[200];
    string s7[200];
    string s8[200];
    string s9[200];
    string s10[200];
    string s11[200];
    //int s12[200];
    
    
    if ((a=fopen("/Users/s20171105123/Desktop/test7.5/test7.5/test75.csv","r"))==0)
    {
        printf("nono\n");
    }
    
    else
    {
        for(int i=0;i<3;i++)
        {
            fscanf(a,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ，",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);
            
            //if(i==1||i==2)
            //{
            
            //fprintf(b,"%s ,%s ,%s ,%s ,%s ,%s ,%d ,%d ,%d ,%d ,%d \n",s1,s2,s3,s4,s5,s6,s12[1],s12[2],s12[3],s12[4],s12[5]);
            
            //}
            //else{
            
            fprintf(b,"%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s \n",s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11);
            //printf("%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s ,%s \n",s1,s2,s3,s4,s5,s6,s7[2],s8,s9,s10,s11);
            // }
            
        }
        
        
    }
    
    return 0;
}
void nain()
{
#include<iostream>
    
    using namespace std;
    
    int max (int x,int y);
    
    int min (int x,int y);
    
    int main()
    
    {
        
            int a=0,b=101,c=0,i,j;
        
            double average;
        
            cout<<"请输入选手成绩"<<endl;
        
            for(i=1;i<=10;i++)
            
                {
                
                        cout<<"第"<<i<<"位评委给分：";
                
                        cin>>j;
                
                        a=max(a,j);
                
                        b=min(b,j);
                
                        c=c+j;
                
                    }
        
            average=(c-a-b)/8;
        
            cout<<"减去一个最高分"<<a<<","<<"减去一个最低分"<<b<<endl;
        
            cout<<"该选手的最后得分："<<average<<endl;
        
            return 0;    
        
    }    
    
        
    
    int max(int x, int y)    
    
    {    
        
           if(x>y)    
            
               {    
                
                     return x;    
                
                   }    
        
           else    
            
               {    
                
                     return y;    
                
                   }    
        
    }    
    
        
    
    int min(int x, int y)    
    
    {    
        
           if(x>y)    
            
               {    
                
                     return y;    
                
                   }    
        
           else    
            
               {    
                
                     return x;    
                
                   }    
        
    }    
    

}

