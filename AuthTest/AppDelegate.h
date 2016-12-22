//
//  AppDelegate.h
//  AuthTest
//
//  Created by David Butler on 21/12/2016.
//  Copyright © 2016 David Butler. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LoginViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    LoginViewController *lvc;
}

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) LoginViewController *lvc;

@end

