#include <iostream> 
#include <cmath>
#include <array>

using namespace std;

class Calculator {
    public :
        const char *name = "simple Calculator";
        Calculator(){
            cout<<"Calculator Ready to deploy"<<endl;
            for (int i=0; i<this->threshold; i++) this->history[i]=0;
        }
        double add (double a,double b);
        double subtract (double a,double b);
        double multi (double a, double b);
        double divided (double a,double b);
        double power (double x,double factor);
        double log(double x);
        void mechanism_history();
        void show_history_status();
        private:
            double history[10];
            int count = 0;
            int threshold = 9;
            int back_count = 9;

            void add_history (double result){
                if (this->count>=9){
                    if (this->history[this->count] ==0){
                        this->history[this->count] = result;
                    }else{
                        this->history[this->count] = 0;
                        this->history[this->count] = result;
                    }
                    
                    this ->count +=1;
                }else{
                    this->count = 0;
                    if (this->history[this->count]!=0){
                        this->history[this->count] = 0;
                        this->history[this->count] = result;
                    }else{
                        this->history[this->count] = result;
                    }
                    this->count +=1;
                    
                }
                
            }
            void reset_history (){
                for (int i = 0; i<this->threshold; i++) this->history[i]=0;
            }
            void delete_history (){
                int index;
                try
                {
                    for (int i =0; i<this->count; i++)cout<<i<<". "<<this->history[i]<<endl;
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                    cout<<"the history still 0"<<endl;
                }
                
                cout<<"what you want delete ? (0/9): ";
                cin>>index;
                this->history[index] = 0; 
                
            }



};