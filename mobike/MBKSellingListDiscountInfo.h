//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MBKSellingListDiscountInfo : NSObject
{
    _Bool _showBanner;
    _Bool _hasDiscount;
    _Bool _showTips;
    long long _expire;
    NSString *_submsg;
    long long _discount;
    NSString *_msg;
    NSString *_tips;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool showTips; // @synthesize showTips=_showTips;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) _Bool hasDiscount; // @synthesize hasDiscount=_hasDiscount;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long discount; // @synthesize discount=_discount;
@property(nonatomic) _Bool showBanner; // @synthesize showBanner=_showBanner;
@property(copy, nonatomic) NSString *submsg; // @synthesize submsg=_submsg;
@property(nonatomic) long long expire; // @synthesize expire=_expire;
- (void).cxx_destruct;

@end

