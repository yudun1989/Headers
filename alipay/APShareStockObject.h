//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface APShareStockObject : NSObject <NSCoding>
{
    int _increaseState;
    NSString *_stockName;
    NSString *_stockCode;
    NSString *_stockPrice;
    NSString *_stockPriceChange;
    NSString *_stockPriceChangeRatio;
    double _time;
    NSString *_wepageUrl;
    NSString *_extend;
}

@property(retain, nonatomic) NSString *extend; // @synthesize extend=_extend;
@property(retain, nonatomic) NSString *wepageUrl; // @synthesize wepageUrl=_wepageUrl;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) int increaseState; // @synthesize increaseState=_increaseState;
@property(retain, nonatomic) NSString *stockPriceChangeRatio; // @synthesize stockPriceChangeRatio=_stockPriceChangeRatio;
@property(retain, nonatomic) NSString *stockPriceChange; // @synthesize stockPriceChange=_stockPriceChange;
@property(retain, nonatomic) NSString *stockPrice; // @synthesize stockPrice=_stockPrice;
@property(retain, nonatomic) NSString *stockCode; // @synthesize stockCode=_stockCode;
@property(retain, nonatomic) NSString *stockName; // @synthesize stockName=_stockName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

