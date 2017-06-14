//
//  FaceBookletProfile.h
//  FaceBooklet FINAL
//
//  Created by Kelly Krawczyk on 4/23/15.
//  Copyright (c) 2015 Kelly Krawczyk. All rights reserved.
//

#ifndef __FaceBooklet_FINAL__FaceBookletProfile__
#define __FaceBooklet_FINAL__FaceBookletProfile__

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <list>

//#include "FaceBookletNode.h"

using namespace std;

class FaceBookletProfile {
public:
    void SetName(string& userName);
    string GetName();
    void SetStatus(string& userStatus);
    string GetStatus();
    //void CreateFriendVctr();
    void PrintProfile(FaceBookletProfile* userProfile);
    //FaceBookletProfile();
    //FaceBookletProfile(const FaceBookletProfile& origClass);
    //~FaceBookletProfile();
private:
    //string name;
    //string status;
    string name;
    string status;
    //FaceBookletProfile* friendProfile;
    vector<string*> friendList;
};

#endif /* defined(__FaceBooklet_FINAL__FaceBookletProfile__) */
