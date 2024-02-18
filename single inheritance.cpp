#include<iostream>
using namespace std;
  class animal    // single inheritance
  {
      public:
      int weight;
      string colour;
            void check()
        {
          cout<<"single inheritance working properly"<<endl;
        }  
  };
     class dog :public animal // this the way to inherit the class
     {
           public:
           string name;
              public:
              dog(int weight,string colour,string name)
              {
                 this->weight=weight;
                 this->colour=colour;
                 this->name=name;
              }
                 void show()
                 {
                  cout<<"the dog weight is:"<<weight<<endl;
                  cout<<"the dog colour is:"<<colour<<endl;
                  cout<<"the dog name is:"<<name<<endl;;
                 }
     };

          int main()
    {
            int weight; string colour;string name;
            cout<<"enter the weight,colour,name of the dog"<<endl;
            cin>>weight>>colour>>name;
           // dog *d=new dog(weight,colour,name);
               dog d(weight,colour,name);
              d.show();
              d.check();
              return 0;
    }