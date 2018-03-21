//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, UIColor;

@interface TBSNSCardListParam : NSObject
{
    _Bool _showTop;
    _Bool _pullToRefresh;
    int _dragOffsetToNextPage;
    int _overtimeForNet;
    UIColor *_bkColor;
    NSString *_apiUrl;
    NSString *_apiVersion;
    NSDictionary *_apiParam;
    NSString *_cacheKey;
    NSString *_pageName;
    Class _cardListItemClass;
}

@property(nonatomic) Class cardListItemClass; // @synthesize cardListItemClass=_cardListItemClass;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSDictionary *apiParam; // @synthesize apiParam=_apiParam;
@property(retain, nonatomic) NSString *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(retain, nonatomic) NSString *apiUrl; // @synthesize apiUrl=_apiUrl;
@property(nonatomic) _Bool pullToRefresh; // @synthesize pullToRefresh=_pullToRefresh;
@property(nonatomic) _Bool showTop; // @synthesize showTop=_showTop;
@property(nonatomic) int overtimeForNet; // @synthesize overtimeForNet=_overtimeForNet;
@property(nonatomic) int dragOffsetToNextPage; // @synthesize dragOffsetToNextPage=_dragOffsetToNextPage;
@property(retain, nonatomic) UIColor *bkColor; // @synthesize bkColor=_bkColor;
- (void).cxx_destruct;
- (_Bool)paged;
- (id)init;

@end

