//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NBPluginBase.h"

@interface NBPlugin4LoadingView : NBPluginBase
{
}

- (void)hideLoading:(id)arg1 context:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)showLoading:(id)arg1 context:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)hideLoading;
- (void)showLoading:(id)arg1;
- (id)currentViewController;
- (void)addJSApis;
- (void)handleEvent:(id)arg1;
- (void)pluginDidLoad;

@end

