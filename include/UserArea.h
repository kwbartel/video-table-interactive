//
//  UserArea.h
//  CinderProject
//
//  Created by Cameron Browning on 7/2/12.
//  Copyright (c) 2012 American Museum of Natural History. All rights reserved.
//

#ifndef CinderProject_UserArea_h
#define CinderProject_UserArea_h


#include "VideoPlayer.h"
#include "Button.h"

#include <vector>
//#include "cinder/Xml.h"
#include "PhidgetConnector.h"
#include "TwoStateButton.h"
#include "Image.h"

using namespace gallerytools;

class UserArea
{
public:
    UserArea();
    UserArea(char c, Rectf vR, vector<string> videos, float angle_in , Vec2f pos_in);
    UserArea(XmlTree area);
    UserArea(XmlTree area, PhidgetConnector *pc_);
    
    void update();
    void draw(bool _debug = false, Vec2f _scale = Vec2f(1.0f,1.0f));
    void drawBackground(bool _debug = false);
    Vec2f pos;
    char getKey();
    void nextMovie();
    
private:
    Image bg_img;
    Image activeArea_img;
    char key;
    VideoPlayer player;
    Rectf vidRect;
    int state;
    bool flipped;
  //  vector<Button::Button> buttons;
    vector<TwoStateButton> buttons;
    vector<bool> buttonStates;
    string background;
    float angle;
    int frameCount;
    PhidgetConnector *pc;
    
    // is this still being used?
    gl::Texture mTexture;
};

#endif