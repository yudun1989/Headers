//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IPlugin-Protocol.h"

@class NSArray, NSString;
@protocol IPlugin;

@interface TUIThreadCheckPlugin : NSObject <IPlugin>
{
}

@property(readonly, nonatomic) NSString *name;
- (void)loadInContainer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *icon;
@property(readonly, nonatomic) _Bool isOn;
@property(readonly, nonatomic) NSArray<IPlugin> *subPlugins;
@property(readonly) Class superclass;

@end

