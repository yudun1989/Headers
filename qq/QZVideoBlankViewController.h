//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZoneViewController.h>

@class UIImage, UIImageView;

@interface QZVideoBlankViewController : QZoneViewController
{
    UIImageView *_imageView;
    _Bool _preNavBarHidden;
    _Bool _isNeedRecovedBar;
    UIImage *_backgroundImage;
}

+ (void)popBlankFromViewController:(id)arg1;
+ (_Bool)pushBlankFromViewController:(id)arg1 toViewController:(id)arg2;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
- (void).cxx_destruct;
- (void)updateBackgroundImage;
- (void)willMoveToParentViewController:(id)arg1;
- (void)exitBlank;
- (void)viewWillAppear:(_Bool)arg1;
- (void)recoveNavBarState;
- (void)dealloc;
- (void)viewDidLoad;

@end

