//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ASSContactInfoManager : NSObject
{
    NSString *_contactInfo;
    NSObject<OS_dispatch_queue> *_messageQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(retain) NSString *contactInfo; // @synthesize contactInfo=_contactInfo;
- (void).cxx_destruct;
- (id)getContactInfo;
- (void)notifyContactInfoChange:(id)arg1;
- (void)registerContactMonitorService;
- (id)init;

@end

