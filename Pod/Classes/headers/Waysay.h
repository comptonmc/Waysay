//
//  Waysay.h
//  WS_SDK_Dev
//
//  Created by Matt Compton on 7/28/15.
//  Copyright (c) 2015 Waysay. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WSLocationManager.h"

@interface Waysay : NSObject

@property (nonatomic, readonly) BOOL downloadingJWT;
@property (nonatomic, readonly) BOOL downloadingSettings;
@property (strong, nonatomic) WSLocationManager *wsLocationManager;

+ (Waysay *) sharedApplication;

-(id) initWithApplicationID:(NSString *)applicationID andOrganizationID:(NSString *)organizationID;
+(void) launchInboxFromViewController:(id)viewController;
+(void) registerDeviceID:(NSData *)deviceID;
+(void) resetUserWithCompletionHandler:(void (^)(NSDictionary *result, NSError *error))completionBlock;

@end
