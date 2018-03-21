//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCPluginContext.h"

#import "MCPluginShareItemSelectContextProtocol-Protocol.h"

@class NSDictionary, NSString, UIViewController;
@protocol MCShareItemSelectInterface;

@interface MCPluginShareItemSelectContext : MCPluginContext <MCPluginShareItemSelectContextProtocol>
{
    id <MCShareItemSelectInterface> _shareItemSelectConponet;
}

@property(nonatomic) __weak id <MCShareItemSelectInterface> shareItemSelectConponet; // @synthesize shareItemSelectConponet=_shareItemSelectConponet;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *key;
@property(retain, nonatomic) NSString *pageName;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDictionary *userInfo;
@property(nonatomic) __weak UIViewController *viewController;

@end

