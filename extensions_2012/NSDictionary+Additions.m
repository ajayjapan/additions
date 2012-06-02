//
//  NSDictionary+Additions.m
//  Raven
//
//  Created by Ajay Chainani on 11/25/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import "NSDictionary+Additions.h"

@implementation NSDictionary ( Safe )

- (id)safeObjectForKey:(NSString *)aKey {

    id object = nil;
    
    if (self) {
       object = [self objectForKey:aKey];
    }
    
    if (object == [NSNull null]) {
        object = nil;
    }
    
    return object;
}

@end
