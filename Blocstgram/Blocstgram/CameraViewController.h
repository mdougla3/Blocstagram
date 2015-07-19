//
//  CameraViewController.h
//  Blocstgram
//
//  Created by McCay Barnes on 7/19/15.
//  Copyright (c) 2015 McCay Barnes. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "CameraToolbar.h"

@class CameraViewController;

@protocol CameraViewControllerDelegate <NSObject>

-(void) cameraViewController:(CameraViewController *)cameraViewController didCompleteWithImage:(UIImage *)image;

@end

@interface CameraViewController : UIViewController

@property (nonatomic, weak) NSObject <CameraViewControllerDelegate> *delegate;

@end
