//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTradeComponentModel.h"

@class TBTradeTextStyle;

@interface TBTradeSubmitOrderModel : TBTradeComponentModel
{
    TBTradeTextStyle *_style;
}

@property(retain, nonatomic) TBTradeTextStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)currencySymbol;
- (id)tipsUrl;
- (id)tipsMore;
- (id)tipsMsg;
- (id)submitTitle;
- (void)reload:(id)arg1;

@end

