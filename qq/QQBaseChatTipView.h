//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQPubUIView.h>

@class UILabel;

@interface QQBaseChatTipView : QQPubUIView
{
    UILabel *_textLabel;
    struct CGRect _startRect;
    struct CGRect _endRect;
    double _delayRemoveTimeInterval;
}

- (void)endAniamtionEnd:(id)arg1;
- (void)delayRemoveSelfViewAniamtionEnd;
- (void)startAnimationEnd:(id)arg1;
- (void)startAnimation;
- (void)dealloc;

@end

