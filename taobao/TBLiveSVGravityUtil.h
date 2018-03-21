//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CMMotionManager;

@interface TBLiveSVGravityUtil : NSObject
{
    CDUnknownBlockType _block;
    CMMotionManager *_manager;
    unsigned long long _orientation;
}

@property(nonatomic) unsigned long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) CMMotionManager *manager; // @synthesize manager=_manager;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)unSetupGravityListener;
- (void)setupGravityListener;
- (void)dealloc;
- (id)init;

@end

