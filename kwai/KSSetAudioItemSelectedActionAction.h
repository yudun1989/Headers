//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LYWReuseableAction.h"

@class KSMusicItem, NSString;

@interface KSSetAudioItemSelectedActionAction : LYWReuseableAction
{
    unsigned long long _selectedIndex;
    NSString *_audioPath;
    KSMusicItem *_cloudMusicItem;
}

@property(retain, nonatomic) KSMusicItem *cloudMusicItem; // @synthesize cloudMusicItem=_cloudMusicItem;
@property(copy, nonatomic) NSString *audioPath; // @synthesize audioPath=_audioPath;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (id)description;

@end

