//
//  operator_overloading_design.cpp
//  cpp_detail
//
//  Created by yong li on 2020/1/5.
//  Copyright © 2020年 yong li. All rights reserved.
// 这个是模仿重载操作符,这个c++文件可以写很多类啊
//

#include "operator_overloading_design.hpp"
#include <iostream>
using namespace std;

class vet{
private:
    double* cheat= new double[10];
    
public:
    
    //这个可以不运行，就用xcode检查这些c++语法
    //double& 是返回变量的应用，函数后的&是什么意思？
    
    
    
    
    
    
    double& operator[](int i) & {
        cout<<"this is not a "<<endl;
        return cheat[i];
        
    }
    const double& operator[](int i) const &{
        cout<<"this is const method"<<endl;
        return cheat[i];
        }
        /**
        int* get_random_int(){
            int a =11;
            // a is lvalue;there is a memory leak warming;
            return &a;
        }
        */
        
        /**
        int& get_random_int(){
            int a =11;
            return a;
        }只能说a的地址可能存了别的数据，程序进入未知状态。
         */
        
};
