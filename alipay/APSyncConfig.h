//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface APSyncConfig : NSObject
{
}

+ (id)removeConfigDicNode:(id)arg1 biz:(id)arg2;
+ (id)arrayListWithKey:(id)arg1 inConfig:(id)arg2;
+ (_Bool)updateConfigWithBizConfigNode:(id)arg1 SyncBizConfigType:(long long)arg2;
+ (id)allSyncConfigList;
+ (id)syncConfig2UpNodeList:(id)arg1;
+ (id)syncConfig2NodeList:(id)arg1 isBucket:(_Bool)arg2;
+ (id)syncConfigListAdapter;
+ (id)validateConfigFromDisk;
+ (id)syncConfigList;
+ (id)removeWhitespace:(id)arg1;
+ (id)syncConfigListWithType:(id)arg1 configList:(id)arg2 cmd:(id)arg3;

@end

