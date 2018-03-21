//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSEntityProvider-Protocol.h"

@class NSString;
@protocol GMSEntityUIHandler;

@interface GMSMarkupProvider : NSObject <GMSEntityProvider>
{
    struct reffed_ptr<gmscore::vector::GMSMarkupBehavior> _behavior;
    id <GMSEntityUIHandler> _entityUIHandler;
    id _tapTarget;
    SEL _tapSelector;
    char *_passID;
    struct GMSEntityTapPriority _tapPriority;
}

@property(nonatomic) struct GMSEntityTapPriority tapPriority; // @synthesize tapPriority=_tapPriority;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)entityUIHandler;
- (void)wasReleasedFromEntityUIHandler:(id)arg1;
- (void)wasBoundToEntityUIHandler:(id)arg1;
- (void)willDestroyRenderer:(struct EntityRenderer *)arg1;
- (void)didCreateRenderer:(struct EntityRenderer *)arg1 resources:(id)arg2 behaviorCamera:(reffed_ptr_329922e5)arg3;
- (void)itemTapped:(unsigned long long)arg1;
- (void)setTapHandler:(id)arg1 selector:(SEL)arg2;
- (void)clearItems;
- (void)removeItemWithID:(unsigned long long)arg1;
- (unsigned long long)setIcon:(struct WrappedRectangle2D *)arg1 style:(id)arg2 tappable:(_Bool)arg3 priority:(unsigned int)arg4 itemID:(unsigned long long)arg5 name:(basic_string_a490aa4c *)arg6;
- (unsigned long long)setPolygon:(id)arg1 style:(id)arg2 tappable:(_Bool)arg3 scaleMode:(int)arg4 priority:(unsigned int)arg5 itemID:(unsigned long long)arg6;
- (unsigned long long)setPolyline:(id)arg1 fixedIndices:(const set_c08b4b4f *)arg2 style:(id)arg3 tappable:(_Bool)arg4 scaleMode:(int)arg5 priority:(unsigned int)arg6 itemID:(unsigned long long)arg7;
- (unsigned long long)setPolyline:(const vector_aa37bc82 *)arg1 style:(const vector_6e37a17d *)arg2 textureImage:(id)arg3 width:(float)arg4 tappable:(_Bool)arg5 priority:(unsigned int)arg6 itemID:(unsigned long long)arg7;
- (id)initWithPassID:(const char **)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

