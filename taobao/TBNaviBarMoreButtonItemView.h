//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBNaviBarBaseButton.h"

@class TBBadgeView;

@interface TBNaviBarMoreButtonItemView : TBNaviBarBaseButton
{
    _Bool _isDisableHighlight;
    TBBadgeView *_badgeView;
    struct CGPoint _badgeNumberOrigin;
    struct CGPoint _badgePointOrigin;
    struct CGRect _hitFrame;
}

@property(nonatomic) struct CGPoint badgePointOrigin; // @synthesize badgePointOrigin=_badgePointOrigin;
@property(nonatomic) struct CGPoint badgeNumberOrigin; // @synthesize badgeNumberOrigin=_badgeNumberOrigin;
@property(nonatomic) _Bool isDisableHighlight; // @synthesize isDisableHighlight=_isDisableHighlight;
@property(nonatomic) struct CGRect hitFrame; // @synthesize hitFrame=_hitFrame;
@property(retain, nonatomic) TBBadgeView *badgeView; // @synthesize badgeView=_badgeView;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)showHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setBadgeTitle:(id)arg1;
- (void)showSolidPoint;
- (void)updateBadgeCount:(long long)arg1 isPointStyle:(_Bool)arg2;
- (id)init;

@end

