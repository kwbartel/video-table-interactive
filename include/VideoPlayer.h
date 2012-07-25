//
//  VideoPlayer.h
//  CinderProject
//
//  Created by Cameron Browning on 7/2/12.
//  Copyright (c) 2012 American Museum of Natural History. All rights reserved.
//

 #ifndef CinderProject_VideoPlayer_h
 #define CinderProject_VideoPlayer_h


#include <iostream>
#include <vector>
#include "cinder/app/AppBasic.h"
#include "cinder/Surface.h"
#include "cinder/gl/Texture.h"
#include "cinder/qtime/QuickTime.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class VideoPlayer {
public:
    VideoPlayer();
    VideoPlayer( Rectf r, vector<string> movies );
    void update(); 
    void draw();
    
  //  void loadMovieFile( const string &moviePath );
    //void loadMovieFile( const fs::path &path );
//    void fileDrop( FileDropEvent event );
    void nextMovie();
    
    
 //   static const int        size = 3;
 //   vector<string>          movieNames;
 //   string                  moviePath;
    int                     ind;
	gl::Texture             mFrameTexture;
	qtime::MovieGl          mMovie;
    vector<qtime::MovieGl>  movies;
    Rectf                   drawRect;
 
};

 #endif 