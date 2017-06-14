//
//  main.cpp
//  FaceBooklet FINAL
//
//  Created by Kelly Krawczyk on 4/23/15.
//  Copyright (c) 2015 Kelly Krawczyk. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <list>

#include "FaceBookletProfile.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    FaceBookletProfile* profile;
    string name = "";
    string status = "";
    
    cout << "Name: " << endl;
    cin >> name;
    
    cout << "Status: " << endl;
    cin >> status;
    
    profile->SetName(name);
    //profile->GetName();
    profile->SetStatus(status);
    //profile->GetStatus();
    profile->PrintProfile(profile);
    
    std::cout << "Hello, World!\n";
    return 0;
}
