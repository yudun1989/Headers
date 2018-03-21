//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSCardView.h"

@class NSMutableArray;

@interface TBSNSCard3ImageWithPrice : TBSNSCardView
{
    NSMutableArray *_images;
    NSMutableArray *_icons;
    NSMutableArray *_prices;
    NSMutableArray *_backgrounds;
}

+ (struct CGSize)fixedSize;
@property(retain, nonatomic) NSMutableArray *backgrounds; // @synthesize backgrounds=_backgrounds;
@property(retain, nonatomic) NSMutableArray *prices; // @synthesize prices=_prices;
@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
- (void).cxx_destruct;
- (void)setPriceColor:(id)arg1;
- (void)setBkColor:(id)arg1;
- (void)reset;
- (void)setPrice:(id)arg1 andPercent:(id)arg2 andIconUrl:(id)arg3 andIconSize:(struct CGSize)arg4 atIndex:(long long)arg5;
- (void)setImageWithUrl:(id)arg1 atIndex:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

