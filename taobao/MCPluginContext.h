//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCPluginContextProtocol-Protocol.h"

@class NSDictionary, NSString, UIViewController;

@interface MCPluginContext : NSObject <MCPluginContextProtocol>
{
    UIViewController *_viewController;
    NSString *_pageName;
    NSString *_key;
    NSDictionary *_userInfo;
}

@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

