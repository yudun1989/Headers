//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

@class SLCameraFRDataManager;

@interface WXCameraFRComponent : WXComponent
{
    SLCameraFRDataManager *_dataManager;
}

@property(nonatomic) __weak SLCameraFRDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void).cxx_destruct;
- (void)updateSubComponent:(id)arg1 scale:(float)arg2 angle:(float)arg3 centerX:(float)arg4 centerY:(float)arg5 width:(float)arg6 height:(float)arg7 whRate:(float)arg8;
- (void)updateFRComponent;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

@end

