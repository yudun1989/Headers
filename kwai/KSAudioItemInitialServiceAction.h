//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LYWServiceAction-Protocol.h"

@class KSMusicItem, NSString;

@interface KSAudioItemInitialServiceAction : NSObject <LYWServiceAction>
{
    NSString *_audioPath;
    KSMusicItem *_initialMusicItem;
}

@property(retain, nonatomic) KSMusicItem *initialMusicItem; // @synthesize initialMusicItem=_initialMusicItem;
@property(copy, nonatomic) NSString *audioPath; // @synthesize audioPath=_audioPath;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

