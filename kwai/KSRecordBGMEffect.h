//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSFileBGMEffect.h"

#import "KSLocalAlbumWorkSpaceMusicConvertable-Protocol.h"

@class NSString;

@interface KSRecordBGMEffect : KSFileBGMEffect <KSLocalAlbumWorkSpaceMusicConvertable>
{
}

- (void)setOn:(_Bool)arg1;
- (id)initWithContext:(id)arg1;
- (id)effectWithMusic:(id)arg1 workspacePath:(id)arg2;
- (id)metaMusic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
