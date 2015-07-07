//
//  Media.h
//  Blocstgram
//
//  Created by McCay Barnes on 7/6/15.
//  Copyright (c) 2015 McCay Barnes. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIKit/UIKit.h"
#import "User.h"

@class User;

@interface Media : NSObject

@property (strong, nonatomic) NSString *idNumber;
@property (strong, nonatomic) User *user;
@property (strong, nonatomic) NSURL *mediaURL;
@property (strong, nonatomic) UIImage *image;
@property (strong, nonatomic) NSString *caption;
@property (strong, nonatomic) NSArray *comments;


@end
