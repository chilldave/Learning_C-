#include <iostream>



int main(){

    int age;

    std::cout<<"Enter your age : "; std::cin>>age;

    if(age<12)
        std::cout<<"Primary"<<std::endl;
        else if( age <18)
            std::cout<<"Bachillerato"<<std::endl;
                else if( age < 23)
                    std::cout<<"University "<<std::endl;
                    else if ( age < 60)
                        std::cout<<"Worker"<<std::endl;
                    else
                        std::cout<<"Retired"<<std::endl;

    return 0;
}