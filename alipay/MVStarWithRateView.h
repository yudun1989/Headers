//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MVRateLabel, O2OStarView;

@interface MVStarWithRateView : UIView
{
    MVRateLabel *_rateLabel;
    O2OStarView *_starView;
    double _rate;
    long long _count;
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) double rate; // @synthesize rate=_rate;
- (void).cxx_destruct;
- (void)setRateLabelColor:(id)arg1;
- (void)setRate:(double)arg1 andCount:(long long)arg2;
- (id)initWithRate:(double)arg1 andCount:(long long)arg2;
- (id)initWithRate:(double)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)commonInit;
- (void)awakeFromNib;
- (id)init;

@end

