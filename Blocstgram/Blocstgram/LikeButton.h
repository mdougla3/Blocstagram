//
//  LikeButton.h
//  Blocstgram
//
//  Created by McCay Barnes on 7/18/15.
//  Copyright (c) 2015 McCay Barnes. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, LikeState) {
    LikeStateNotLiked      = 0,
    LikeStateLiking        = 1,
    LikeStateLiked         = 2,
    LikeStateUnliking      = 3
};

@interface LikeButton : UIButton

@property (nonatomic, assign) LikeState likeButtonState;

@end
