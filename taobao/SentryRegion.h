//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableSet, NSString;

@interface SentryRegion : NSObject <NSCopying>
{
    _Bool _running;
    NSMutableSet *_allScene;
    NSString *_regionId;
    CDUnknownBlockType _regionChangedBlock;
    CDUnknownBlockType _sceneChangedBlock;
    unsigned long long _transportType;
}

@property(readonly, nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(copy, nonatomic) CDUnknownBlockType sceneChangedBlock; // @synthesize sceneChangedBlock=_sceneChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType regionChangedBlock; // @synthesize regionChangedBlock=_regionChangedBlock;
@property(retain, nonatomic) NSString *regionId; // @synthesize regionId=_regionId;
@property(nonatomic) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) NSMutableSet *allScene; // @synthesize allScene=_allScene;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)sceneRemove:(id)arg1;
- (_Bool)sceneAdd:(id)arg1;
- (id)initWithRegionId:(id)arg1;
- (id)initWithRegionId:(id)arg1 transportType:(unsigned long long)arg2;

@end

