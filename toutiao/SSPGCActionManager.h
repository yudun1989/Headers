//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TTHttpTask;
@protocol SSPGCActionManagerDelegate;

@interface SSPGCActionManager : NSObject
{
    id <SSPGCActionManagerDelegate> _delegate;
    CDUnknownBlockType _likeBlock;
    TTHttpTask *_shareActionTask;
    TTHttpTask *_likeActionTask;
}

@property(nonatomic) __weak TTHttpTask *likeActionTask; // @synthesize likeActionTask=_likeActionTask;
@property(nonatomic) __weak TTHttpTask *shareActionTask; // @synthesize shareActionTask=_shareActionTask;
@property(copy, nonatomic) CDUnknownBlockType likeBlock; // @synthesize likeBlock=_likeBlock;
@property(nonatomic) __weak id <SSPGCActionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)likePGCAccount:(id)arg1 isLikeAction:(_Bool)arg2 extraTrack:(id)arg3 likeBlock:(CDUnknownBlockType)arg4;
- (void)unlikePGCAccount:(id)arg1 extraTrack:(id)arg2 likeBlock:(CDUnknownBlockType)arg3;
- (void)likePGCAccount:(id)arg1 extraTrack:(id)arg2 likeBlock:(CDUnknownBlockType)arg3;
- (void)unlikePGCAccount:(id)arg1 likeBlock:(CDUnknownBlockType)arg2;
- (void)likePGCAccount:(id)arg1 likeBlock:(CDUnknownBlockType)arg2;
- (void)changePGCAccount:(id)arg1 likeStatus:(_Bool)arg2 extraTrack:(id)arg3 likeBlock:(CDUnknownBlockType)arg4;
- (void)changePGCAccount:(id)arg1 likeStatus:(_Bool)arg2 likeBlock:(CDUnknownBlockType)arg3;
- (void)sharePGCUser:(id)arg1 shareMsg:(id)arg2;
- (id)unlikePGCUserURLString;
- (id)likePGCUserURLString;
- (id)sharePGCUserURLString;
- (void)cancel;
- (void)dealloc;

@end

