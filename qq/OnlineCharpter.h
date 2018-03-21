//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface OnlineCharpter : NSObject
{
    _Bool _isFree;
    int _charpterId;
    int _responseCode;
    NSString *_charpterTitle;
    NSString *_responseMessage;
    NSString *_chapterPreviewContent;
    long long _chapterPrice;
    long long _bookPrice;
    long long _autoPaySubCode;
    long long _balance;
    long long _balanceFree;
    long long _vipDiscount;
    long long _vip2Discount;
    long long _discount;
    long long _specialPrice;
    NSString *_specialPriceMsg;
}

@property(copy, nonatomic) NSString *specialPriceMsg; // @synthesize specialPriceMsg=_specialPriceMsg;
@property(nonatomic) long long specialPrice; // @synthesize specialPrice=_specialPrice;
@property(nonatomic) long long discount; // @synthesize discount=_discount;
@property(nonatomic) long long vip2Discount; // @synthesize vip2Discount=_vip2Discount;
@property(nonatomic) long long vipDiscount; // @synthesize vipDiscount=_vipDiscount;
@property(nonatomic) long long balanceFree; // @synthesize balanceFree=_balanceFree;
@property(nonatomic) long long balance; // @synthesize balance=_balance;
@property(nonatomic) long long autoPaySubCode; // @synthesize autoPaySubCode=_autoPaySubCode;
@property(nonatomic) long long bookPrice; // @synthesize bookPrice=_bookPrice;
@property(nonatomic) long long chapterPrice; // @synthesize chapterPrice=_chapterPrice;
@property(nonatomic) _Bool isFree; // @synthesize isFree=_isFree;
@property(copy, nonatomic) NSString *chapterPreviewContent; // @synthesize chapterPreviewContent=_chapterPreviewContent;
@property(copy, nonatomic) NSString *responseMessage; // @synthesize responseMessage=_responseMessage;
@property(nonatomic) int responseCode; // @synthesize responseCode=_responseCode;
@property(nonatomic) int charpterId; // @synthesize charpterId=_charpterId;
@property(copy, nonatomic) NSString *charpterTitle; // @synthesize charpterTitle=_charpterTitle;
- (void)dealloc;

@end

