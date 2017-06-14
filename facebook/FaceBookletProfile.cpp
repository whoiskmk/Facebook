//
//  FaceBookletProfile.cpp
//  FaceBooklet FINAL
//
//  Created by Kelly Krawczyk on 4/23/15.
//  Copyright (c) 2015 Kelly Krawczyk. All rights reserved.
//

#include "FaceBookletProfile.h"
//#include "FaceBookletNode.h"

/*FaceBookletProfile::FaceBookletProfile(){
    
    cout << "Constructor called" << endl;
    GetName();
    //GetStatus();
 
    
    return;
}*/

/*FaceBookletProfile::FaceBookletProfile(const FaceBookletProfile& origClass){
    cout << "Copy constructor called." << endl;
    name = new string;
    *name = *(origClass.name);
    
    status = new string;
    *status = *(origClass.status);
    
    friendList = new vector<string*>;
    *friendList = *(origClass.friendList);
    
    return;
}

FaceBookletProfile::~FaceBookletProfile(){
    cout << "Destructor called." << endl;
    if (name != nullptr) {
        delete name;
    }
    if (status != nullptr) {
        delete status;
    }
    if (friendList->empty() == false) {
        delete friendList;
    }
}*/

void FaceBookletProfile::SetName(string& userName){
    this->name = userName;
    return;
}

string FaceBookletProfile::GetName(){
    return name;
}

void FaceBookletProfile::SetStatus(string& userStatus){
    this->status = "(" + userStatus + ")";
    return;
}

string FaceBookletProfile::GetStatus(){
    return status;
}

void FaceBookletProfile::PrintProfile(FaceBookletProfile* userProfile){
    cout << userProfile->name << " (" << userProfile->status << "): ";
    
    int i = 0;
    for (i = 0; i < userProfile->friendList.size(); ++i) {
        cout << userProfile->friendList.at(i) << ", ";
    }
}


