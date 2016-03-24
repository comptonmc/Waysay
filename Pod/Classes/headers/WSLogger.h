//
//  WSLogger.h
//  ws-ios-sdk-dev2
//
//  Created by Matt Compton on 2/9/16.
//  Copyright © 2016 Waysay. All rights reserved.
//

#ifndef WSLogger_h
#define WSLogger_h


#ifdef WSDEBUG
    #define WSLog( logString, ... ) NSLog((@"DEBUG: %s:[Line: %d] - " logString), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
    #define WSLog(...)
#endif


#define WSError( logString, ... ) NSLog((@"ERROR: %s:[Line: %d] - " logString), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)

#ifdef WSDEVELOPMENT
#define WSENV @"development"
#elif WSSTAGING
#define WSENV @"staging"
#else
#define WSENV @"production"
#endif

#endif /* WSLogger_h */
