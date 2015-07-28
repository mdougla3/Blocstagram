//
//  User.h
//  Blocstgram
//
//  Created by McCay Barnes on 7/6/15.
//  Copyright (c) 2015 McCay Barnes. All rights reserved.
//

#import "UIKit/UIKit.h"
#import <Foundation/Foundation.h>

@interface User : NSObject <NSCoding>

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *fullname;
@property (nonatomic, strong) NSURL *profilePictureURL;
@property (nonatomic, strong) UIImage *profilePicture;

-(instancetype) initWithDictionary:(NSDictionary *)userDictionary;

@end
