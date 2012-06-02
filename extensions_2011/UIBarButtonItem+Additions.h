//
//  UIBarButtonItem+Additions.h
//  
//
//  Created by Ajay Chainani on 2/16/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIBarButtonItem(MyCategory)

+ (UIBarButtonItem*)barItemWithImage:(UIImage*)image target:(id)target action:(SEL)action;

+ (UIBarButtonItem*)barItemWithImage:(UIImage*)image downImage:(UIImage*)image target:(id)target action:(SEL)action;


@end
