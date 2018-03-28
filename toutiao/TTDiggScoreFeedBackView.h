//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, TTScoreGuideViewController, UIWindow;

@interface TTDiggScoreFeedBackView : UIView
{
    _Bool _isShowing;
    UIWindow *_backWindow;
    UIWindow *_originWindow;
    TTScoreGuideViewController *_rootVC;
    NSDictionary *_trackerInfo;
}

@property(copy, nonatomic) NSDictionary *trackerInfo; // @synthesize trackerInfo=_trackerInfo;
@property(retain, nonatomic) TTScoreGuideViewController *rootVC; // @synthesize rootVC=_rootVC;
@property(retain, nonatomic) UIWindow *originWindow; // @synthesize originWindow=_originWindow;
@property(retain, nonatomic) UIWindow *backWindow; // @synthesize backWindow=_backWindow;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
- (void).cxx_destruct;
- (void)setTrackDic:(id)arg1;
- (void)refreshActionDiggBlock:(CDUnknownBlockType)arg1 downBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)dismissFinished:(CDUnknownBlockType)arg1;
- (void)show;
- (id)init;

@end

