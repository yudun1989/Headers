//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString, QQAIOUnReadCountView;

@interface QQAIONavigationLeftView : UIButton
{
    QQAIOUnReadCountView *_unreadCountView;
    NSString *_voiceStr;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setUnreadCountViewHidden:(long long)arg1;
- (void)createLeftButtonImageNormal:(id)arg1 ImageNormalSelected:(id)arg2 voiceStr:(id)arg3 action:(SEL)arg4 target:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

@end

