//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@interface WCNewClickAppStatData : MMObject
{
    unsigned int firstEnterTS;
    unsigned int lastQuitTS;
    int interval;
    int backgroundInterval;
    unsigned int switchCount;
}

+ (void)initialize;
@property(nonatomic) unsigned int switchCount; // @synthesize switchCount;
@property(nonatomic) int backgroundInterval; // @synthesize backgroundInterval;
@property(nonatomic) int interval; // @synthesize interval;
@property(nonatomic) unsigned int lastQuitTS; // @synthesize lastQuitTS;
@property(nonatomic) unsigned int firstEnterTS; // @synthesize firstEnterTS;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end

