//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol H5PreRPCManagerProtocal;

@interface H5PreRPCManager : NSObject
{
    id <H5PreRPCManagerProtocal> _h5PreRPCManagerDelegate;
    NSMutableDictionary *_preRPCResultStore;
    NSMutableArray *_rpcCallers;
}

@property(retain, nonatomic) NSMutableArray *rpcCallers; // @synthesize rpcCallers=_rpcCallers;
@property(retain, nonatomic) NSMutableDictionary *preRPCResultStore; // @synthesize preRPCResultStore=_preRPCResultStore;
@property(nonatomic) __weak id <H5PreRPCManagerProtocal> h5PreRPCManagerDelegate; // @synthesize h5PreRPCManagerDelegate=_h5PreRPCManagerDelegate;
- (void).cxx_destruct;
- (void)cleanDataWithQuery:(id)arg1;
- (void)clean;
- (void)dealloc;
- (id)createQuerykeyWithParams:(id)arg1;
- (_Bool)shouldWaitForPreRPCWithParams:(id)arg1;
- (void)doRPCWithParams:(id)arg1;
- (id)getRPCResultWithRPCParams:(id)arg1;
- (id)init;

@end
