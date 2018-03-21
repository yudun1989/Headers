//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString;

@interface MVBorderedButton : UIButton
{
    long long _style;
    double _increasedTouchRadius;
    NSString *_privateTitle;
}

@property(retain, nonatomic) NSString *privateTitle; // @synthesize privateTitle=_privateTitle;
@property(nonatomic) double increasedTouchRadius; // @synthesize increasedTouchRadius=_increasedTouchRadius;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)touchDown:(id)arg1;
- (void)_commonInit;

@end

