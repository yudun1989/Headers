//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSTimer;

@interface AliHAImageMemoryManager : NSObject
{
    _Bool _enableAutoManageImageMemory;
    _Bool _enableContextLog;
    _Bool _enableNSLog;
    _Bool _canRestoreImage;
    _Bool _canHandleTMImage;
    id _context;
    NSDictionary *_parameters;
    NSMutableDictionary *_viewImageViewMap;
    NSMutableArray *_viewControllerMonitorList;
    NSTimer *_updateTimer;
    NSMutableDictionary *_controllerNavMap;
}

@property(nonatomic) _Bool canHandleTMImage; // @synthesize canHandleTMImage=_canHandleTMImage;
@property(nonatomic) _Bool canRestoreImage; // @synthesize canRestoreImage=_canRestoreImage;
@property(retain, nonatomic) NSMutableDictionary *controllerNavMap; // @synthesize controllerNavMap=_controllerNavMap;
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(retain, nonatomic) NSMutableArray *viewControllerMonitorList; // @synthesize viewControllerMonitorList=_viewControllerMonitorList;
@property(retain, nonatomic) NSMutableDictionary *viewImageViewMap; // @synthesize viewImageViewMap=_viewImageViewMap;
@property(nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool enableNSLog; // @synthesize enableNSLog=_enableNSLog;
@property(nonatomic) _Bool enableContextLog; // @synthesize enableContextLog=_enableContextLog;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(nonatomic) _Bool enableAutoManageImageMemory; // @synthesize enableAutoManageImageMemory=_enableAutoManageImageMemory;
- (void).cxx_destruct;
- (void)log:(id)arg1;
- (void)onViewExit:(id)arg1;
- (void)handleMemoryWarning;
- (void)stop;
- (void)start;
- (void)updateTimerFunc:(id)arg1;
- (void)removeViewMonitor:(id)arg1;
- (void)restoreViewState:(id)arg1;
- (void)addViewMonitor:(id)arg1;
- (void)clearAllImageViewLoad:(id)arg1;
- (id)findAllImageView:(id)arg1;
- (_Bool)canMonitorViewController:(id)arg1;

@end

