//
//  Waysay.h
//  WS_SDK_Dev
//
//  Created by Matt Compton on 7/28/15.
//  Copyright (c) 2015 Waysay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Waysay : NSObject

+(void) initWithApplicationID:(NSString *)applicationID andOrganizationID:(NSString *)organizationID;
+(void) authenticateUser:(NSString *)username andPassword:(NSString *)password;
+(void) launchInboxFromViewController:(id)viewController;

@end
