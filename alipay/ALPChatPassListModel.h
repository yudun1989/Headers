//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALPBasePassListModel.h"

@class NSString;

@interface ALPChatPassListModel : ALPBasePassListModel
{
    _Bool _hasCacheData;
    _Bool _isLoading;
    NSString *_extParam;
    long long _rowSize;
}

@property(nonatomic) long long rowSize; // @synthesize rowSize=_rowSize;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool hasCacheData; // @synthesize hasCacheData=_hasCacheData;
@property(retain, nonatomic) NSString *extParam; // @synthesize extParam=_extParam;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didFinishLoading;
- (void)reload;
- (id)operationType;
- (void)reset;
- (id)responseObjects:(id)arg1;
- (_Bool)hasNSArrayItem:(id)arg1;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (_Bool)raise1002Exception;
- (_Bool)isPBResponse;
- (struct requestConfig)requestConfig;
- (id)detailSeedIDWithItem:(id)arg1;
- (id)seedIdForPage;

@end

