//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface CCRBorderView : UIView
{
    CAShapeLayer *_shapeLayer;
    int _borderType;
    double _cornerRadius;
    double _borderWidth;
    unsigned long long _dashPattern;
    unsigned long long _spacePattern;
    UIColor *_borderColor;
}

@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) unsigned long long spacePattern; // @synthesize spacePattern=_spacePattern;
@property(nonatomic) unsigned long long dashPattern; // @synthesize dashPattern=_dashPattern;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) int borderType; // @synthesize borderType=_borderType;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawDashedBorder;
- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

