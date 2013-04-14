//
//  AppDelegate.h
//  HelloOpelGL
//
//  Created by Matt Finucane on 14/04/2013.
//  Copyright (c) 2013 Matt Finucane. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OpenGLView.h"

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    OpenGLView* _glView;
}

@property (nonatomic, retain) IBOutlet OpenGLView *glView;
@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;

@end
