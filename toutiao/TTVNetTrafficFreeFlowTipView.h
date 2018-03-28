//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SSThemedLabel, UIButton;

@interface TTVNetTrafficFreeFlowTipView : UIView
{
    _Bool _isSubscribe;
    CDUnknownBlockType _continuePlayBlock;
    CDUnknownBlockType _subscribeBlock;
    SSThemedLabel *_tipLabel;
    UIButton *_continuePlayBtn;
    UIButton *_subscribeBtn;
    NSString *_tipText;
}

@property(copy, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
@property(nonatomic) _Bool isSubscribe; // @synthesize isSubscribe=_isSubscribe;
@property(retain, nonatomic) UIButton *subscribeBtn; // @synthesize subscribeBtn=_subscribeBtn;
@property(retain, nonatomic) UIButton *continuePlayBtn; // @synthesize continuePlayBtn=_continuePlayBtn;
@property(retain, nonatomic) SSThemedLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(copy, nonatomic) CDUnknownBlockType subscribeBlock; // @synthesize subscribeBlock=_subscribeBlock;
@property(copy, nonatomic) CDUnknownBlockType continuePlayBlock; // @synthesize continuePlayBlock=_continuePlayBlock;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 tipText:(id)arg2 isSubscribe:(_Bool)arg3;

@end

