
//
//  FaceBooklet.cpp
//  FaceBooklet FINAL
//
//  Created by Kelly Krawczyk on 4/24/15.
//  Copyright (c) 2015 Kelly Krawczyk. All rights reserved.
//

#include "FaceBookletNode.h"
#include "FaceBooklet.h"

/*void FaceBooklet::CreateProfile(){
    
    FaceBookletProfile* newProfile = 0;
    newProfile = new FaceBookletProfile;
    
    string newName;
    string newStatus;
    
    cout << "Enter your name: " << endl;
    cin >> newName;
    newProfile->SetName(newName);
    
    cout << endl << "Enter your status: " << endl;
    cin >> newStatus;
    newProfile->SetStatus(newStatus);
    
    profile1 = newProfile;
    
    
    
}

void FaceBooklet::CreateFriendship(FaceBookletProfile* friend1, FaceBookletProfile* friend2){
    //profile1 = CreateProfile();
    profile1 = friend1;
    profile2 = friend2;
    
    
}*/

void FaceBooklet::CreateNode(FaceBookletNode userProfileNode, vector<FaceBookletNode*> userProfileNodeFriends){
    *profileNode = userProfileNode;
    *profileNodeFriends = userProfileNodeFriends;
    return;
}

void FaceBooklet::Friendship(FaceBookletNode& friend1, FaceBookletNode& friend2){
    
    //*friend1 = FaceBookletNode();
    
}


