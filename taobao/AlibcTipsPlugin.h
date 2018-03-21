//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AlibcBasePlugin.h"

#import "AlibcFloatingBannerDelegate-Protocol.h"
#import "AlibcInPluginProtocol-Protocol.h"

@class AlibcApplication, AlibcFloatingBanner, NSString;

@interface AlibcTipsPlugin : AlibcBasePlugin <AlibcFloatingBannerDelegate, AlibcInPluginProtocol>
{
    AlibcApplication *_param;
    AlibcFloatingBanner *_banner;
}

@property(retain, nonatomic) AlibcFloatingBanner *banner; // @synthesize banner=_banner;
@property(retain, nonatomic) AlibcApplication *param; // @synthesize param=_param;
- (void).cxx_destruct;
- (void)jumpBackToSourceApp;
- (void)appBecomeActive:(id)arg1;
- (void)pluginService:(id)arg1;
- (void)alibc_trackBackStatistics:(id)arg1;
- (unsigned long long)module;
- (long long)prior;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

