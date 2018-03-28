//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LOTAnimationView, NSTimer, UILabel;

@interface TTFTVShowLogoView : UIView
{
    LOTAnimationView *_logoView;
    UILabel *_bonusDescribeLabel;
    UILabel *_bonusLabel;
    NSTimer *_logoLoopTimer;
}

+ (double)tvShowLogoViewHeight;
@property(retain, nonatomic) NSTimer *logoLoopTimer; // @synthesize logoLoopTimer=_logoLoopTimer;
@property(retain, nonatomic) UILabel *bonusLabel; // @synthesize bonusLabel=_bonusLabel;
@property(retain, nonatomic) UILabel *bonusDescribeLabel; // @synthesize bonusDescribeLabel=_bonusDescribeLabel;
@property(retain, nonatomic) LOTAnimationView *logoView; // @synthesize logoView=_logoView;
- (void).cxx_destruct;
- (id)ttf_formatPrize:(long long)arg1;
- (void)setActivityPrize:(long long)arg1;
- (void)initUIComponents;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

