//
//  FaceBookletNode.h
//  FaceBooklet FINAL
//
//  Created by Kelly Krawczyk on 4/23/15.
//  Copyright (c) 2015 Kelly Krawczyk. All rights reserved.
//

#ifndef __FaceBooklet_FINAL__FaceBookletNode__
#define __FaceBooklet_FINAL__FaceBookletNode__

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <list>

using namespace std;

//#include "FaceBooklet.h"
#include "FaceBookletProfile.h"

class FaceBookletNode {
public:
   //void SetName(string userName);
   //string GetName() const;
   //void SetStatus(string userStatus);
   //string GetStatus() const;
    //void PrintProfile() const;
   /*virtual void PrintProfile(FaceBookletProfile* userProfile);
   virtual void SetSingleProfile(FaceBookletProfile* userProfile);
   virtual void SetFriendList(vector<FaceBookletProfile*>& userFriends, FaceBookletProfile* userProfile);
   virtual FaceBookletProfile* GetSingleProfile();
   virtual vector<FaceBookletProfile*> GetFriendList();*/
   virtual void SetProfile(FaceBookletProfile userProfile);
   virtual FaceBookletProfile GetProfile() const;
   FaceBookletNode();
   FaceBookletNode(const FaceBookletNode& origClass);
   ~FaceBookletNode();

private:
   /*string name;
   string status;
   vector<FaceBookletNode*> friendList;
   FaceBookletNode* singleProfile;*/
   
   FaceBookletProfile* profile;
   vector<FaceBookletProfile*>* profileFriends;
};

#endif /* defined(__FaceBooklet_FINAL__FaceBookletNode__) */
