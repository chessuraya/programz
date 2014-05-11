
#include <iostream>
void input(int *a, int *b){
   std::cin>>*a;
   std::cin>>*b;
}


bool Validate(int a, int b){
if (b>a)
    return true;
else
    return false;
}

void Display (int a){
    std::cout<<a<<"\n";
}

bool Prime(int a){
int count=0;
for (int i=2;i<=a;i++){
        if ((a%i)==0)
        count++;
}
if (count==1)
{return true;}
else
{return false;}
}

int main(){
    int count=0;
int a=0;
int b=0;
std::cout<<"Input A and B\n";
while (!(Validate(a,b))){
    input(&a, &b);
}
for (int i=a;i<=b;i++){
if (Prime (i))
{
    count++;
Display (i);
}
}
std::cout<<count;
}
