//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, QRChapterDownloadRequest;

@interface OnlineCharpterResponse : NSObject
{
    _Bool _needPay;
    _Bool _charpterRequestSuccess;
    int _resultCode;
    int _maxCharpter;
    QRChapterDownloadRequest *_request;
    NSString *_message;
    NSString *_bookId;
    NSString *_bookTitle;
    NSString *_bookAuthor;
    NSMutableArray *_charpters;
    NSString *_downloadUrl;
    NSString *_sid;
    NSArray *_chapterInfos;
    NSString *_chapterPreviewContent;
    long long _totalBookPrice;
    unsigned long long _discount;
    long long _balance;
    long long _balanceFree;
    long long _vipDiscount;
    long long _vip2Discount;
    long long _specialPrice;
    NSString *_specialPriceMsg;
}

@property(copy, nonatomic) NSString *specialPriceMsg; // @synthesize specialPriceMsg=_specialPriceMsg;
@property(nonatomic) long long specialPrice; // @synthesize specialPrice=_specialPrice;
@property(nonatomic) long long vip2Discount; // @synthesize vip2Discount=_vip2Discount;
@property(nonatomic) long long vipDiscount; // @synthesize vipDiscount=_vipDiscount;
@property(nonatomic) long long balanceFree; // @synthesize balanceFree=_balanceFree;
@property(nonatomic) long long balance; // @synthesize balance=_balance;
@property(nonatomic) unsigned long long discount; // @synthesize discount=_discount;
@property(nonatomic) long long totalBookPrice; // @synthesize totalBookPrice=_totalBookPrice;
@property(retain, nonatomic) NSString *chapterPreviewContent; // @synthesize chapterPreviewContent=_chapterPreviewContent;
@property(retain, nonatomic) NSArray *chapterInfos; // @synthesize chapterInfos=_chapterInfos;
@property(nonatomic) _Bool charpterRequestSuccess; // @synthesize charpterRequestSuccess=_charpterRequestSuccess;
@property(nonatomic) _Bool needPay; // @synthesize needPay=_needPay;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(retain, nonatomic) NSMutableArray *charpters; // @synthesize charpters=_charpters;
@property(nonatomic) int maxCharpter; // @synthesize maxCharpter=_maxCharpter;
@property(copy, nonatomic) NSString *bookAuthor; // @synthesize bookAuthor=_bookAuthor;
@property(copy, nonatomic) NSString *bookTitle; // @synthesize bookTitle=_bookTitle;
@property(copy, nonatomic) NSString *bookId; // @synthesize bookId=_bookId;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property(retain, nonatomic) QRChapterDownloadRequest *request; // @synthesize request=_request;
- (id)getResponseCharpter:(int)arg1;
- (_Bool)hasCharpter:(int)arg1;
- (_Bool)handleResponse:(id)arg1;
- (void)dealloc;
- (id)init;

@end

