//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASSNetworkCoordinator : NSObject
{
}

+ (id)generateSecondApplistCmdRequest:(id)arg1 withModel:(id)arg2 withScanResult:(id)arg3;
+ (id)generateFirstApplistCmdRequest:(id)arg1 withModel:(id)arg2;
+ (void)saveApplistCmd:(id)arg1;
+ (void)updateAppList:(id)arg1 withModel:(id)arg2;
+ (id)parseRPCResult:(id)arg1;
+ (id)generateStaticRequest:(id)arg1 withArgs:(id)arg2 withModel:(id)arg3;
+ (id)updateStaticInfo:(id)arg1 withArgs:(id)arg2 withModel:(id)arg3;

@end

