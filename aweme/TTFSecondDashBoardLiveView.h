//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LOTAnimationView, UIButton, UILabel;

@interface TTFSecondDashBoardLiveView : UIView
{
    LOTAnimationView *_enterAgainAnimationView;
    UIButton *_enterAgainButton;
    UILabel *_enterAgainTextLabel;
}

+ (id)tt_semiboldFontOfSize:(double)arg1;
@property(retain, nonatomic) UILabel *enterAgainTextLabel; // @synthesize enterAgainTextLabel=_enterAgainTextLabel;
@property(retain, nonatomic) UIButton *enterAgainButton; // @synthesize enterAgainButton=_enterAgainButton;
@property(retain, nonatomic) LOTAnimationView *enterAgainAnimationView; // @synthesize enterAgainAnimationView=_enterAgainAnimationView;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)arg1;
- (void)ttf_applicationWillEnterForeground:(id)arg1;
- (void)ttf_applicationDidEnterBackground:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

