//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CABasicAnimation, CAGradientLayer, DWTagComponentAddCartView, DWTagRoundView, DWTagTextView, NSString;
@protocol DWTagComponentViewProtocol;

@interface DWTagComponentView : UIView <CAAnimationDelegate>
{
    CDUnknownBlockType _removedFromeSuperViewBlock;
    unsigned long long _direction;
    id <DWTagComponentViewProtocol> _tagDelegate;
    NSString *_text;
    DWTagRoundView *_tagRoundView;
    DWTagTextView *_textView;
    DWTagComponentAddCartView *_addCartView;
    CAGradientLayer *_gradientLayer;
    DWTagTextView *_textBackground;
    CABasicAnimation *_textOutAnimation;
    CABasicAnimation *_marqueeStartPointAnimation;
    CABasicAnimation *_marqueeEndPointAnimation;
}

@property(retain, nonatomic) CABasicAnimation *marqueeEndPointAnimation; // @synthesize marqueeEndPointAnimation=_marqueeEndPointAnimation;
@property(retain, nonatomic) CABasicAnimation *marqueeStartPointAnimation; // @synthesize marqueeStartPointAnimation=_marqueeStartPointAnimation;
@property(retain, nonatomic) CABasicAnimation *textOutAnimation; // @synthesize textOutAnimation=_textOutAnimation;
@property(retain, nonatomic) DWTagTextView *textBackground; // @synthesize textBackground=_textBackground;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) DWTagComponentAddCartView *addCartView; // @synthesize addCartView=_addCartView;
@property(retain, nonatomic) DWTagTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) DWTagRoundView *tagRoundView; // @synthesize tagRoundView=_tagRoundView;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) __weak id <DWTagComponentViewProtocol> tagDelegate; // @synthesize tagDelegate=_tagDelegate;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(copy, nonatomic) CDUnknownBlockType removedFromeSuperViewBlock; // @synthesize removedFromeSuperViewBlock=_removedFromeSuperViewBlock;
- (void).cxx_destruct;
- (void)addCartClicked;
- (void)removeFromSuperviewWithAnimation:(_Bool)arg1;
- (void)showWithAnimation:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hideTagRound;
- (void)showTagRound;
- (id)initWithPoint:(struct CGPoint)arg1 text:(id)arg2 direction:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

