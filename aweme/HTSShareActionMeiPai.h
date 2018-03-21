//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HTSShareAction-Protocol.h"
#import "MPSDKProtocol-Protocol.h"

@class NSString;

@interface HTSShareActionMeiPai : NSObject <MPSDKProtocol, HTSShareAction>
{
    CDUnknownBlockType _openURLCompletion;
}

+ (void)load;
@property(copy, nonatomic) CDUnknownBlockType openURLCompletion; // @synthesize openURLCompletion=_openURLCompletion;
- (void).cxx_destruct;
- (void)shareToMeipaiDidSucceed:(_Bool)arg1;
- (_Bool)handleOpenURL:(id)arg1 openURLCompletion:(CDUnknownBlockType)arg2;
- (void)_shareVideoAtPathToMeiPai:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)shareWithShareType:(long long)arg1 shareContentModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)shareWithShareType:(long long)arg1 shareModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shareActionAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

