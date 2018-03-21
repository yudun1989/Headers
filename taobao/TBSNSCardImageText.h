//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSCardView.h"

@class TBSNSCardPriceView, UIImageView, UIView;

@interface TBSNSCardImageText : TBSNSCardView
{
    double _priceSymbolWidth;
    UIImageView *_image;
    UIImageView *_imageState;
    UIView *_imageBg;
    TBSNSCardPriceView *_price;
}

+ (struct CGSize)getDynamicSizeBySize:(struct CGSize)arg1 andUrl:(id)arg2;
+ (struct CGSize)fixedSize;
@property(retain, nonatomic) TBSNSCardPriceView *price; // @synthesize price=_price;
@property(retain, nonatomic) UIView *imageBg; // @synthesize imageBg=_imageBg;
@property(retain, nonatomic) UIImageView *imageState; // @synthesize imageState=_imageState;
@property(retain, nonatomic) UIImageView *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)reset;
- (void)setStateImage:(id)arg1;
- (void)setPrice:(id)arg1 andPercent:(id)arg2;
- (void)setImageWithUrl:(id)arg1 withSize:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)cardSize;

@end
