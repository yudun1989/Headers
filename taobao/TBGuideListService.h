//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, TBGuideMenuItem;

@interface TBGuideListService : NSObject
{
    _Bool _isToday;
    int _rowType;
    int _listPage;
    int _totalCount;
    TBGuideMenuItem *_currentInterstItem;
    NSString *_zanTotalInfo;
    NSString *_toast;
    NSMutableArray *_listItemArray;
    NSString *_sp_bts;
    NSString *_alg_bts;
    NSString *_interest_name;
    NSDictionary *_banner;
    NSArray *_banners;
    long long _logCount;
    struct CGPoint _contentOffset;
}

@property(nonatomic) long long logCount; // @synthesize logCount=_logCount;
@property(retain, nonatomic) NSArray *banners; // @synthesize banners=_banners;
@property(retain, nonatomic) NSDictionary *banner; // @synthesize banner=_banner;
@property(retain, nonatomic) NSString *interest_name; // @synthesize interest_name=_interest_name;
@property(retain, nonatomic) NSString *alg_bts; // @synthesize alg_bts=_alg_bts;
@property(retain, nonatomic) NSString *sp_bts; // @synthesize sp_bts=_sp_bts;
@property(nonatomic) _Bool isToday; // @synthesize isToday=_isToday;
@property(nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) int listPage; // @synthesize listPage=_listPage;
@property(retain, nonatomic) NSMutableArray *listItemArray; // @synthesize listItemArray=_listItemArray;
@property(nonatomic) int rowType; // @synthesize rowType=_rowType;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(retain, nonatomic) NSString *toast; // @synthesize toast=_toast;
@property(retain, nonatomic) NSString *zanTotalInfo; // @synthesize zanTotalInfo=_zanTotalInfo;
@property(retain, nonatomic) TBGuideMenuItem *currentInterstItem; // @synthesize currentInterstItem=_currentInterstItem;
- (void).cxx_destruct;
- (void)processRequestListArray:(id)arg1;
- (void)removeContentWith:(id)arg1;
- (void)handleLoadMore:(id)arg1 error:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailed:(CDUnknownBlockType)arg4 onLoadEnd:(CDUnknownBlockType)arg5;
- (void)handleTopFreshWithRequest:(id)arg1 error:(id)arg2 isToday:(_Bool)arg3 isDisplayTip:(_Bool)arg4 onSuccess:(CDUnknownBlockType)arg5 onFailed:(CDUnknownBlockType)arg6;
- (void)onLoadMoreFresh:(CDUnknownBlockType)arg1 onFailed:(CDUnknownBlockType)arg2 onLoadEnd:(CDUnknownBlockType)arg3;
- (void)onTopFreshForToday:(_Bool)arg1 isDisplayTip:(_Bool)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailed:(CDUnknownBlockType)arg4;
- (id)initWithInterestItem:(id)arg1;
- (id)init;

@end

