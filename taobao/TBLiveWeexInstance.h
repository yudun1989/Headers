//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXSDKInstance.h"

@class NSMutableArray, TBLiveWeexPushComponent;

@interface TBLiveWeexInstance : WXSDKInstance
{
    TBLiveWeexInstance *_parentLiveWeex;
    TBLiveWeexPushComponent *_pushComponent;
    NSMutableArray *_childrenLiveWeex;
}

@property(retain, nonatomic) NSMutableArray *childrenLiveWeex; // @synthesize childrenLiveWeex=_childrenLiveWeex;
@property(nonatomic) __weak TBLiveWeexPushComponent *pushComponent; // @synthesize pushComponent=_pushComponent;
@property(nonatomic) __weak TBLiveWeexInstance *parentLiveWeex; // @synthesize parentLiveWeex=_parentLiveWeex;
- (void).cxx_destruct;
- (void)removeLiveWeex:(id)arg1;
- (void)addLiveWeex:(id)arg1;
- (void)disappear;
- (void)appear;
- (void)dealloc;
- (id)init;

@end

