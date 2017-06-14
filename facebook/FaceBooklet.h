//
//  FaceBooklet.h
//  FaceBooklet FINAL
//
//  Created by Kelly Krawczyk on 4/24/15.
//  Copyright (c) 2015 Kelly Krawczyk. All rights reserved.
//

#ifndef __FaceBooklet_FINAL__FaceBooklet__
#define __FaceBooklet_FINAL__FaceBooklet__

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <list>

using namespace std;

#include "FaceBookletNode.h"
//#include "FaceBookletProfile.h"


class FaceBooklet {
public:
    /*void CreateProfile();
    void CreateFriendship(FaceBookletProfile* friend1, FaceBookletProfile* friend2);
     */
    void CreateNode(FaceBookletNode userProfileNode, vector<FaceBookletNode*> userProfileNodeFriends);
    //FaceBookletNode GetNode() const;
    void Friendship(FaceBookletNode& friend1, FaceBookletNode& friend2);
    //FaceBooklet();
    //FaceBooklet(const FaceBooklet& origClass);
    //~FaceBooklet();
private:
    /*FaceBookletNode* profile;
    vector<FaceBookletNode*> profileFriends;
    FaceBookletNode* profile1;
    FaceBookletNode* profile2;*/
    
    FaceBookletNode* profileNode;
    vector<FaceBookletNode*>* profileNodeFriends;
};
#endif /* defined(__FaceBooklet_FINAL__FaceBooklet__) */
