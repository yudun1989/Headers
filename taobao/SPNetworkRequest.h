//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TBSDKMTOPServer;

@interface SPNetworkRequest : NSObject
{
    CDUnknownBlockType _onSuccessBlock;
    CDUnknownBlockType _onFailBlock;
    CDUnknownBlockType _onEmptyBlock;
    TBSDKMTOPServer *_tbsdkmtopServer;
}

@property(retain, nonatomic) TBSDKMTOPServer *tbsdkmtopServer; // @synthesize tbsdkmtopServer=_tbsdkmtopServer;
@property(copy, nonatomic) CDUnknownBlockType onEmptyBlock; // @synthesize onEmptyBlock=_onEmptyBlock;
@property(copy, nonatomic) CDUnknownBlockType onFailBlock; // @synthesize onFailBlock=_onFailBlock;
@property(copy, nonatomic) CDUnknownBlockType onSuccessBlock; // @synthesize onSuccessBlock=_onSuccessBlock;
- (void).cxx_destruct;
- (void)spNetworkRequestClear;
- (void)spNetworkRequestWithMethod:(id)arg1 version:(id)arg2 dataParams:(id)arg3 isNeedSignCode:(_Bool)arg4;
- (void)spNetworkRequestWithMethod:(id)arg1 version:(id)arg2 dataParams:(id)arg3;

@end

