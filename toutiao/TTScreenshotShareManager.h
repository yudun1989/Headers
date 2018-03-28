//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TTActivityShareManager, UIImage;

@interface TTScreenshotShareManager : NSObject
{
    UIImage *_displayImage;
    UIImage *_shareImage;
    UIImage *_toolbarImage;
    NSString *_label;
    TTActivityShareManager *_activityShareManager;
    UIImage *_screenshotImage;
    UIImage *_downloadImage;
    struct CGRect _screenshotFrame;
    struct CGRect _toolbarFrame;
}

+ (struct CGRect)screenshotFrame;
+ (struct CGRect)toolbarFrame;
+ (void)setupScreenshotShareManager;
+ (id)shareManager;
@property(retain, nonatomic) UIImage *downloadImage; // @synthesize downloadImage=_downloadImage;
@property(retain, nonatomic) UIImage *screenshotImage; // @synthesize screenshotImage=_screenshotImage;
@property(nonatomic) struct CGRect toolbarFrame; // @synthesize toolbarFrame=_toolbarFrame;
@property(nonatomic) struct CGRect screenshotFrame; // @synthesize screenshotFrame=_screenshotFrame;
@property(retain, nonatomic) TTActivityShareManager *activityShareManager; // @synthesize activityShareManager=_activityShareManager;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImage *toolbarImage; // @synthesize toolbarImage=_toolbarImage;
@property(readonly, nonatomic) UIImage *shareImage; // @synthesize shareImage=_shareImage;
@property(retain, nonatomic) UIImage *displayImage; // @synthesize displayImage=_displayImage;
- (void).cxx_destruct;
- (id)shareLogo;
- (id)shareQR;
- (id)screenshotViewControllerName;
- (id)screenshotViewController;
- (_Bool)screenshotEnable;
- (id)allowScreenshotVCArray;
- (id)shareText;
- (void)getScreenImageFromWindow;
- (void)setupScreenshotShare;
- (void)makeOneScreenshot;
- (void)dealloc;
- (id)init;

@end

