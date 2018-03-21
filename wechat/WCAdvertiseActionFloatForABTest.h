//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UIImageView, UIView, WCADQuestionExp, WCDataItem;
@protocol WCAdvertiseActionFloatForABTestDelegate;

@interface WCAdvertiseActionFloatForABTest : MMUIView <CAAnimationDelegate>
{
    WCDataItem *m_item;
    WCADQuestionExp *m_questionExp;
    UIImageView *m_bgView;
    UIView *m_firstStepView;
    UIView *m_secondStepView;
    _Bool m_bEndWithOtherTouch;
    id <WCAdvertiseActionFloatForABTestDelegate> _delegate;
}

@property(nonatomic) __weak id <WCAdvertiseActionFloatForABTestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WCADQuestionExp *m_questionExp; // @synthesize m_questionExp;
@property(readonly, nonatomic) WCDataItem *m_item; // @synthesize m_item;
- (void).cxx_destruct;
- (void)onSecondBtnClicked:(id)arg1;
- (id)getExtButton:(id)arg1;
- (void)showExpItems;
- (id)getFirstStepBtnWithTitle:(id)arg1 Icon:(id)arg2 NeedArrow:(_Bool)arg3;
- (id)getFirstSetpBtnByAction:(unsigned int)arg1;
- (void)onFirstBtnClicked:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hideWCADQuestionFloat;
- (void)setShouldReportEndWithOtherTouch;
- (void)showWithItemData:(id)arg1 QuestionExt:(id)arg2 tipPoint:(struct CGPoint)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

