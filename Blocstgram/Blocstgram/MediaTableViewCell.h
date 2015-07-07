//
//  MediaTableViewCell.h
//  Blocstgram
//
//  Created by McCay Barnes on 7/6/15.
//  Copyright (c) 2015 McCay Barnes. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Media.h"
#import "User.h"
#import "Comment.h"

@class Media;

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;

+(CGFloat) heightForMediaItem:(Media *) mediaItem width:(CGFloat)width;

@end
