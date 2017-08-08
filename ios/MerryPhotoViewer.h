//
//  MerryPhotoViewController.h
//  MerryPhotoViewer
//
//  Created by bang on 19/07/2017.
//  Copyright © 2017 Merryjs.com. All rights reserved.
//

#ifndef MerryPhotoViewController_h
#define MerryPhotoViewController_h
// React
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#import "RCTConvert"
#else
#import <React/RCTBridgeModule.h>
#import <React/RCTConvert.h>
#endif
// NYT
#import <Foundation/Foundation.h>
#import <NYTPhotoViewer/NYTPhotoViewerArrayDataSource.h>
#import <NYTPhotoViewer/NYTPhotosOverlayView.h>
#import <NYTPhotoViewer/NYTPhotosViewController.h>
#import <React/RCTInvalidating.h>

#import <SDWebImage/UIImageView+WebCache.h>

@interface MerryPhotoViewer
    : NSObject <RCTBridgeModule, NYTPhotosViewControllerDelegate, RCTInvalidating>

@property (nonatomic) NSMutableArray* photos;

@property (nonatomic) NYTPhotoViewerArrayDataSource* dataSource;
@property (nonatomic) UIPopoverController* activityPopoverController;

@end

#endif /* MerryPhotoViewController_h */