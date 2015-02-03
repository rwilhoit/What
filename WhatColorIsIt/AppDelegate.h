//
//  AppDelegate.h
//  WhatColorIsIt
//
//  Created by Raj Wilhoit on 12/14/14.
//  Copyright (c) 2014 UF.rajwilhoit. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end

