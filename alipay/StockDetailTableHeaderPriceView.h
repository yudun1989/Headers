//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface StockDetailTableHeaderPriceView : UIView
{
    UILabel *_statusLabel;
    UILabel *_priceLabel;
    UILabel *_percentLabel;
    UILabel *_amoubtLabel;
}

@property(retain, nonatomic) UILabel *amoubtLabel; // @synthesize amoubtLabel=_amoubtLabel;
@property(retain, nonatomic) UILabel *percentLabel; // @synthesize percentLabel=_percentLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateTopData:(unsigned long long)arg1 cp:(id)arg2 amount:(id)arg3 percent:(id)arg4 isInFav:(_Bool)arg5 statusText:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1;

@end

