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
#import "Comment.h"
#import "LikeButton.h"

typedef NS_ENUM(NSInteger, MediaDownloadState) {
    MediaDownloadStateNeedsImage           = 0,
    MediaDownloadStateDownloadInProgress   = 1,
    MediaDownloadStateNonRecoverableError  = 2,
    MediaDownloadStateHasImage             = 3
};

@class User;

@interface Media : NSObject <NSCoding>

@property (strong, nonatomic) NSString *idNumber;
@property (strong, nonatomic) User *user;
@property (strong, nonatomic) NSURL *mediaURL;
@property (strong, nonatomic) UIImage *image;
@property (nonatomic, assign) MediaDownloadState downloadState;

@property (strong, nonatomic) NSString *caption;
@property (strong, nonatomic) NSArray *comments;

@property (nonatomic, assign) LikeState likeState;

-(instancetype) initWithDictionary:(NSDictionary *)mediaDictionary;

@end
