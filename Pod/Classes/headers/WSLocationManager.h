//
//  WSLocationManager.h
//  waysay
//
//  Created by Matt Compton on 7/18/15.
//
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

enum monitorStatus {
    SUCCESS=0,
    LOCATIONUNAVAILBLE=1,
    LOCATIONNOTAUTHORIZED=2,
    NOGEOCODERESPONSE=3,
    UNKNOWNMONITORINGERROR=-1
};

@interface WSLocationManager : NSObject

@property (strong, nonatomic) NSString *userToken;

-(int) startMonitoringLocation:(NSString *)userToken;
-(void) stopMonitoringLocation;
-(CLLocation *) getCurrentLocation;
-(void) refreshRegisteredRegions;

@end
