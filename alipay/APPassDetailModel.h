//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPListModel.h"

@class NSString;

@interface APPassDetailModel : O2OHTTPListModel
{
    _Bool _needRaise1002Exception;
    NSString *_passId;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_partnerId;
    NSString *_serialNumber;
}

@property(nonatomic) _Bool needRaise1002Exception; // @synthesize needRaise1002Exception=_needRaise1002Exception;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *partnerId; // @synthesize partnerId=_partnerId;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *passId; // @synthesize passId=_passId;
- (void).cxx_destruct;
- (id)operationType;
- (_Bool)parseResponse:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (id)cacheKey;
- (_Bool)raise1002Exception;
- (_Bool)isPBResponse;
- (struct requestConfig)requestConfig;
- (id)loadCacheSynchronously;

@end

