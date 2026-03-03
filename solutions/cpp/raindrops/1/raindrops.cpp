#include "raindrops.h"
#include <iostream>
#include <string>
using namespace std;
namespace raindrops {
    string convert(int number){
        string result{""};
        if(number % 3 == 0){
            result += "Pling";
        }

        if(number % 5 == 0){
            result += "Plang";
        }

        if(number % 7 == 0){
            result += "Plong";
        }
        
        if(result == ""){
            return to_string(number);
        }

        return result;
    }

}  // namespace raindrops
