//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AliPerformanceEnv;
@protocol AliHAContextProtocol;

@interface AliPerformanceMonitorManager : NSObject
{
    id <AliHAContextProtocol> _context;
    CDUnknownBlockType _performanceDataHandler;
    AliPerformanceEnv *_demonTask;
}

+ (double)interAnalysisNetCost;
+ (id)shareInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) AliPerformanceEnv *demonTask; // @synthesize demonTask=_demonTask;
@property(copy, nonatomic) CDUnknownBlockType performanceDataHandler; // @synthesize performanceDataHandler=_performanceDataHandler;
@property(retain, nonatomic) id <AliHAContextProtocol> context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)privateHandeMonitorType:(long long)arg1 andData:(id)arg2 andPageName:(id)arg3;

@end

