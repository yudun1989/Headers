//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SSImpressionProtocol-Protocol.h"

@class NSMutableDictionary, NSString, UIView;
@protocol TTRexxarEngine;

@interface TTRImpressionObj : NSObject <SSImpressionProtocol>
{
    NSMutableDictionary *_keyStore;
    NSMutableDictionary *_visibleItemIds;
    UIView<TTRexxarEngine> *_webview;
}

@property(nonatomic) __weak UIView<TTRexxarEngine> *webview; // @synthesize webview=_webview;
@property(retain, nonatomic) NSMutableDictionary *visibleItemIds; // @synthesize visibleItemIds=_visibleItemIds;
@property(retain, nonatomic) NSMutableDictionary *keyStore; // @synthesize keyStore=_keyStore;
- (void).cxx_destruct;
- (void)needRerecordImpressions;
- (void)leaveView;
- (void)enterView;
- (void)recordItem:(id)arg1 visible:(_Bool)arg2 groupKey:(id)arg3 listType:(int)arg4 groupExtra:(id)arg5;
- (void)handleImpressions:(id)arg1 restartVisibleItems:(_Bool)arg2;
- (void)resetVisibleItemIds;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

