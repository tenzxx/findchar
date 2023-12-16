#include <iostream>
#include <string.h>
using namespace std;


        class Occurence {
            char find;
            string str;
            
        public:
            int count = 0;
            
            void input(){
                getline(cin,str);
                cin>>find;
            }
            void countOccurence(){
                for(int i = 0;i <str.size();i++){
                    if(find == str[i]){
                        count++;
                    }
                }
            }
        };
        
        int main() {
            Occurence obj;
            
            obj.input();
            obj.countOccurence();
            
            cout<<obj.count<<endl;
        }

/*
class dayofweek {
    
    int day;
    string week[7];
public:
    int week[0] = "sunday";
    int week[1] = "monday";
    int week[2] = "tuesday";
    int week[3] = "wednesday";
    int week[4] = "thursday";
    int week[5] = "friday";
    int week[6] = "saturday";
    
    void output(){
        cout<<week[day]
    }
};
*/
