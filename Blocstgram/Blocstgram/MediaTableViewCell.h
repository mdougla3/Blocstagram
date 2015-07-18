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

@class Media, MediaTableViewCell;

@protocol MediaTableViewCellDelegate <NSObject>

-(void) cell:(MediaTableViewCell *)cell didTapImageView:(UIImageView *)imageView;
-(void) cell:(MediaTableViewCell *)cell didLongPressImageView:(UIImageView *)imageView;
-(void) cellDidPressLikeButton:(MediaTableViewCell *)cell; 

@end

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;
@property (nonatomic, weak) id <MediaTableViewCellDelegate> delegate;

+(CGFloat) heightForMediaItem:(Media *) mediaItem width:(CGFloat)width;

@end
