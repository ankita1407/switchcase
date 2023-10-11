#include <iostream>
//#include<math.h>
using namespace std;
class VolumeCal{
public:
  float volume(float side_length) {
    return side_length * side_length * side_length;
  }

  float volume(float length, float breadth, float height) {
    return length * breadth * height;
  }
  float volume(float S_length,float U_height)
{
    return 3.14*S_length *S_length *U_height;
}
};
int main()
{   float l,h,b;
    char op;
    int ch;
    VolumeCal calculator;
    cout<<"enter length";
    cin>>l;
    cout<<"\nenter breath";
    cin>>b;
    cout<<"\nenter height";
    cin>>h;
    float volume = calculator.volume(l);
    float volume1 = calculator.volume(l,h);
    float volume2 = calculator.volume(l,b,h);
  do{
    cout<<"\nenter choice";
    cin>>ch;
    cout<<"\nyou entered the choice : "<<ch;
    cout<<"\n1.for volume of cube\n2.for volume of cylinder\n3.volume of cuboid"<<endl;
     cout<<"\nhere is your outcome -->";
    switch(ch)
    {
        case 1:
        cout<<"\nvolume of cube "<<volume;
        break;
        case 2:
        cout<<"\nvolume of cylinder "<<volume1;
        break;
        case 3:
        cout<<"\nvolume of cuboid "<<volume2;
        break;
        default:
        cout<<"invalid choice";
    }
  cout<<"\ndo u want to continue";
  cin>>op;
  cout<<"\nyou entered the option  "<<op;
  }while(op=='Y'||op=='y');
   cout<<"\nsucessfully executed :)";
    return 0;
}
