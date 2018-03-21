//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor;

@interface AliDetailPriceViewStyle : NSObject
{
    _Bool _needShrink;
    _Bool _bold;
    _Bool _priceCharFontSmall;
    UIColor *_priceColor;
    UIColor *_nameColor;
    UIColor *_descColor;
    long long _priceFontSize;
    long long _nameFontSize;
    long long _descFontSize;
}

@property(nonatomic) _Bool priceCharFontSmall; // @synthesize priceCharFontSmall=_priceCharFontSmall;
@property(nonatomic) _Bool bold; // @synthesize bold=_bold;
@property(nonatomic) _Bool needShrink; // @synthesize needShrink=_needShrink;
@property(nonatomic) long long descFontSize; // @synthesize descFontSize=_descFontSize;
@property(nonatomic) long long nameFontSize; // @synthesize nameFontSize=_nameFontSize;
@property(nonatomic) long long priceFontSize; // @synthesize priceFontSize=_priceFontSize;
@property(retain, nonatomic) UIColor *descColor; // @synthesize descColor=_descColor;
@property(retain, nonatomic) UIColor *nameColor; // @synthesize nameColor=_nameColor;
@property(retain, nonatomic) UIColor *priceColor; // @synthesize priceColor=_priceColor;
- (void).cxx_destruct;
- (void)priceColorAdapter:(id)arg1;
- (id)initWithPriceColor:(id)arg1 nameColor:(id)arg2 descColor:(id)arg3 priceFontSize:(long long)arg4 nameFontSize:(long long)arg5 descFontSize:(long long)arg6;
- (id)initWithPriceColor:(id)arg1 nameColor:(id)arg2 priceFontSize:(long long)arg3 nameFontSize:(long long)arg4;

@end

