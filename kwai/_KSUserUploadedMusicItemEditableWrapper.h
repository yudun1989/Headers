//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSMyMusicsEntryUploaded-Protocol.h"

@class KSUserUploadedMusicItem, KSUserUploadedMusicItemMetaUpdateRequest, NSString;

@interface _KSUserUploadedMusicItemEditableWrapper : NSObject <KSMyMusicsEntryUploaded>
{
    KSUserUploadedMusicItem *_musicItem;
    CDUnknownBlockType _removeBlock;
    KSUserUploadedMusicItemMetaUpdateRequest *_lastUpdateRequest;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain, nonatomic) KSUserUploadedMusicItemMetaUpdateRequest *lastUpdateRequest; // @synthesize lastUpdateRequest=_lastUpdateRequest;
@property(copy, nonatomic) CDUnknownBlockType removeBlock; // @synthesize removeBlock=_removeBlock;
@property(readonly, nonatomic) KSUserUploadedMusicItem *musicItem; // @synthesize musicItem=_musicItem;
- (void).cxx_destruct;
- (void)removeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateMetaWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setMusicName:(id)arg1 artistName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSString *artistName;
@property(readonly, nonatomic) NSString *musicName;
- (id)initWithUploadedMusicItem:(id)arg1 removeBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

