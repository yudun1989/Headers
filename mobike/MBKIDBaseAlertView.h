//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UITapGestureRecognizer;

@interface MBKIDBaseAlertView : UIView <UIGestureRecognizerDelegate>
{
    UIView *_backView;
    UITapGestureRecognizer *_gesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (struct CGSize)sizeOfAttributedString:(id)arg1 maxHeight:(double)arg2;
- (struct CGSize)sizeOfAttributedString:(id)arg1 maxWidth:(double)arg2;
- (id)attributedStringWithString:(id)arg1 font:(id)arg2 lineSpacing:(double)arg3;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)popAnimation;
- (void)addGestureRecognizer;
- (void)dismiss;
- (void)showInAppointView:(id)arg1;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

