//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OHTTPModel.h"

@class NSString;

@interface O2OMarketPassCanUseModel : O2OHTTPModel
{
    NSString *_passId;
    NSString *_shareUserId;
}

@property(retain, nonatomic) NSString *shareUserId; // @synthesize shareUserId=_shareUserId;
@property(copy, nonatomic) NSString *passId; // @synthesize passId=_passId;
- (void).cxx_destruct;
- (_Bool)isPBResponse;
- (_Bool)parseResponse:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (id)key;

@end

