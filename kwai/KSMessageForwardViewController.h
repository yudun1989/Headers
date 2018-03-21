//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSTopViewController.h"

#import "KSMessageForwardViewDelegate-Protocol.h"

@class KSMessageForwardView, NSDictionary, NSLayoutConstraint, NSString;
@protocol KSMessageForwardViewControllerDelegate;

@interface KSMessageForwardViewController : KSTopViewController <KSMessageForwardViewDelegate>
{
    id <KSMessageForwardViewControllerDelegate> _delegate;
    KSMessageForwardView *_forwardView;
    NSLayoutConstraint *_bottomConstraint;
    NSDictionary *_dataDic;
}

@property(retain, nonatomic) NSDictionary *dataDic; // @synthesize dataDic=_dataDic;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) KSMessageForwardView *forwardView; // @synthesize forwardView=_forwardView;
@property(nonatomic) __weak id <KSMessageForwardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)keyboardWillHide:(struct CGRect)arg1;
- (void)keyboardWillShow:(struct CGRect)arg1;
- (void)didTapSendVideo:(id)arg1 withText:(id)arg2;
- (void)didTapClose;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)closeViewController;
- (void)showForwardView:(id)arg1 videoData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

