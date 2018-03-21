//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UILabel, UITapGestureRecognizer;
@protocol HCollectionEntranceFooterDelegate;

@interface HCollectionEntranceFooter : UICollectionReusableView <UIGestureRecognizerDelegate>
{
    UILabel *_label;
    UITapGestureRecognizer *_tapGesture;
    id <HCollectionEntranceFooterDelegate> _delegate;
}

+ (double)height;
@property(nonatomic) __weak id <HCollectionEntranceFooterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)doTapGesture:(id)arg1;
- (void)setHighLighted:(_Bool)arg1 Animated:(_Bool)arg2;
- (void)playTapAnimation:(CDUnknownBlockType)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setEnable:(_Bool)arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

