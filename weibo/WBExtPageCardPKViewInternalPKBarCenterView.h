//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface WBExtPageCardPKViewInternalPKBarCenterView : UIView
{
    _Bool _empty;
    UIColor *_leftColor;
    UIColor *_rightColor;
    UIColor *_emptyColor;
    unsigned long long _barType;
}

@property(nonatomic) unsigned long long barType; // @synthesize barType=_barType;
@property(nonatomic) _Bool empty; // @synthesize empty=_empty;
@property(retain, nonatomic) UIColor *emptyColor; // @synthesize emptyColor=_emptyColor;
@property(retain, nonatomic) UIColor *rightColor; // @synthesize rightColor=_rightColor;
@property(retain, nonatomic) UIColor *leftColor; // @synthesize leftColor=_leftColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

