//
//  AppDelegate.h
//  PartialViewControllerRotation
//
//  Created by Amar Kulo on 2012-10-22.
//  Copyright (c) 2012 Amar Kulo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController;
@class CustomNavigationViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;

@property (strong, nonatomic) CustomNavigationViewController *navController;

@end
