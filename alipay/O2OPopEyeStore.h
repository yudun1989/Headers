//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZFluxStore.h"

@class O2OPopEyeViewController;

@interface O2OPopEyeStore : VZFluxStore
{
    O2OPopEyeViewController *_vc;
}

@property(nonatomic) __weak O2OPopEyeViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (void)onDispatch:(const struct FluxAction *)arg1;
- (id)initWithDispatcher:(id)arg1 withVC:(id)arg2;

@end

