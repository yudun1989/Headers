//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;
@protocol OperatotViewDelegate;

@interface OperatorView : UIView
{
    UIImageView *imgView;
    UILabel *label;
    _Bool _animating;
    long long _operatorType;
    id <OperatotViewDelegate> _delegate;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) id <OperatotViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long operatorType; // @synthesize operatorType=_operatorType;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
- (void)dealloc;
- (void)setLikeStatus:(_Bool)arg1;
- (void)beginLikeAnimation:(CDUnknownBlockType)arg1;
- (void)tap;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchEndDelay;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
