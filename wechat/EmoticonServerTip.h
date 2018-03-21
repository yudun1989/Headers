//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface EmoticonServerTip : MMObject <PBCoding>
{
    unsigned int m_newCount;
    unsigned int m_freeCount;
    NSString *m_iconUrl;
    unsigned int m_lastUpdateTime;
    unsigned int m_personalNewCount;
    unsigned int m_addButtonNewCount;
    _Bool m_isNeedBadge;
}

+ (id)loadFromCache;
+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (void)initialize;
@property(nonatomic) unsigned int m_addButtonNewCount; // @synthesize m_addButtonNewCount;
@property(nonatomic) unsigned int m_personalNewCount; // @synthesize m_personalNewCount;
@property(nonatomic) _Bool m_isNeedBadge; // @synthesize m_isNeedBadge;
@property(nonatomic) unsigned int m_lastUpdateTime; // @synthesize m_lastUpdateTime;
@property(retain, nonatomic) NSString *m_iconUrl; // @synthesize m_iconUrl;
@property(nonatomic) unsigned int m_freeCount; // @synthesize m_freeCount;
@property(nonatomic) unsigned int m_newCount; // @synthesize m_newCount;
- (void).cxx_destruct;
- (void)saveToCache;
- (id)init;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

