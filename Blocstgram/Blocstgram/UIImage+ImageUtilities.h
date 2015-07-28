//
//  UIImage+ImageUtilities.h
//  Blocstgram
//
//  Created by McCay Barnes on 7/19/15.
//  Copyright (c) 2015 McCay Barnes. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageUtilities)

-(UIImage *) imageWithFixedOrientation;
-(UIImage *) imageResizedToMatchAspectRatioOfSize:(CGSize)size;
-(UIImage *) imageCroppedToRect:(CGRect)cropRect;
-(UIImage *) imageByScalingToSize:(CGSize)size andCroppingWithRect:(CGRect)rect;

@end
