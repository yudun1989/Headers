//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSMTimeRange-Protocol.h"
#import "NSCopying-Protocol.h"

@class KSESubAsset, NSString;

@interface KSMTextureItem : NSObject <KSMTimeRange, NSCopying>
{
    _Bool _needReload;
    KSESubAsset *_gpbObj;
}

@property(nonatomic) _Bool needReload; // @synthesize needReload=_needReload;
@property(retain, nonatomic) KSESubAsset *gpbObj; // @synthesize gpbObj=_gpbObj;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setTextureDataWithResolution:(struct CGSize)arg1;
- (id)generateTextureWithResolution:(struct CGSize)arg1;
- (void)setNeedReloadTextureData;
- (id)init;
- (void)_createDisplayRangeIfNeed;
@property(nonatomic) double duration;
@property(nonatomic) double location;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
