//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ImmPayEventPlugin.h"

@class MMPNaviVC;

@interface ImmPayPluginSharePaySel : ImmPayEventPlugin
{
    MMPNaviVC *_naviVC;
}

@property(retain, nonatomic) MMPNaviVC *naviVC; // @synthesize naviVC=_naviVC;
- (void).cxx_destruct;
- (void)loadQRCodeWithDict:(id)arg1;
- (void)loadSocialView:(id)arg1 params:(id)arg2;
- (_Bool)onEvent:(id)arg1 param:(id)arg2;

@end

