//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMApiRegister : NSObject
{
}

+ (_Bool)registerApp:(id)arg1 withDescription:(id)arg2 andAppSupportContentFlag:(unsigned long long)arg3;
+ (_Bool)registerApp:(id)arg1 andAppSupportContentFlag:(unsigned long long)arg2;
+ (id)buildAppDictionary:(id)arg1 oldAppDictionary:(id)arg2;
+ (id)getIconString;
+ (id)getRegisterDictionary:(id)arg1;
+ (id)getRegisterPasteboardName;
+ (id)shareInstance;
- (void)DidEnterBackground:(id)arg1;
- (void)startMTA:(id)arg1;

@end

