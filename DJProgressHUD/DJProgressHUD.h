//
//  CPProgressView.h
//  Cloud Play OSX
//
//  Created by Daniel Jackson on 4/22/14.
//  Copyright (c) 2014 Daniel Jackson. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>

/*#define popupWidth  120
#define popupHeight 120

#define popupAlpha 0.9

#define xOffset 0
#define yOffset 0

#define indicatorSize 40*/

@class DJActivityIndicator;

@interface DJProgressHUD : NSView

+ (void)showStatus:(NSString*)status FromView:(NSView*)view;

+ (void)dismiss;

@property (nonatomic, readonly) BOOL displaying;

// Customization
#define pMaxWidth1 250
#define pMaxHeight1 200

//General Popup Values
@property (nonatomic) CGVector pOffset;
@property (nonatomic) CGFloat pAlpha;

//Padding
@property (nonatomic) CGFloat pPadding;

@property (nonatomic) CGSize indicatorSize;
@property (nonatomic) CGVector indicatorOffset;
@property (nonatomic) CGSize labelSize;
@property (nonatomic) CGVector labelOffset;

@end
