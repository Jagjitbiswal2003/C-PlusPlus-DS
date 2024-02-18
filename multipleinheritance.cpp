#include<iostream>
using namespace std;
     class animal
     {
        public:
        void show()
        {
        cout<<"this is a animal class"<<endl;
        }
     };
          class human
          {
             public:
            void show1()
            {
              cout<<"this is a human class"<<endl;
            }
          };  
             class hybrid :public animal,public human
             {
                  public:
                  void check()
                  {
                    cout<<"the multiple inheritance work properly"<<endl;
                  }
             };
              int main()
    {
                hybrid h;
                h.show();
                h.show1();
                h.check();
                return 0;
     }