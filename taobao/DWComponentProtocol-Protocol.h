//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, UIView;

@protocol DWComponentProtocol <NSObject>
- (void)onNormalScreen;
- (void)onFullScreen;
- (void)onHidden;
- (void)onShow;
- (UIView *)getView;
- (_Bool)isRenderFinished;
- (void)refreshComponent:(NSDictionary *)arg1;
- (void)renderView;
@end

