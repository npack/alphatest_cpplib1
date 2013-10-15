#include <iostream>
#include "libs/boo/boo.pb.h"

using namespace std;

void SayHelloFromBoo(){
  cout << "hello world FROM LIB Boo" << endl;

  libs::boo::BoundingBox bb;
  bb.set_x1(50);


  cout << "bb " << bb.DebugString();

}

