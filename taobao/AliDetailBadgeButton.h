//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface AliDetailBadgeButton : UIButton
{
    int _style;
}

@property(nonatomic) int style; // @synthesize style=_style;
- (void)hideBadge;
- (void)setSize:(struct CGSize)arg1;
- (void)badageStyleWhite;
- (void)badageStyleYellow;
- (void)setButtonStyle;
- (void)animation;
- (void)setNumberStyle:(long long)arg1;
- (void)setPointStyle;
- (void)changeColor:(int)arg1;
- (void)updateBadgeCount:(long long)arg1 messagetype:(long long)arg2 animation:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

