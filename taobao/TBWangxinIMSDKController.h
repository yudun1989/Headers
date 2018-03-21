//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IYWAlipaySDKInterface-Protocol.h"
#import "TBWangxinServiceProtocol-Protocol.h"
#import "WXMessageFilterProtocal-Protocol.h"
#import "YWMessageLifeDelegate-Protocol.h"

@class NSString, UIImage;

@interface TBWangxinIMSDKController : NSObject <WXMessageFilterProtocal, IYWAlipaySDKInterface, YWMessageLifeDelegate, TBWangxinServiceProtocol>
{
    _Bool _isDelayLoadedFrameworkReady;
    UIImage *_image1;
    UIImage *_image2;
    UIImage *_image3;
}

+ (id)getBundleForFramework:(id)arg1 returnError:(id *)arg2;
+ (_Bool)isDependantDynamicLibraryLoaded:(id)arg1;
+ (_Bool)loadDependantDynamicLibraryIfNeed;
+ (_Bool)loadDependantDynamicLibrary:(id)arg1;
+ (_Bool)loadFramework:(id)arg1 returnError:(id *)arg2;
+ (id)dictFromString:(id)arg1;
@property(retain, nonatomic) UIImage *image3; // @synthesize image3=_image3;
@property(retain, nonatomic) UIImage *image2; // @synthesize image2=_image2;
@property(retain, nonatomic) UIImage *image1; // @synthesize image1=_image1;
@property(nonatomic) _Bool isDelayLoadedFrameworkReady; // @synthesize isDelayLoadedFrameworkReady=_isDelayLoadedFrameworkReady;
- (void).cxx_destruct;
- (_Bool)loadFramework:(id)arg1 returnError:(id *)arg2;
- (void)fetchProfileForPerson:(id)arg1 inTribe:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_configureProfile:(id)arg1;
- (void)messageLifeDidSend:(id)arg1 conversationId:(id)arg2 result:(id)arg3;
- (id)messageLifeWillSend:(id)arg1;
- (void)_conversationChanged:(id)arg1 indexPath:(id)arg2 type:(unsigned long long)arg3 newIndexPath:(id)arg4;
- (void)_clearConversationUpdatedCallback;
- (void)_configureConversationUpdatedCallback;
- (id)_identifierKeyForBlock;
- (_Bool)cleanForLogout;
- (_Bool)prepareForLogin;
- (_Bool)prepareForDelayLoadedService;
- (_Bool)prepareForStartup;
- (void)prepareForImage:(id)arg1;
- (void)_configureDynamicLib:(id)arg1;
- (void)_loadDelayService;
- (id)fetchIMKitWithIMCore:(id)arg1;
- (void)_configureStaticLib:(id)arg1;
- (id)fetchIMCore;
- (void)dealloc;
- (id)init;
- (_Bool)shouldReceiveRedPacketNotifyMessage:(id)arg1;
- (_Bool)_isValidAVMessageDict:(id)arg1;
- (_Bool)_handleVideoCallMessage:(id)arg1;
- (_Bool)shouldReceiveMessage:(id)arg1;
- (void)processAuth_V2Result:(id)arg1 standbyCallback:(CDUnknownBlockType)arg2;
- (void)auth_V2WithInfo:(id)arg1 fromScheme:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)processOrderWithPaymentResult:(id)arg1 standbyCallback:(CDUnknownBlockType)arg2;
- (void)payOrder:(id)arg1 fromScheme:(id)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
