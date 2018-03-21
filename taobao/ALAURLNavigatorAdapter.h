//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AliAppURLNavigator-Protocol.h"

@class NSString;
@protocol AliAppURLNavigator;

@interface ALAURLNavigatorAdapter : NSObject <AliAppURLNavigator>
{
    id <AliAppURLNavigator> _navigator;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <AliAppURLNavigator> navigator; // @synthesize navigator=_navigator;
- (void).cxx_destruct;
- (id)objectForUrl:(id)arg1 withTarget:(id)arg2 withParams:(id)arg3;
- (_Bool)aliOpenUrl:(id)arg1 withTarget:(id)arg2 withParams:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

