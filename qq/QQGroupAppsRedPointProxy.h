//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQGroupAppsRedPointProxy : NSObject
{
}

+ (id)getGroupAppListOIDBSSOPkg:(id)arg1;
+ (id)getGroupAppListReqPkg:(unsigned long long)arg1;
+ (id)parse0x8d3_1Response:(basic_string_075b6133 *)arg1;
+ (id)parseAppList:(basic_string_075b6133 *)arg1;
+ (id)create0x5be_1RequestFromGroupCode:(unsigned long long)arg1 groupAppsNum:(unsigned int)arg2 version:(unsigned int)arg3;
+ (id)parse0x5be_1Response:(basic_string_075b6133 *)arg1;
+ (id)create0xaf4RequestFromGroupCode:(unsigned long long)arg1 version:(id)arg2;
+ (id)parse0xaf4Response:(basic_string_075b6133 *)arg1;

@end

