//
//  MediaFullScreenViewController.h
//  Blocstgram
//
//  Created by McCay Barnes on 7/15/15.
//  Copyright (c) 2015 McCay Barnes. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;

-(instancetype) initWithMedia:(Media *)media;

-(void) centerScrollView;

@end
