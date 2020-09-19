#include<iostream>
#include"material_DVD.h"
#include"material.h"

using namespace std;

DVD::DVD():material()
{
    length=0;
}
void DVD::set_length(int Len){
    length=Len;
}
int DVD::get_length(){
    return length;
}
