//
//  ImageLibraryViewController.h
//  Blocstgram
//
//  Created by McCay Barnes on 7/22/15.
//  Copyright (c) 2015 McCay Barnes. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ImageLibraryViewController;

@protocol ImageLibraryViewControllerDelegate <NSObject>

-(void) imageLibraryViewController:(ImageLibraryViewController *)imageLibraryViewController didCompleteWithImage:(UIImage *)image;

@end

@interface ImageLibraryViewController : UICollectionViewController

@property (nonatomic, weak) NSObject <ImageLibraryViewControllerDelegate> *delegate;

@end
