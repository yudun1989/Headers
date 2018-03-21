//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBIMInputFunctionItem-Protocol.h"

@class NSString, UIViewController;
@protocol TBIMMessageServiceAdapter;

@interface TBIMInputFunctionItem : NSObject <TBIMInputFunctionItem>
{
    _Bool _isNew;
    int _serviceType;
    NSString *_title;
    NSString *_iconFontName;
    id _defaultFunctionItemContext;
    NSString *_pageName;
    UIViewController *_responseVC;
    NSString *_sessionId;
    NSString *_moduleSPM;
    NSString *_clickSPM;
    id <TBIMMessageServiceAdapter> _messageSvr;
}

@property(nonatomic) __weak id <TBIMMessageServiceAdapter> messageSvr; // @synthesize messageSvr=_messageSvr;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *clickSPM;
@property(copy, nonatomic) NSString *moduleSPM;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) __weak UIViewController *responseVC; // @synthesize responseVC=_responseVC;
@property(copy, nonatomic) NSString *pageName;
@property(retain, nonatomic) id defaultFunctionItemContext; // @synthesize defaultFunctionItemContext=_defaultFunctionItemContext;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(copy, nonatomic) NSString *iconFontName; // @synthesize iconFontName=_iconFontName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)clickItemAction;
- (id)initWithSessionId:(id)arg1 serviceType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

