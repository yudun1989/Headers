//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ETSDKServer.h"

@class NSString, TBSDKMTOPServer;

@interface ETMTOPServer : ETSDKServer
{
    _Bool _isUseeCode;
    NSString *_dataForKey;
    TBSDKMTOPServer *_request;
}

+ (id)appMonitorDimensionArray;
+ (id)appMonitorPoint;
+ (id)requestWithMethod:(id)arg1;
@property(nonatomic) _Bool isUseeCode; // @synthesize isUseeCode=_isUseeCode;
@property(readonly, nonatomic) TBSDKMTOPServer *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *dataForKey; // @synthesize dataForKey=_dataForKey;
- (void).cxx_destruct;
- (id)dictionaryWithAppMonitorDimensionValue;
- (void)requestDidFailed;
- (void)requestWillStart;
- (id)cacheKey;
- (void)requestDidStart;
- (void)addDataParam:(id)arg1 forKey:(id)arg2;
- (void)setVersion:(id)arg1;
- (void)addParam:(id)arg1 forKey:(id)arg2;
- (id)initWithMethod:(id)arg1;

@end

