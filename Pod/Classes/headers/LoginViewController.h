//
//  LoginViewController.h
//  ws-ios-sdk-dev2
//
//  Created by Matt Compton on 12/7/15.
//  Copyright © 2015 Waysay. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WSLoginViewControllerDelegate;

@interface LoginViewController : UIViewController

@property (nonatomic, weak) id<WSLoginViewControllerDelegate> delegate;

@property (strong, nonatomic) NSString *titleMessage;
@property (strong, nonatomic) NSString *initialTitleMessage;
@property (strong, nonatomic) NSString *initialSkipMessage;

@end

@protocol WSLoginViewControllerDelegate <NSObject>

- (void)refreshPreferences;
- (void)dismissCallBack;

@end
