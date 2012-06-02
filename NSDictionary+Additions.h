//
//  NSDictionary+Additions.h
//  Raven
//
//  Created by Ajay Chainani on 11/25/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary ( Safe )

- (id)safeObjectForKey:(id)aKey;

@end
