//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKLikeDialogDelegate-Protocol.h"
#import "NSDiscardableContent-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class FBSDKAccessToken, NSDate, NSMapTable, NSString;

@interface FBSDKLikeActionController : NSObject <FBSDKLikeDialogDelegate, NSDiscardableContent, NSSecureCoding>
{
    FBSDKAccessToken *_accessToken;
    unsigned long long _contentAccessCount;
    _Bool _contentDiscarded;
    NSMapTable *_dialogToAnalyticsParametersMap;
    NSMapTable *_dialogToUpdateBlockMap;
    NSString *_likeCountStringWithLike;
    NSString *_likeCountStringWithoutLike;
    _Bool _objectIsLikedIsPending;
    _Bool _objectIsLikedOnServer;
    _Bool _objectIsPage;
    unsigned long long _refreshState;
    NSString *_socialSentenceWithLike;
    NSString *_socialSentenceWithoutLike;
    NSString *_unlikeToken;
    NSString *_verifiedObjectID;
    _Bool _objectIsLiked;
    NSDate *_lastUpdateTime;
    NSString *_objectID;
    unsigned long long _objectType;
}

+ (_Bool)supportsSecureCoding;
+ (id)likeActionControllerForObjectID:(id)arg1 objectType:(unsigned long long)arg2;
+ (id)_cacheFileURL;
+ (void)_applicationWillResignActiveNotification:(id)arg1;
+ (void)_accessTokenDidChangeNotification:(id)arg1;
+ (void)initialize;
+ (_Bool)isDisabled;
@property(readonly, nonatomic) _Bool objectIsLiked; // @synthesize objectIsLiked=_objectIsLiked;
@property(readonly, nonatomic) unsigned long long objectType; // @synthesize objectType=_objectType;
@property(readonly, copy, nonatomic) NSString *objectID; // @synthesize objectID=_objectID;
@property(readonly, copy, nonatomic) NSDate *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
- (void).cxx_destruct;
- (_Bool)_useOGLike;
- (void)_updateWithObjectIsLiked:(long long)arg1 likeCountStringWithLike:(id)arg2 likeCountStringWithoutLike:(id)arg3 socialSentenceWithLike:(id)arg4 socialSentenceWithoutLike:(id)arg5 unlikeToken:(id)arg6 soundEnabled:(_Bool)arg7 animated:(_Bool)arg8 deferred:(_Bool)arg9;
- (void)_setExecuting:(_Bool)arg1 forKey:(id)arg2;
- (void)_refreshWithMode:(unsigned long long)arg1;
- (void)_publishUnlikeWithUpdateBlock:(CDUnknownBlockType)arg1 analyticsParameters:(id)arg2 fromViewController:(id)arg3;
- (void)_publishLikeWithUpdateBlock:(CDUnknownBlockType)arg1 analyticsParameters:(id)arg2 fromViewController:(id)arg3;
- (void)_publishIfNeededWithUpdateBlock:(CDUnknownBlockType)arg1 analyticsParameters:(id)arg2 fromViewController:(id)arg3;
- (void)_presentLikeDialogWithUpdateBlock:(CDUnknownBlockType)arg1 analyticsParameters:(id)arg2 fromViewController:(id)arg3;
- (void)_ensureVerifiedObjectID:(CDUnknownBlockType)arg1;
- (void)_configure;
- (void)likeDialog:(id)arg1 didFailWithError:(id)arg2;
- (void)likeDialog:(id)arg1 didCompleteWithResults:(id)arg2;
- (_Bool)isContentDiscarded;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (_Bool)beginContentAccess;
- (void)toggleLikeWithSoundEnabled:(_Bool)arg1 analyticsParameters:(id)arg2 fromViewController:(id)arg3;
- (void)refresh;
@property(readonly, copy, nonatomic) NSString *socialSentence;
@property(readonly, copy, nonatomic) NSString *likeCountString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithObjectID:(id)arg1 objectType:(unsigned long long)arg2 accessToken:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

