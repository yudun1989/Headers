//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface APPassSawtoothBgView : UIView
{
    double _sawtoothInterval;
    UIColor *_sawtoothColor;
    double _sawtoothRadius;
}

@property(nonatomic) double sawtoothRadius; // @synthesize sawtoothRadius=_sawtoothRadius;
@property(retain, nonatomic) UIColor *sawtoothColor; // @synthesize sawtoothColor=_sawtoothColor;
@property(nonatomic) double sawtoothInterval; // @synthesize sawtoothInterval=_sawtoothInterval;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

