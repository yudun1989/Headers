//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBMarketingSensorService.h"

@class CMMotionManager;

@interface TBMarketingMagnetometerService : TBMarketingSensorService
{
    CMMotionManager *_motionManager;
}

@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (void)stop;
- (_Bool)executeServiceWithParams:(struct NSDictionary *)arg1 andCallback:(CDUnknownBlockType)arg2;

@end

