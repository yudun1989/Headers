//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEVideoEffectView, AWEVideoFilterEffect, HTSVideoSepcialEffect, UIButton;

@protocol AWEVideoEffectViewDelegate <NSObject>

@optional
- (void)videoEffectView:(AWEVideoEffectView *)arg1 didClickedRevokeBtn:(UIButton *)arg2;
- (void)videoEffectView:(AWEVideoEffectView *)arg1 clickedCellWithTimeEffect:(HTSVideoSepcialEffect *)arg2;
- (void)videoEffectView:(AWEVideoEffectView *)arg1 beingLongPressWithType:(AWEVideoFilterEffect *)arg2;
- (void)videoEffectView:(AWEVideoEffectView *)arg1 beginLongPressWithType:(AWEVideoFilterEffect *)arg2;
- (void)videoEffectView:(AWEVideoEffectView *)arg1 didCancelLongPressWithType:(AWEVideoFilterEffect *)arg2;
- (void)videoEffectView:(AWEVideoEffectView *)arg1 didFinishLongPressWithType:(AWEVideoFilterEffect *)arg2;
@end

