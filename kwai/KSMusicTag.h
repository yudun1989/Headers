//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSMusicItem, NSNumber, NSString;

@interface KSMusicTag : NSObject
{
    KSMusicItem *_music;
    NSNumber *_photoCount;
    NSString *_ks_ussid;
}

@property(retain, nonatomic) NSString *ks_ussid; // @synthesize ks_ussid=_ks_ussid;
@property(retain, nonatomic) NSNumber *photoCount; // @synthesize photoCount=_photoCount;
@property(retain, nonatomic) KSMusicItem *music; // @synthesize music=_music;
- (void).cxx_destruct;

@end

