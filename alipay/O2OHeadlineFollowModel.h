//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistModel.h"

@class NSString;

@interface O2OHeadlineFollowModel : O2OMistModel
{
    NSString *_authorId;
    unsigned long long _action;
}

@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
- (void).cxx_destruct;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (id)key;

@end

