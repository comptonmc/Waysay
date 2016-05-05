//
//  Waysay.h
//  WS_SDK_Dev
//
//  Created by Matt Compton on 7/28/15.
//  Copyright (c) 2015 Waysay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WSLocationManager.h"
#import <UIKit/UIKit.h>

@interface Waysay : NSObject

@property (nonatomic, readonly) BOOL downloadingJWT;
@property (nonatomic, readonly) BOOL downloadingSettings;
@property (strong, nonatomic) WSLocationManager *wsLocationManager;
@property (nonatomic) BOOL loginDisabled;

+ (Waysay *) sharedApplication;

-(id) initWithApplicationID:(NSString *)applicationID andOrganizationID:(NSString *)organizationID;
+(void) launchInboxFromViewController:(id)viewController animated:(BOOL)animated;
+(void) registerDeviceID:(NSData *)deviceID;
+(void) resetUserWithCompletionHandler:(void (^)(NSDictionary *result, NSError *error))completionBlock;
+(void) logOpen;
+(void) handleLocalNotification:(UILocalNotification *)notification;
+(void) handleNotificationActionWithIdentifier:(NSString *)identifier andUserInfo:(NSDictionary *)userInfo andCompletionHandler:(void (^)())completionHandler;
- (void) startWSLocation;
+ (void) registerWSNotifications;
+ (void) launchCommentsFromViewController:(id)viewController forCommentsID:(NSString *)commentsID animated:(BOOL)animated;

+(void) authenticateEmail:(NSString *)emailAddress withUsername:(NSString *)userName completion:(void (^)(BOOL success, NSError *error))completionBlock;

+(void) triggerMessageFrom:(NSString *)fromName
                 avatarURL:(NSString *)avatar
               messageText:(NSString *)messageText
                 mediaType:(NSUInteger)mediaType
                  mediaURL:(NSString *)mediaURL
                actionType:(NSUInteger)actionType
                actionName:(NSString *)actionName
                 actionURL:(NSString *)actionURL
                completion:(void (^)(NSDictionary *result, NSError *error))completionBlock;

@end
