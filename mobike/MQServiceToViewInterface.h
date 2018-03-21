//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YiIMServiceDelegate-Protocol.h"

@class NSString, YiService;
@protocol MQServiceToViewInterfaceDelegate;

@interface MQServiceToViewInterface : NSObject <YiIMServiceDelegate>
{
    id <MQServiceToViewInterfaceDelegate> _serviceToViewDelegate;
    YiService *_service;
}

+ (void)sendImageMessageWithImage:(id)arg1 messageId:(id)arg2 delegate:(id)arg3;
+ (void)sendTextMessageWithContent:(id)arg1 messageId:(id)arg2 delegate:(id)arg3;
+ (id)sharedYiService;
@property(retain, nonatomic) YiService *service; // @synthesize service=_service;
@property(nonatomic) __weak id <MQServiceToViewInterfaceDelegate> serviceToViewDelegate; // @synthesize serviceToViewDelegate=_serviceToViewDelegate;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

