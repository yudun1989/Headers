//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBSDKMTOPServer;

@interface TBBootImageItemSelector : NSObject
{
    TBSDKMTOPServer *_server;
}

+ (id)sharedInstance;
@property(retain, nonatomic) TBSDKMTOPServer *server; // @synthesize server=_server;
- (void).cxx_destruct;
- (_Bool)checkCurrentPage:(id)arg1 whiteList:(id)arg2 blackList:(id)arg3;
- (_Bool)validateBootImageInfoItem:(id)arg1 configModel:(id)arg2 isColdStart:(_Bool)arg3;
- (_Bool)validateMarketItem:(id)arg1 configModel:(id)arg2 isColdStart:(_Bool)arg3;
- (void)marketChoose:(_Bool)arg1 bootImageInfoItems:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (_Bool)validateBrandItem:(id)arg1 brandInfo:(id)arg2 configModel:(id)arg3 isColdStart:(_Bool)arg4;
- (void)brandChoose:(_Bool)arg1 bootImageInfoItems:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (_Bool)shouldRequestBrandForBootImageInfoItems:(id)arg1 configModel:(id)arg2 isColdStart:(_Bool)arg3;
- (_Bool)readyBootImageItem:(_Bool)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

