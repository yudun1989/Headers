//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXHCProtocol-Protocol.h"

@class NSString;

@interface TBHCHandler : NSObject <WXHCProtocol>
{
}

- (void)onNavRightBtnClicked:(id)arg1;
- (void)onNavCenterBtnClicked:(id)arg1;
- (id)createNavBarRightButton:(id)arg1;
- (id)createNavBarCenterButton:(id)arg1;
- (void)setUpNaviItem:(id)arg1 withConfigItem:(id)arg2;
- (id)md5OfWeexHC:(id)arg1;
- (id)domainOfWeexMHC;
- (_Bool)isValidWeexMHCURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

