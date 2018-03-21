//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWELiveAudienceViewController, AWELiveBackgroundView, UIViewController;

@interface AWELiveHotTableViewCell : UITableViewCell
{
    _Bool _isSlide;
    _Bool _isShowLive;
    AWELiveAudienceViewController *_viewController;
    UIViewController *_parentVC;
    AWELiveBackgroundView *_baseView;
}

+ (id)identifier;
@property(retain, nonatomic) AWELiveBackgroundView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) _Bool isShowLive; // @synthesize isShowLive=_isShowLive;
@property(nonatomic) _Bool isSlide; // @synthesize isSlide=_isSlide;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(retain, nonatomic) AWELiveAudienceViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)_removeChildVC;
- (void)_addChildVC:(id)arg1;
- (void)startPlay;
- (void)clear;
- (void)configWithModel:(id)arg1 withParentVC:(id)arg2;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

