//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, TBToolBarController, TBToolbar, UIImage;

@interface UIViewController (TBToolBarController)
+ (_Bool)tbNeedToolbar;
- (void)showToast:(id)arg1 originY:(float)arg2 interval:(float)arg3 target:(id)arg4 action:(SEL)arg5;
- (void)setTbToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) TBToolBarController *tbToolbarController;
@property(readonly, nonatomic) TBToolbar *tbToolbar;
@property(nonatomic) unsigned long long tbToolbarRightGap;
@property(nonatomic) unsigned long long tbToolbarLeftGap;
@property(nonatomic) _Bool tbToolbarHidden;
@property(nonatomic) unsigned long long tbToolbarHeight;
@property(retain, nonatomic) NSArray *tbToolbarItems;
@property(retain, nonatomic) UIImage *tbToolbarImage;
@end

