//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQSMItemElementBaseView.h>

@class UILabel;

@interface QQSMItemElementTimerView : QQSMItemElementBaseView
{
    UILabel *_timeLabel;
}

+ (struct CGSize)layoutElements:(id)arg1 withMaxSize:(struct CGSize)arg2;
- (void)scheduleRefresh;
- (void)removeFromSuperview;
- (int)getRemainTime;
- (id)addLableWithText:(id)arg1 frame:(struct CGRect)arg2;
- (void)showEndingTips:(id)arg1 frame:(struct CGRect)arg2;
- (void)setQQSMItemElementBase:(id)arg1;
- (void)dealloc;

@end

